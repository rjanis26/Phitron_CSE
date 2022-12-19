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


void insertNode(Node *&root, const int val) {
    if(root == nullptr) {
        root = new Node(val);
        root->left = nullptr;
        root->right = nullptr;
    }

    else {
        if(val < root->data) 
            insertNode(root->left, val);
        else 
            insertNode(root->right, val);
    }
}

void inorderTraversal(Node *root) {
    if(root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data <<" ";
        inorderTraversal(root->right);
    }
}


void preorderTraversal(Node *root) {
    if(root != nullptr) {
        cout<<root->data<< " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}


void postorderTraversal(Node *root) {
    if(root != nullptr) {
         preorderTraversal(root->left);
        preorderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    //{11, 23, 3, 5, 9, 15, 2, 20};  
    Node *root = nullptr;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
         
    }
        
 
    for(const auto &it : arr) 
        insertNode(root, it);
    
    cout<<"Inorder: ";
    inorderTraversal(root);
    cout<< endl;

    cout<<"Preorder: ";
    preorderTraversal(root);
    cout<< endl;

    cout<<"Postorder: ";
    postorderTraversal(root);
    cout<< endl;

 
    EXIT_SUCCESS;
}


/* https://www.techiedelight.com/binary-tree-interview-questions/ */