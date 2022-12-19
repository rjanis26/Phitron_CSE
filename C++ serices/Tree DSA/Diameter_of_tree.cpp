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

Node *create(int data) {
    Node *root = new Node(data);
    root->left = root->right = nullptr;
    return root;
}

void insertNode(Node* &root, const int data) {
    if(!root)  {
        root = new Node(data);
        root->left = root->right = NULL;
    }

    else {
        if(data < root->data) 
            insertNode(root->left, data);
        else 
            insertNode(root->right, data);
    }
}

int findHeight(Node *root)  {
    if(root == nullptr) 
        return 0;
    
    return 1 + max(findHeight(root->left), findHeight(root->right));
}

int find_diameter(Node *root) {
    if(root == nullptr)     
        return 0;
    
    // int lh = findHeight(root->left);
    // int rh = findHeight(root->right);

    // int ld = find_diameter(root->left);
    // int rd = find_diameter(root->right);

    //return max(lh + rh +1, max(ld, rd));
    return max(findHeight(root->left)+findHeight(root->right)+1, max(find_diameter(root->left), find_diameter(root->right)));

}

int main()
{

//  Node* root=create(1);
//   root->left=create(2);
//   root->left->right=create(3);
//   root->left->right->left=create(4);
//   root->left->right->right=create(5);
//   root->right=create(6);
//   root->right->left=create(7);
//   root->right->left->right=create(8);
//   root->right->right=create(9);
//   root->right->right->right=create(10);
//   root->right->right->right->right=create(11);
Node *root = nullptr;
int n; cin>>n;
vector<int> arr(n);
for(int i=0; i<n; i++) {
    cin >> arr[i];
    insertNode(root, arr[i]);
}
 
  cout<<"Diameter:" << find_diameter(root);



    return 0;
}


 