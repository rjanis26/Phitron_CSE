/* #include<bits/stdc++.h>
using  namespace std;
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
            insertNode(root->left , data);
        else 
            insertNode(root->right, data);
    }
}

void inoderTreaversal(Node *root) {
    if(root == nullptr) 
        return;
    
    inoderTreaversal(root->left);
    cout<< root->data << " ";
    inoderTreaversal(root->right);

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

    
    for(const auto &it : arr) 
        insertNode(root, it);
    
    cout<<"Inorder: " ;
    inoderTreaversal(root);
    
    EXIT_SUCCESS;
} */

/* 
#include<bits/stdc++.h>
using  namespace std;
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
            insertNode(root->left , data);
        else 
            insertNode(root->right, data);
    }
}

void inoderTreaversal(Node *root) {
   
    // return if the tree is empty
    if (root == nullptr) {
        return;
    }
 
    // create an empty stack and push the root node
    stack<Node*> stack;
    stack.push(root);
 
    // start from the root node (set current node to the root node)
    Node* curr = root;
 
    // loop till stack is empty
    while (!stack.empty())
    {
        // if the current node exists, print it and push its right child
        // to the stack before moving to its left child
        if (curr != nullptr)
        {
            cout << curr->data << " ";
 
            if (curr->right) {
                stack.push(curr->right);
            }
 
            curr = curr->left;
        }
        // if the current node is null, pop a node from the stack
        // set the current node to the popped node
        else {
            curr = stack.top();
            stack.pop();
        }
    }
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

    
    for(const auto &it : arr) 
        insertNode(root, it);
    
    cout<<"Inorder: " ;
    inoderTreaversal(root);
    
    EXIT_SUCCESS;
} */
 
 


/* 

   bool isLeafNode(TreeNode* node)
    {
        if(node==NULL)
            return false;
        if(node->left==NULL && node->right==NULL)
            return true;
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int res = 0;
        if(root!=NULL)
        {
            if(isLeafNode(root->left))
                res = res + root->left->val;
            else
                res = res + sumOfLeftLeaves(root->left);
            
            res  = res + sumOfLeftLeaves(root->right);
        }
        return res;
    } */

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

void insertNode(Node* &root, const int data)  {
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

bool isLeafNode(Node *root) {
    if(root == nullptr) 
        return false;
    if(root->left == nullptr && root->right == nullptr)
        return true;
    return false;
}

int sumOfLeftLeaves(Node* root) {
        int res = 0;
        if(root!=NULL)
        {
            if(isLeafNode(root->left))
                res = res + root->left->data;
            else
                res = res + sumOfLeftLeaves(root->left);
            
            res  = res + sumOfLeftLeaves(root->right);
        }
        return res;
    }

 bool hasPathSum(Node *root, int sum) {
    if(!root)   
        return false;
    
    if(root->data == sum && !root->left && !root->right)
        return true;
    return hasPathSum(root->left, sum - root->data) || hasPathSum(root->right , sum - root->data);
 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;

    // int n; cin>>n; 
    // vector<int> arr(n);
    // for(int i=0; i<n; i++) {
    //     cin >> arr[i];
    //     insertNode(root, arr[i]);
    // }

    root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

   cout<< "Sum: " << sumOfLeftLeaves(root);
 

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
            this->data  = data;
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

void find_leafs(Node *root, vector<int> &ans) {
    if(!root)
        return;
    
    if(!root->left and !root->right) {
        ans.push_back(root->data);
        return;
    }

    find_leafs(root->left, ans);
    find_leafs(root->right, ans);
}

bool leafSimialr(Node *root1, Node * root2) {
    vector<int> l, r;
    find_leafs(root1, l);
    find_leafs(root2, r);
    return l == r;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;

    int n; cin>> n; 
    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }

    for(const auto &x : arr) 
        insertNode(root, x);
    


    return 0;
} */


//===============================
    // check tree is symetrix or not..
//=================================

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


bool isSymetric(Node *root1, Node *root2) {
    if(!root1 and !root2)
        return true;
    if(root1 == nullptr or root2 == nullptr) 
        return false;
        
    if(root1->data == root2->data) {
        if(isSymetric(root1->left, root2->right) && isSymetric(root1->right, root2->left))
            return true;
    }

    return false;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

   

 Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->right = new Node(4);
    root1->right->left = new Node(5);

     Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->right = new Node(5);
    root2->right->left = new Node(4);
    
    if(isSymetric(root1, root2))
        cout<<"Yes\n";
    else 
        cout<<"No" << endl;

    EXIT_SUCCESS;
}


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
    if(root == NULL) {
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

bool isSymetric(Node *root1, Node *root2) {
    if(root1 == nullptr && root2 == nullptr) 
        return true;
    
    else if(root1 == nullptr || root2 == nullptr)
        return false;
    
    else if(root1->data != root2->data) 
        return false;

    return isSymetric(root1->left, root2->right) && isSymetric(root1->right, root2->left);

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    vector<int> arr(n); 

 

    return 0;
} */

// =============================
//     isBalanced Tree..
// ==============================

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

int helper(Node *root, bool &flag) {
    if(root == nullptr || flag == false) 
        return 0;
    int l = helper(root->left, flag);
    int r = helper(root->right, flag);
    if(abs(l - r) > 1) 
        flag = false;
    return max(l, r) +1;
}


bool isBalanced(Node *root){
    bool flag = true;
    helper(root, flag);
    return flag;
}



class Solution{
    
    int height(Node *root) {
        if(root == nullptr)
            return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        return 1 + max(lh, rh);
    }
    
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root == nullptr)
            return true;
        
        if(!isBalanced(root->left)) 
            return false;
        if(!isBalanced(root->right))
            return false;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        return (abs(lh - rh) <= 1) ? true : false;
    }
};
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data= data;
            this->left = this->right = nullptr;
        }
};

int height(Node *root) {
    if(root == nullptr)     
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(Node *root) {
    if(root == nullptr)
        return true;
    
    int lh = height(root->left);
    int rh = height(root->right);

    (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)) ? true : false;
}

int main()
{ 

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


int sum(Node *root) {
    return (root == nullptr) ? 0 : root->data + sum(root->left) + sum(root->right);

}

bool isSameTree(Node *root) {
    return (root == nullptr || !root->left && !root->right) ? true : sum(root->left) + sum(root->right) == root->data && isSameTree(root->left) && isSameTree(root->right);
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> bfs(int node, vector<int> adj[]) {
    vector<int> ans;
    vector<bool> visited(node+1, false);

    queue<int> q;
    q.push(0);
    visited[0] = true;

    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        ans.push_back(curr);

        for(auto i : adj[curr]) {
            if(visited[i] == false) {
                visited[i] == true;
                q.push(i);
            }
        }
         
    }

    return ans;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int node, edge; cin >> node>> edge;
    vector<int> adj[node];
    for(int i=0; i<edge; i++) {
        int x, y; cin >> x>> y;
        adj[x].push_back(y);
    }


    vector<int> ans = bfs(node, adj);
    for(int i=0; i<ans.size(); i++) 
        cout << ans[i] <<" ";
    cout << endl;
    
    
    return 0;
}
 */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void helper(int s, vector<bool>& visited, vector<int> adj[], vector<int> &ans) {
    visited[s] = true;
    ans.push_back(s);

    for(int val : adj[s]) {
        if(visited[val] == false)  
            helper(val, visited, adj, ans);
    }
}


vector<int> dfs(int node, vector<int> adj[]) {
    vector<int> ans;
    vector<bool> visited(node+1, false);

    for(int i=0; i<node; i++) {
        if(visited[i] == false) 
            helper(i, visited, adj, ans);
        return  ans;
    }
}


int main()
{


    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void helper(int s, vector<bool> &visited, vector<int> adj[], vector<int> &ans) {
    visited[s] = true;
    ans.push_back(s);

    for(int val : adj[s])  {
        if(!visited[val]) 
            helper(val, visited, adj, ans);
    }
}

vector<int> dfs(int node, vector<int> adj[]) {
    vector<bool> visited(node+1, false);
    vector<int> ans;

    for(int i=0; i<node; i++) {
        if(!visited[i]) 
            helper(i, visited, adj, ans);
        return ans;
    }
}

int main()
{
 

    return 0;
} */



// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'


// vector<int> bfs(int node, vector<int> adj[]) {
//     vector<int> ans;
//    vector<bool> visited(node+1, false);

//     queue<int> q;
//     q.push(0);
//     visited[0] = true;

//     while(!q.empty()) {
//         int curr = q.front();
//         q.pop();

//         ans.push_back(curr);


//         for(auto val : adj[curr]) {
//             if(!visited[val]){
//                 visited[val] = true;
//                 q.push(val);
//             }
//         }
//     }

//     return ans;
// }

// int main()
// {





//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cout<< "hello sri" << endl;




    return 0;
}