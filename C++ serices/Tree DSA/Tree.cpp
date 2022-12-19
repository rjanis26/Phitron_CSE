/* https://backtobackswe.com/platform/content */
 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int value) {
            this->data = value;
            this->left = nullptr;
            this->right = nullptr;
        }
};
 

void print_space(int level) {
    for(int i=0;i<level; i++) 
        cout<<"  ";
}

void printTree(Node *root, int level) {
    if(root == nullptr)
        return;
    
    if(root->left == NULL && root->right == NULL) {
        cout<<root->data << endl;
        return;
    }
       
    
    else {
        
        cout<< endl;
        print_space(level);
        cout<< "Root: " << root->data << endl;

    }

    if(root->left != nullptr) {
        print_space(level);
        cout<<"Left: " ;
        printTree(root->left, level+1);

    }
   
    if(root->right != nullptr) {
        print_space(level);
        cout<<"Right: ";
        printTree(root->right, level+1);
    }
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    Node *allNodes[n];
    for(int i=0; i<n; i++) 
        allNodes[i]->data = -1;
    
    for(int i=0; i<n; i++) {
        int value, left, right;
        cin>> value >> left >> right;
        allNodes[i]->data = value;
        
        if(left != -1) 
            allNodes[i]->left = allNodes[left];
        
        if(right != -1) 
            allNodes[i]->right = allNodes[right];
    }

    printTree(allNodes)


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
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

void inorderTraversal(Node *root) {
    if(root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);

}



int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    inorderTraversal(root);


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
            this->data = data;
            this->left = this->right = nullptr;
        }
};


int isIdentical(Node *root1, Node *root2) {
    if(root1 == nullptr && root2 == nullptr) 
        return 1;
    
    if(root1 == nullptr || root2== nullptr) 
        return 0;
    
    return (root1->data == root2->data) && isIdentical(root1->left, root1->right) && isIdentical(root2->right, root2->right) ? 1 : 0;

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *x = nullptr;
     x = new Node(15);
    x->left = new Node(10);
    x->right = new Node(20);
    x->left->left = new Node(8);
    x->left->right = new Node(12);
    x->right->left = new Node(16);
    x->right->right = new Node(25);
 
    // construct the second tree
    Node* y = nullptr;
 
    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(12);
    y->right->left = new Node(16);
    y->right->right = new Node(25);

    (isIdentical(x,y)) ? cout<< "Yes\n" : cout<<"No\n";
 
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

int find_sum(Node *root) {
    if(root == nullptr) return 0;
    if(root->left == nullptr && root->right == nullptr)
        return root->data;
    
    int leftSum = 0, rightSum=0;
    leftSum += find_sum(root->left);
    rightSum += find_sum(root->right);

    return (leftSum + rightSum != root->data) ? 0 : leftSum + rightSum + root->data;
}


bool isSum(Node *root) {
    if(root == nullptr) return true;
    return (!root->left && !root->right) ? true : find_sum(root);
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

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right;
        }
};


int sum(Node *root) {
    return (root == nullptr) ? 0 : root->data + sum(root->left) + sum(root->right);

}

bool isSumTree(Node *root) {
    return (root == nullptr || root->left == nullptr && root->right == nullptr) ? true : sum(root->left) + sum(root->right) == root->data && isSumTree(root->left) && isSumTree(root->right);
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

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

int maxLevelSum(Node *root) {
    if(root == nullptr) return 0;
    queue<Node*> q;
    q.push(root);
    int maxSum= INT_MIN, ans=0, level = 1;

    while(!q.empty()) {
        int sum= 0, size = q.size();
        for(int i=0; i<size; i++) {
           auto curr = q.front();
            q.pop();
            
            sum += curr->data;

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);

        }

        if(sum > maxSum) {
            maxSum = sum;
            ans = level;
        }

        level++;
         
    }

    return ans;
}

int main()
{
 

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
            this->data = data;
            this->left = this->right = nullptr;
        }
};

int maxLevelSum(Node *root) {
    // base case...
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);

    int maxSum = INT_MIN;
    while(!q.empty()) {
        int n= q.size(), sum = 0;
        for(int i=0; i<n; i++) {
            auto curr = q.front();
            q.pop();

            sum += curr->data;
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        maxSum = max(sum, maxSum);
    }

    return maxSum;
 
}

int main()
{
    ios_base:: sync_with_stdio(false);
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
        Node(int data)  {
            this->data = data;
            this->left = this->right = nullptr;
        }
};


int solution(Node *root) {
    if(root == nullptr) return 0;
    
    int a = solution(root->left);
    int b = solution(root->right);

    int x = root->data;
    root->data = a + b;
    return a + b + x;
}

void tosumTree(Node *root) {
    solution(root);
}


int main()
{ 

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
            this->data = data;
            this->left = this->right = nullptr;
        }
};


class solution {
    public:
        bool isSymetrix(Node *root) {
            (!root) ? true : isSymetrix(root->left, root->right);
        }

    private:
        bool isSymetrix(Node *root1, Node *root2) {
            if(!root1 && !root2) return true;
            else if(!root1 || !root2) return false;

            return (root1->data == root2->data) && isSymetrix(root1->left, root2->right) && isSymetrix(root1->right, root2->left);
        }

}


int main()
{

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

class solution {
    public:
        vector<string> str;
        void path(Node *root, string s) {
            if(root->left == nullptr && root->right == nullptr) {
                s += to_string(root->data);
                str.push_back(s);
            }

            else {
                s += to_string(root->data) + "->";
                if(root->left) 
                    path(root->left, s);
                if(root->right) 
                    path(root->right, s);
            }
        }

        vector<string> binaryTreePaths(Node *root) {
            string s;
            path(root, s);
            return str;
        }
};


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class TreeNode  {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

class solution {
    private:
        void helper(TreeNode *root1, TreeNode *root2, int level) {
            if(root1 == nullptr || root2 == nullptr) return;
            if(!(level&1)) 
                swap(root1->data, root2->data);

            helper(root1->left, root2->right, level+1);
            helper(root1->right, root2->left, level+1);

        }
    
    public:
         TreeNode* reverseOddLevels(TreeNode* root) {
            helper(root->left, root->right, 0);
            return root;
         }
};

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    return 0;
}