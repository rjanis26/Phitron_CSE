/*   #include<bits/stdc++.h>
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


bool  isSame(Node *root1 , Node *root2) {
    if(root1 == nullptr and root2 == nullptr)
        return true;
    
    if(root1 == nullptr or root2 == nullptr)
        return false;

    if(root1->data != root2->data)
        return false;

    return isSame(root1->left, root2->left) && isSame(root1->right, root2->right);    

}

int main()
{

 Node* x = nullptr;
 
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
 
    if (isIdentical(x, y)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
 
    return 0;

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
 
void level_order(Node *root) {
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

    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
 
    LevelOrder(root);    
     
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


bool solution(Node *root1, Node *root2) {
    if(root1 == nullptr and root2 == nullptr)
        return true;
    else if(root1 == nullptr or root2 == nullptr)
        return false;
    
    else if(root1->data != root2->data) 
        return false;
    
    return solution(root1->left, root2->right) && solution(root1->right, root2->left);
}



bool isSymmetric(Node *root) {
    if(root == nullptr) 
        return true;
    
    return solution(root->left, root->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right = new Node(2);
    root->right->left = new Node(4);
    root->right->right = new Node(3);

    if(isSymmetric(root)) 
        cout<<"Yes\n";
    else 
        cout<<"No\n";
    
  
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


void level_order_reverse(Node *root) {
    if(root == nullptr)
        return;

    stack<Node*> st;
    queue<Node*> q;
    q.push(root);

  
    while(!q.empty()) {
        root = q.front();
        q.pop();
        st.push(root);

        if(root->right) 
            q.push(root->right);
        if(root->left)  
            q.push(root->left);
    }
    
    while(!st.empty()) 
        root = st.top();
        cout<<root->data << " ";
        st.pop();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);


    level_order_reverse(root);
 

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


void zigzag_Traversal(Node *root) {
    stack<Node*>st1,st2;
    vector<int>v;
    st1.push(root);

    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            Node* temp = st1.top();
            st1.pop();
            if(temp->left) 
            st2.push(temp->left);

            if(temp->right)
             st2.push(temp->right);

            v.push_back(temp->data);
        }

        while(!st2.empty()){
            Node* t = st2.top();
            st2.pop();
            if(t->right)
             st1.push(t->right);
            if(t->left) 
            st1.push(t->left);

            v.push_back(t->data);
        }
    }
     
     // print... 
     for(int i=0; i<v.size(); i++) 
        cout<< v.at(i) << " ";
    cout << endl;   

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = new Node(3);
    root->left = new Node(9);
    root->right =new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    
    zigzag_Traversal(root);
 

    return 0;
}
 */

/* 
class Solution{
   public:
   //Function to store the zig zag order traversal of tree in a list.
   vector <int> zigZagTraversal(Node* root)
   {
    // Code here
    vector<int>final;
       queue<Node*>que;
       Node* q;
       int flag=0;
       que.push(root);

       while(!que.empty())
       {
           vector<int>v;
        int sz=que.size();
        
        while(sz)
        {
            q=que.front();
            v.push_back(q->data);
            que.pop();
            
            if(q->left!=NULL)
         que.push(q->left);
            if(q->right!=NULL)
         que.push(q->right);
            sz--;
        }
         
        if(flag%2!=0)//odd
        reverse(v.begin(), v.end());

        for(int i=0;i<v.size();i++)
        {
            final.push_back(v[i]);
        }
        flag++;
       }
       return final;
   }
};
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


Node *invert_tree(Node *root) {
     if(root == nullptr)
            return nullptr;
        
        swap(root->left, root->right);
        invert_tree(root->left);
        invert_tree(root->right);
        
        return root;
}

void print(Node *root) {
    
    cout<<root->data <<" ";
    print(root->left);
    print(root->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
 
    Node *ans = invert_tree(root);
    print(ans);
     

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



int solution(Node *root, int &tilt) {
    if(root == nullptr)
        return 0;
    
    int l = solution(root->left, tilt);
    int r = solution(root->right, tilt);
    tilt += abs(l-r);
    return l+r+root->data;

}
 
int findTilt(Node *root) {
    int tilt = 0;
    solution(root, tilt);
    return tilt;   
}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout<<"Tilt: "<< findTilt(root) << endl;
 
   

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

void average_level(Node* root) {
    vector<double> ans;
    double avg = 0;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        long  long sum = 0;
        int len = q.size();
        for(int i=0; i<len; i++) {
            Node *curr = q.front(); 
            q.pop();
            sum += curr->data;
            
            if(curr->left);
                q.push(curr->left);
            if(curr->right);
                q.push(curr->right);
             
        }

        ans.push_back((double)sum/len);
    }

    for(int i=0; i<ans.size(); i++) 
        cout<< ans.at(i) <<" ";
}
 
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    average_level(root);
    
  
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


bool is_unival(Node* root) {
    if(root == nullptr)
        return true;
    
    if(root->left != nullptr and root->data  != root->left->data)
        return false;
    
    if(root->right != nullptr and root->data != root->right->data)
        return false;
    
    return is_unival(root->left) && is_unival(root->right);
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
 

void solve(Node *root, int &first, int &second) {
    if(root == nullptr)
        return;
    if(root->data != first && root->data < second)
        second = root->data;
    
    solve(root->left, first, second);
    solve(root->right, first, second);
}

 int second_minimum(Node* root) {
    int first = root->data, second = INT_MAX;
    solve(root, first, second);
    return (second == first || second == INT_MAX) ? -1 : second;
 }


int main()
{
  

    return 0;
}
   
 */


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);        

  
    return 0;
}