 /* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

void insertNode(Node* &root, const int data) {
    if(!root) {
        root = new Node(data);
        root->left = root->right = nullptr;
    }

    else {
        if(data < root->data) 
            insertNode(root->left, data);
        else 
            insertNode(root->right, data);
    }
}

void LevelOrder(Node *root) {
    if(!root) 
        return;
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node *curr = q.front();
        cout<< curr->data << " ";
        q.pop();

        if(curr->left != nullptr)
            q.push(curr->left);
        if(curr->right != nullptr)  
            q.push(curr->right);
    }
}

int main()
{

    Node *root = NULL;
    int n; cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        insertNode(root, arr[i]);
    } 

    LevelOrder(root);    
     
    return 0;

} */


/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};


void insertNode(Node* &root, const int data) {
    if(!root) {
        root = new Node(data);
        root->left= root->right = nullptr;
    }

    else {
        if(data < root->data) 
            insertNode(root->left, data);
        else 
            insertNode(root->right, data);
    }
}

void levelOrderTraversal(Node *root) {
    if(!root) 
        return;
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node *curr = q.front();
        cout << curr->data <<" ";
      
        if(curr->left) 
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);

        q.pop();
    }
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);

    Node *root = nullptr;
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>> arr[i];
        insertNode(root, arr[i]);
    }

    levelOrderTraversal(root);
 
    return 0;
}
 */

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

/// insert the node in the tree...
void insertNode(Node* &root, const int data) {
    if(!root) {
        root = new Node(data);
        root->left = root->right = nullptr;
    }

    else {
        if(data < root->data)  
            insertNode(root->left, data);
        else 
            insertNode(root->right, data);
    }
}


vector<int> levelOrderTraversal(Node *root) {
    vector<int> ans;
    queue<Node*> q;
    q.push(root);

    if(!root)
        return ans;
    while(!q.empty()) {
        Node *curr = q.front();
        ans.push_back(curr->data);

        if(curr->left) 
            q.push(curr->left);
        if(curr->right) 
            q.push(curr->right);

        q.pop();
    }

    return ans;
}

void print_arr(vector<int> &arr) {
    for(const auto x : arr)
        cout << x << " ";
    cout<< endl;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        insertNode(root, arr[i]);
    }
    

    vector<int> ans = levelOrderTraversal(root);
    print_arr(ans);
 
    return 0;
}

 