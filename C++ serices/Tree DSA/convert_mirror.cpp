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

void preOrder(Node *root) {
    if(root == nullptr) 
        return;
    cout<< root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void convertMirror(Node *root) {
    if(root == nullptr) 
        return;
    convertMirror
}

int main()
{







    return 0;
}