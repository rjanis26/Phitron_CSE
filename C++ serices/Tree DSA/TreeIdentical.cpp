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
    if(root == nullptr) {
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

int isIdentical(Node *tree1, Node *tree2) {
    if(tree1 == nullptr and tree2 == nullptr) 
        return 1;
    
    return (tree1 and tree2) && (tree1->data == tree2->data) && isIdentical(tree1->left, tree2->left) && isIdentical(tree1->right, tree2->right);
}


int main()
{
    Node *root = nullptr, *root1 = nullptr;

    int n; cin>> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) 
        cin>> a[i];

    for(int i=0; i<n; i++) 
        cin>> b[i];
    
    for(const auto &x : a)
        insertNode(root, x);
    for(const auto &y : b) 
        insertNode(root1, y);

    (isIdentical(root, root1)) ? cout <<"yes\n" : cout<<"No\n";

   
 

    EXIT_SUCCESS;
}
 */
 
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int val) {
            this->data = val;
            this->left = this->right = nullptr;
        }
};

void insertNode(Node* &root, const int data) {
    if(root == nullptr) {
        root = new Node(data);
        root->left = root->right = nullptr;
    }

    else {
        if(data < root->data) 
            insertNode(root->left , data);
        else 
            insertNode(root->right, data);
    }
}

int isSum(Node *root) {
    if(root == nullptr) 
        return 0;
    
    if(root->left == nullptr and root->right == nullptr)
        return root->data;
    
    int left = isSum(root->left);
    int right = isSum(root->right);

         // left and right subtree
    if (left != INT_MIN && right != INT_MIN && root->data == left + right) {
        return 2 * root->data;
    }
 
    return INT_MIN;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
         cin>> arr[i];
        insertNode(root, arr[i]);
    }
       
    
    if(isSum(root) == INT_MIN) 
        cout<<"Sum tree\n";
    else 
        cout <<"Not sum tree\n";
 

    EXIT_SUCCESS;
} */

/* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int val) {
            this->data = val;
            this->left = this->right = nullptr;
        }
};

void insertNode(Node* &root, const int data) {
    if(root == nullptr) {
        root = new Node(data);
        root->left = root->right = nullptr;
    }

    else {
        if(data < root->data) 
            insertNode(root->left , data);
        else 
            insertNode(root->right, data);
    }
}

void preOrder(Node *root) {
    if(root == nullptr) 
        return;
    
    cout << root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void convertMirorr(Node *root) {
    if(root == nullptr) 
        return;
    
    convertMirorr(root->left);
    convertMirorr(root->right);
    swap(root->left, root->right);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // Node *root = nullptr;
    // int n; cin>>n;
    // vector<int> arr(n);
    // for(int i=0; i<n; i++) {
    //      cin>> arr[i];
    //     insertNode(root, arr[i]);
    // }

     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
       
    convertMirorr(root);
    preOrder(root);
    

    EXIT_SUCCESS;
} */

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int val) {
            this->data = val;
            this->left = this->right = nullptr;
        }
};

void findDiff(Node *root, int &diff, const int level) {
    if(root == nullptr) 
        return;
    
    if(level&1) 
        diff += root->data;
    else 
        diff -= root->data;

    findDiff(root->left, diff, level+1);
    findDiff(root->right, diff, level+1);
}


int findDiff(Node  *root) {
    int diff =0;
    findDiff(root, diff, 1);
    return diff;
}
 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    cout << "Diff: " << findDiff(root);
    
    EXIT_SUCCESS;
}

     */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class solution {

    public:
        vector<int> preorderTraversal(TreeNode *root) {
            vector<int> ans;
            preorderTraversal(root, ans);
            return ans;
        }
 

    private:
        void preorderTraversal(TreeNode *root, vector<int> &v) {
            if(root == nullptr) {
                v.push_back(root.val);
                preorderTraversal(root->left, v);
                preorderTraversal(root.right, v);
            }
        }

int main()
{   
 
    return 0;
} */


// find the size of the tree...
/* 
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

void insertNode(Node* &root, const int data) {
    if(root == nullptr) {
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

int getLength(Node *root) {
    if(root == nullptr) 
        return 0;

    return 1 + getLength(root->left) + getLength(root->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;

    int n; cin>> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin>> arr[i];

    for(const auto &data : arr) 
        insertNode(root, data);
    cout<<"Tree size: " << getLength(root) << endl;

 

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


void insertNode(Node* &root, const int data) {
    if(root == nullptr) {
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


int findHeight(Node *root) {
    if(root == nullptr) 
        return 0;
     
    return 1 + max(findHeight(root->left), findHeight(root->right));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;
    int n; cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    for(const auto val : arr) 
        insertNode(root, val);

    cout<<"Height: " << findHeight(root) << endl;
 

    EXIT_SUCCESS;
 }  


