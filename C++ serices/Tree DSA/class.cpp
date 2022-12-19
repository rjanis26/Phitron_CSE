
/* https://www.techiedelight.com/binary-tree-interview-questions/ */
/* https://www.geeksforgeeks.org/binary-tree-data-structure/ */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int value;
        Node *left, *right;
        Node(int data) {
            this->value = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

Node *add(int data) {
    Node *newNode = new Node(data);
    newNode->left = newNode->right = nullptr;
    return newNode;
}


void inorderTraversal(Node* &root) {
    if(root == nullptr)
        return;
    
    inorderTraversal(root->left);
    cout<<root->value << " ";
    inorderTraversal(root->right);

}

int main()
{

    Node *root = add(1);
    root->left = add(4);
    root->right = add(3);
    root->left->left = add(5);
    root->left->right = add(55);
    inorderTraversal(root);

 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define enl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int val) {
            this->data = val;
            this->left = nullptr;
            this->right = nullptr;
        }
};

void add_node(Node* &root,   int data) {
    if(root == nullptr) {
        root = new Node(data);
        root->left = root->right = nullptr;
    }

    else {
        if(data < root->data) 
            add_node(root->left, data);
        else 
            add_node(root->right, data);
    }
}

void preoderTraversal(Node* &root) {
    if(root) 
        return;
    cout << root->data <<" ";
    preoderTraversal(root->left);
    preoderTraversal(root->right);
}

int main()
{

    Node *root = nullptr;
    int n;  cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>> d;
        add_node(root, d);
    }

    preoderTraversal(root);

    // {11, 23, 3, 5, 9, 15, 2, 20};


    return 0;
} */

 /*  
#include<bits/stdc++.h>
using namespace std;
 
class Node {
    public: 
        int data;
        Node *left, *right;
        Node(int val) {
            this->data = val;
            this->left = nullptr;
            this->right = nullptr;
        }
};


// void insertNode(Node *&root, const int data) {
//     if (root == nullptr) {
//         root = new Node(data);
//         root->left = root->right = nullptr;
//     } 
//     else {
//         if (data < root->data)
//             insertNode(root->left, data);
//         else
//             insertNode(root->right, data);
//     }
// }
 

void insertNode(Node *&root, const int data) {
    if(root ==nullptr) {
        root = new Node(data);
         root->left = root->right= nullptr;
    }

    else {
        if(data < root->data) 
            insertNode(root->left , data);
        else    
            insertNode(root->right, data);
    }
}

void printTreePreorder(Node *root) {
    if (root != nullptr) {
        cout << root->data<< " ";
        printTreePreorder(root->left);
        printTreePreorder(root->right);
    }
}
 

int main() {

     Node *root = nullptr;
    // int n; cin>> n;
    // vector<int> arr(n);

    // for(int i=0; i<n; i++) 
    //     cin>> arr[i];
 
    // for (const auto &item : arr) {
    //     insertNode(root, item);
    // }

    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
        insertNode(root, d);
    }
 

    printTreePreorder(root);
    cout << endl;

    return EXIT_SUCCESS;
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
            this->left = nullptr;
            this->right = nullptr;
        }
};

void insert_node(Node* &root, int data) {
    if(root == nullptr) {
        root = new Node(data);
        root->left = nullptr;
        root->right = nullptr;
    }

    else {
        if(data < root->data) 
            insert_node(root->left, data);
        else 
            insert_node(root->right, data);
    }
}

void preoderTraversal(Node *root) {
    
    if(!root) {
         cout<<root->data <<" ";
        preoderTraversal(root->left);
        preoderTraversal(root->right);
    }
}

int main()
{

    
    
    vector<int> arr = {11, 23, 3, 5, 9, 15, 2, 20};
    Node *root = nullptr;
    for(const auto &item : arr) 
        insert_node(root, item);
     
    preoderTraversal(root);

    // {11, 23, 3, 5, 9, 15, 2, 20};

 

    return EXIT_SUCCESS;

} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node  {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

// insert the node...
void insertNode(Node* &root,  const int data) {
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

int isSum(Node* &root) {
    int sum=0;
    if(root == nullptr or root->left ==nullptr or root->right == nullptr)
        return 1;
    
    else {
        if(!root->left)
            sum += root->left->data;
        if(!root->right) 
            sum += root->right->data;
        
    }

   return (root->data == sum and isSum(root->left) and isSum(root->right));
   
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;
    int n; cin>> n;
    for(int i=0; i<n; i++) {
        int d; cin>> d;
        insertNode(root, d);
    }
 
    (isSum(root)) ? cout<<"Yes\n" : cout<<"No\n";

 

    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int solution(vector<string> &s) {
    stack<int> st;
    for(auto str : s) {
        if(str=="+" or str=="-" or str=="*" or str=="/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if(str=="+") st.push(a+b);
            if(str=="-") st.push(a-b);
            if(str=="*") st.push(a*b);
            if(str=="/") st.push(a/b);
        }
        else 
            st.push(stoi(str));
    }

    return st.top();
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

 
    EXIT_SUCCESS;
}
   
 
  */

