
/* https://medium.com/techie-delight/binary-search-tree-bst-practice-problems-and-interview-questions-ea13a6731098 */


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

class BST {
    public:
        Node *insertNode(Node* root, const int data);
        void inOrder(Node *root);
        void postOrder(Node *root);
        Node *search(Node *root, int value);
        Node *search_tree(Node *root, int value);
};  


Node *BST :: search_tree(Node *root, int value) {
    if(root == nullptr) 
        return nullptr;
    
    if(root->data == value) {
        cout<<root->data;
        return root;
    }

    else if(value < root->data)  {
        cout<<root->data <<"-> ";
        search_tree(root->left, value);
    }
    else {
        cout<< root->data <<"-> ";
        search_tree(root->right, value);
    }
}

// insert the node...
Node *BST :: insertNode(Node* root, const int data) {
     
    //    if(root== nullptr) return new Node(data);  

    if(root== nullptr) {
        root = new Node(data); return  root;
    }

    (data < root->data) ? root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}

Node *BST :: search(Node *root, int value) {
    if(root == nullptr || root->data == value)  
        return root;
    
    return (root->data < value) ? search(root->right, value) : search(root->left, value);
}
 
// inOrder traversal...
void BST :: inOrder(Node *root) {
    if(root == nullptr) 
        return;
    
    inOrder(root->left);
    cout<< root->data << " ";
    inOrder(root->right);
}



int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    BST bst = BST();

    Node *root = nullptr;
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
         root = bst.insertNode(root, d);
    }
     
    bst.inOrder(root);
    cout << endl;
    int value; cin>>value;
    //(bst.search(root, value)) ? cout<<"Exit\n" : cout <<"Not Exit\n";
    (bst.search_tree(root, value)== nullptr) ? cout<< endl<<"Not exit\n" : cout <<endl<<"Exit\n";

    return 0;
}
 */



/*  
9
11 5 9 43 34 1 2 7 21

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
 

class BST {
    public:
        Node *insertNode(Node *root, const int data);
        Node *searchTree(Node *root, int value);
        void inOrderTraversal(Node *root);
        Node *deleteNode(Node *root, int value);
        Node *inorderSuccesor(Node *root);
};

Node *BST :: inorderSuccesor(Node *root) {
    Node *curr = root;
    while(curr->left != nullptr) 
        curr = curr->left;
    return curr;
}
 

Node *BST :: deleteNode(Node *root, int value) {

    if(value < root->data) 
        root->left = deleteNode(root->left, value);
    else if(value > root->data) 
        root->right = deleteNode(root->right, value);
    
    else {
        if(root->left == nullptr) {
                Node *temp = root->right; free(root);
                return temp;
            }
            else if(root->right == nullptr) {
                Node *temp = root->left; free(root);
                return temp;
            }

            else {
                Node *temp = inorderSuccesor(root->right);
                root->data = temp->data;
                root->right = deleteNode(root->right, temp->data);
            }
    }

    return root;
}

Node *BST :: insertNode(Node *root, const int data) {
    if(root == nullptr) 
        return new Node(data);
    (data < root->data) ?  root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}

Node *BST :: searchTree(Node *root, int value) {
    if(root == nullptr || root->data == value) 
        return root;
    return (root->data < value) ? searchTree(root->right, value) : searchTree(root->left, value);
}

void BST :: inOrderTraversal(Node *root) {                                         
    if(root == nullptr)
        return;
    inOrderTraversal(root->left);
    cout<< root->data <<" ";
    inOrderTraversal(root->right);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    BST bst = BST();
    Node *root = nullptr;
    
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
        root = bst.insertNode(root, d);
    }

    bst.inOrderTraversal(root);
    cout<< endl;
    // int value; cin>> value;
    // (bst.searchTree(root, value)) ? cout<<"Found!\n" : cout<<"Not found\n";

    int val; cin>>val;
    root = bst.deleteNode(root, val);
    bst.inOrderTraversal(root);

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
 
    return 0;
}

   
 
  

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
 

class BST {
    public:
        Node *insertNode(Node *root, const int data);
        Node *searchTree(Node *root, int value);
        void inOrderTraversal(Node *root);
        Node *deleteNode(Node *root, int value);
        Node *inorderSuccesor(Node *root);
};

Node *BST :: inorderSuccesor(Node *root) {
    Node *curr = root;
    while(curr->left != nullptr) 
        curr = curr->left;
    return curr;
}
 

Node *BST :: insertNode(Node *root, const int data) {
    if(root == nullptr) 
        return new Node(data);
    (data < root->data) ?  root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}

Node *BST :: searchTree(Node *root, int value) {
    if(root == nullptr || root->data == value) 
        return root;
    return (root->data < value) ? searchTree(root->right, value) : searchTree(root->left, value);
}

void BST :: inOrderTraversal(Node *root) {                                         
    if(root == nullptr)
        return;
    inOrderTraversal(root->left);
    cout<< root->data <<" ";
    inOrderTraversal(root->right);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    BST bst = BST();
    Node *root = nullptr;
    
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
        root = bst.insertNode(root, d);
    }

    bst.inOrderTraversal(root);
    cout<< endl;
    // int value; cin>> value;
    // (bst.searchTree(root, value)) ? cout<<"Found!\n" : cout<<"Not found\n";

    int val; cin>>val;
    root = bst.deleteNode(root, val);
    bst.inOrderTraversal(root);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
 
    return 0;

*/

/* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int kthLargest(vector<int> &arr, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto x: arr) {
        pq.push(x);
        if(pq.size() > k) 
            pq.pop();
    }

    return pq.top();
}

int main()
{   
    
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 

    return 0;

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
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

// BST class...
class BST {
    public:
        Node *insertNode(Node *root, const int data);
        bool isSame(Node *root, int min, int max);
        bool isBst(Node *root);
};

// inser the data...
Node *BST :: insertNode(Node *root, const int data) {
    if(root == nullptr) return new Node(data);
    (data < root->data) ? root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}


// check is tree are same or not...
bool BST :: isSame(Node *root, int min, int max) {
    if(root == nullptr)  return true;
    if(root->data  < min or root->data > max) return false;
    return isSame(root->left, min, root->data) && isSame(root->right, root->data, max);
} 

// dummy or answr function...
bool BST :: isBst(Node *root) {
    if(isSame(root, INT_MIN, INT_MAX))  
        return true;
    else 
        return false;
}

int main()
{   
    Node *root = nullptr;
    BST bst = BST();

    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>> arr[i];
        root = bst.insertNode(root, arr[i]);
    }

    swap(root->left, root->right);
    (bst.isBst(root)) ? cout<<"Tree is same\n" : cout<<"Tree not same\n";
 

    return 0;
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
        Node(int data) {
            this->data =data;
            this->left = this->right = nullptr;
        }
};


class BST { 
    public:
        Node *insertNode(Node *root, const int data);
        bool isSame(Node *root, Node* &prev);
        bool isBst(Node *root);
};

Node *BST :: insertNode(Node *root, const int data) {
    if(root == nullptr)   return new Node(data);
    (data < root->data) ? root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}


bool BST :: isSame(Node *root, Node* &prev) {
    if(root == nullptr)
        return true;
    bool left = isSame(root->left, prev);
    if(root->data <= prev->data) 
        return false;
    
    prev = root;
    return left && isSame(root->right, prev);

}

bool BST :: isBst(Node *root) {
    Node *prev = new Node(INT_MIN);
    return (isSame(root, prev)) ? true : false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;
    BST bst = BST();
    
    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)  {
        cin>> arr[i];
        root = bst.insertNode(root, arr[i]);
    }

  

    return 0;
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
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

class BST {
    public: 
        Node *insertNode(Node *root, const int data);
        void solution(vector<int> const &arr, int low, int high, Node* &root);
        Node *solution(vector<int> &arr);
        void inOrderTraversal(Node *root) ;

};

void BST :: inOrderTraversal(Node *root) {
    if(root == nullptr) return;
    inOrderTraversal(root->left);
    cout<< root->data << " ";
    inOrderTraversal(root->right);

}

Node *BST :: insertNode(Node *root, const int data) {
    if(root = nullptr) return new Node(data);
    (data < root->data) ? root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}

void BST :: solution(vector<int> const &arr, int low, int high, Node* &root) {
    if(low > high) return;
    
    const int mid = low + (high - low)/2;
    root = new Node(arr[mid]);
    solution(arr, low, mid-1, root->left);
    solution(arr, mid+1, high, root->right);

}

Node *BST :: solution(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    Node *root = nullptr;
    solution(arr, 0, arr.size()-1, root);
    return root;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;
    BST bst = BST();    

    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>> arr[i];
        root = bst.insertNode(root, arr[i]);
    }

    root = bst.solution(arr);
    bst.inOrderTraversal(root);
 
    return 0;
} */



// ================================
// Delete Node Binary search tree..
// =================================
/* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data  = data;
            this->left = this->right = nullptr;
        }
};


class BST {
    public:
        Node *insertNode(Node *root, const int data);
        Node *deleteNode(Node *root, int value);
        void inOrderTraversal(Node *root);
        Node *searchNode(Node *root, int val);
        Node *successor(Node *root);

};

Node *BST :: successor(Node *root) {
    Node *curr = root;
    while(curr->left != nullptr) 
        curr  = curr->left;
    return curr;
}

Node *BST :: insertNode(Node *root, const int data) {
    if(root == nullptr) return new Node(data);
    (data < root->data) ? root->left = insertNode(root->left, data) : insertNode(root->right, data);
    return root;
}

void BST :: inOrderTraversal(Node *root) {
    if(root== nullptr) return;
    inOrderTraversal(root->left);
    cout<< root->data <<" ";
    inOrderTraversal(root->right);

}

Node *BST :: searchNode(Node *root, int val) {
    if(root == nullptr || root->data == val) return root;
    return (val < root->data) ? searchNode(root->left, val) : searchNode(root->right, val);
}

Node *BST :: deleteNode(Node *root, int value) {
    // base case...
    if(root == nullptr) return root;    
    //if the val to be delete is smaller that root's, then it lies for lest subtree...
    if(value < root->data) 
        root->left = deleteNode(root->left, value);
    
    // it the val to be delete is greater than root's, then it lies for right subtree...
    else if(value > root->data) 
        root->right = deleteNode(root->right, value);
    else {
        // node with only one child or no child...
        if(root->left == nullptr) {
            Node *temp = root->right; free(root);
            return temp;
        }
        else if(root->right == nullptr) {
            Node *temp = root->left; free(root);
            return temp;
        }

        // Node with 2 child(find Inordr successsor)...
        Node *temp = successor(root->right);
        root->data = temp->data;
       root->right = deleteNode(root->right, temp->data);
    }

    return root;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    Node *root = nullptr;
    BST bst = BST();
    
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
        root = bst.insertNode(root, d);
    }

    int del; cin>>del;
    root = bst.deleteNode(root, del);
    bst.inOrderTraversal(root);
 


    return 0;
} */




// ======================
// Zigzag traversal Tree
// =======================

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
            this->left  = this->right = nullptr;
        }
 
};

Node *insertNode(Node *root, const int data) {
    if(root == nullptr) return new Node(data);
    (data < root->data) ? root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}


vector<int> zigzagTraversal(Node *root) {
        stack<Node*> currLevel;
        stack<Node*> nextLevel;
        vector<int> ans;
        bool leftToright = true;
        currLevel.push(root);

        while(!currLevel.empty()) {
        Node *x = currLevel.top();
        currLevel.pop();

        //cout << x->data << " ";
        ans.push_back(x->data);

        if(leftToright) {
            if(x->left) nextLevel.push(x->left);
            if(x->right) nextLevel.push(x->right);
        }

        else {
            if(x->right) nextLevel.push(x->right);
            if(x->left)  nextLevel.push(x->left);
        }

        if(currLevel.empty()) {
             leftToright = !leftToright;
            swap(currLevel, nextLevel);
        }
       
    }

    return ans;
}

void print_arr(vector<int> &arr) {
    for(const auto x : arr)  
        cout<< x <<" ";
    cout << endl;
}

int main()
{
    
    Node *root = nullptr;
    int n; cin>>n;
    for(int i=0; i<n; i++)  {
        int d; cin>>d;
        root = insertNode(root, d);
    }

    vector<int> ans = zigzagTraversal(root);
    print_arr(ans);
 
    return 0;
}
 */


/* 
10
11 5 9 43 34 1 2 7 8 


*/
