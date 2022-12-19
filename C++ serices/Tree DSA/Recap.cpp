/* https://medium.com/techie-delight/stack-data-structure-practice-problems-and-interview-questions-9f08a35a7f19 */


/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node  {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};


void InorderTraversal(Node *root) {
    if(root == nullptr)
        return;

    InorderTraversal(root->left);
    cout<<root->data <<" ";
    InorderTraversal(root->right);

}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = new Node(40);
    root->left = new Node(25);
    root->left->left = new Node(10);
    root->left->right = new Node(32);
    root->right =  new Node(78);

    InorderTraversal(root);



    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};


class LinkedList {
    public:
       void insertAtEnd(Node* &head, const int data);
        void printList(Node *head);
        Node *removeDuplicate(Node *head);
};

 
Node *LinkedList :: removeDuplicate(Node *head) {
    Node *p = head, *q;
  while(p!=NULL && p->next!=NULL)
  {
      if(p->data == p->next->data)
      {
          q = p->next->next;
          
          if(q==NULL)
          {
              p->next = NULL;
              break;         
          } 
          
          p->next = q;
      }
  
      if(p->data != p->next->data)
        p = p->next;
      
  }

    return head;
    
    
}  

Node *LinkedList :: removeDuplicate(Node *head) {
    Node *curr= head;
    while(curr != nullptr and curr->next != nullptr) {
        if(curr->data == curr->next->data) {
            Node *delnode = curr->next;
            curr->next = curr->next->next;
            delete(delnode);
        }
        else 
            curr = curr->next;
    }

    return head;
}

 void LinkedList ::  insertAtEnd(Node* &head, int data) {
        Node *newNode = new Node(data);
        if(head == nullptr) {
            head = newNode;
            return;
        }

        Node *curr= head;
        while(curr->next != nullptr) 
            curr = curr->next;
        curr->next = newNode;

}


void LinkedList :: printList(Node *head) {
    Node *curr = head;
    while(curr != nullptr) {
        cout<< curr->data <<"->";
        curr = curr->next;
    }

    cout<<"NULL" << endl;
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node*head = nullptr;
    LinkedList ll = LinkedList();

    ll.insertAtEnd(head, 5);
    ll.insertAtEnd(head, 50);
    ll.insertAtEnd(head, 50);
    ll.insertAtEnd(head, 50);
    ll.insertAtEnd(head, 5);
    ll.insertAtEnd(head, 5);
    ll.insertAtEnd(head, 5);
   Node *ans =  ll.removeDuplicate(head);
    ll.printList(ans);
 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)


class Node {
    public:
        int data;
        Node *next;
        Node (int data) {
            this->data = data;
            this->next = nullptr;
        }
};

class LinkedList {
    public:
        void insertAtEnd(Node* &head, const int data);
        void printList(Node *head);
        int getLength(Node *head);
        Node *removeDuplicate(Node *head);
};



 void LinkedList :: insertAtEnd(Node* &head, const int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
        return;
    }

    Node *curr = head;
    while(curr->next != nullptr) 
       curr = curr->next;
    curr->next = newNode;
 }


//sorted list ...
// Node *LinkedList :: removeDuplicate(Node *head) {
//     Node *curr = head;
//     while(curr != nullptr && curr->next != nullptr)  {
//         if(curr->data = curr->next->data) {
//             Node *temp = curr->next;
//             curr->next = curr->next->next;
//             delete(temp);
//         }
//         else 
//             curr = curr->next;
//     }
//     return head;
// }

Node *LinkedList :: removeDuplicate(Node *head) {
    unordered_set<int> set;
    Node *curr = head;
    if(curr == nullptr)
        return head;
    else    
        set.insert(curr->data);
    
    while(curr != nullptr && curr->next != nullptr) {
        if(set.find(curr->next->data) != set.end())
            curr->next= curr->next->next;
        else {
            set.insert(curr->next->data);
            curr = curr->next;
        }
    }

    return head;
}

int LinkedList :: getLength(Node *head) {
    Node *curr = head;
    int count=0;
    while(curr) {
        count++;
        curr = curr->next;
    }
    return count;
}

void LinkedList :: printList(Node *head) {
    Node *curr= head;
    while(curr != nullptr) {
        cout << curr->data <<"->";
        curr = curr->next;
    }

    cout<<"NULL" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *head = nullptr;
    LinkedList ll = LinkedList();
    ll.insertAtEnd(head,1);
    ll.insertAtEnd(head,4);
    ll.insertAtEnd(head,1);
    ll.insertAtEnd(head, 4);
    ll.insertAtEnd(head,1);
    ll.insertAtEnd(head,5);
    ll.printList(head);
    cout << "Size:" << ll.getLength(head) << endl;
    
    Node *ans = ll.removeDuplicate(head);
    ll.printList(ans);
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void printStack(stack<int> &st) {
    while(st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
    }
    cout<< endl;
}  

string reomveDuplicate(string str) {
    int n = str.length(), i=0;
    stack<char> st;
    
    while(i<n) {
        if(st.empty() || st.top() != str[i])
            st.push(str[i]);
        else 
            st.pop();
        i++;
    }

    string ans;
    while(!st.empty()) {
        char ele = st.top();
        st.pop();
        ans += ele;
    }

    //reverse(ans.begin(), ans.end());
    return ans;
}

bool isValid(string str) {
    stack<int> st;
    for(auto s : str) {
        if(st.empty()) 
            st.push(s);
        else if((st.top() == '(' && s == ')') || (st.top() == '{' && s =='}') || (st.top() == '[' && s == ']'))
            st.pop();
        else    
            st.push(s);
        
    }

    if(st.size() == 0)
        return true;
    return false;
}


string removeDuplicate(string str) {
    string ans;
    
    for(const char ch : str) {
        if(!ans.empty() && ans.back() == ch)
            ans.pop_back();
        else 
            ans.push_back(ch);
    }

    return ans;
}


void  solution(string str) {
    stack<char> st;
    for(auto s : str) {
        if(st.empty()) 
            st.push(s);
        else if((st.top() == '(' && s==')') or (st.top() == '{' && s == '}') or (st.top() == '[' && s == ']'))
            st.pop();
        else    
            st.push(s);
    }

    return (st.size() == 0) ? true : false;
}

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

void print_queue(priority_queue<int> &q){
    while(!q.empty()) {
         cout<< q.top()<<" ";
         q.pop();
    }

    cout<< endl;
}

int main()
{

    priority_queue<int> pq;

    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
        pq.push(d);
    }

    print_queue(pq);


 
    return 0;
} */


// Reverse a queue using stack....
// iterative solution...
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void reverseQueue(queue<int> &q) {
    stack<int> st;
    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    } 
 
    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }
 
}

void print_queue(queue<int> &q) {
    while(!q.empty()) {
        cout<<q.front()<< " ";
        q.pop();
    }

    cout<< endl;
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    queue<int> q;
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d;  cin>>d;
        q.push(d);
    }

    reverseQueue(q);
    //print_queue(q);

    return 0;
}
 */

// Reverse a queue using stack....
// recursive solution...
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void printQueue(queue<int> &q) {
    while(q.empty() == false) {
        cout<< q.front() <<" ";
        q.pop();
    }

    cout << endl;
}

void reverseQueue(queue<int> &q) {
    if(q.empty() == true) 
        return;
    
    int ele = q.front();
    q.pop();
    reverseQueue(q);
    q.push(ele);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
        q.push(d);
    }

    reverseQueue(q);
    printQueue(q);
 
    return 0;
} */

// reverse kth element...
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

queue<int> reverseKthElemen(queue<int> &q, int k) {
    stack<int> st;
    while(k--) {
        st.push(q.front());
        q.pop();
    }

    queue<int> ans;
    while(st.empty() == false) {
        ans.push(st.top());
        st.pop();
    }

    while(q.empty()== false) {
        ans.push(q.front());
        q.pop();
    }

    return ans;
}

void printQueue(queue<int> &q) {
    while(!q.empty()) {
        cout<< q.front() <<" ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    queue<int> q, ans;
    int n, k; cin>>n >> k;
    for(int i=0; i<n; i++) {
        int d; cin>> d;
        q.push(d);
    }
    
    ans = reverseKthElemen(q,k);
    printQueue(ans);


    return 0;
}

 */
 
/* 
 #include<bits/stdc++.h>
 using namespace std;
 #define endl '\n'

string reverse_str(string &str) {
    stack<char> st;
    for(char ch : str) 
        st.push(ch);
    
    // for(int i=0; i<str.length(); i++) {
    //     str[i] = st.top();
    //     st.pop();
    // }

    string ans;
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin>>str;
    cout<< reverse_str(str) << endl;

 
    return 0;
}
 
 */
 
/* 
 #include<bits/stdc++.h>
 using namespace std;
 #define endl '\n'

void reverse_str(string &str, int l, int r) {
     string ans;
    if(l < r) {
        swap(str[l], str[r]);
    }

    reverse_str(str, l+1, r-1);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin>>str;
    cout<< reverse_str(str) << endl;

  

    return 0;
}

 */

/* 
 #include<bits/stdc++.h>
 using namespace std;
 #define endl '\n'

void sortedInset(stack<int> &st, int data) {
    if(st.empty() or data > st.top()){
        st.push(data);
        return;
    }

    int val = st.top();
    st.pop();

    sortedInset(st, data);
    st.push(val);
}


void sort(stack<int> &st) {
    if(st.empty()) 
        return;
    
    int val = st.top();
    st.pop();

    sort(st);
    sortedInset(st, val);
}


// print  the stack...
void printStack(stack<int> &st) {
    while(st.empty() == false) {
        cout<< st.top() << " ";
        st.pop();
    }
    cout<< endl;
}
 int main()
 {  
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> st;
    int n; cin>>n;
    vector<int> list(n);
    for(int i=0; i<n; i++) {
        cin>> list[i];
        st.push(list[i]);
    }


    cout<< "Stak before sorting: " << endl;
    printStack(st);
    
    cout<<"After sorting:" << endl;
    sort(st);
    printStack(st);
 

    return 0;
 } */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string solve(string str) {
    stack<char> st;
    for(char ch : str) 
        st.push(ch);
    
    string ans;
    while(st.empty() == false) {
        ans += st.top();
        st.pop();
    }

    return ans;

}

int main()
{   
    string str; cin>>str;
    
    string res = solve(str);
    cout<<"Reverse: " << res << endl;
     
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isValid(string str) {
        
    stack<char> st;
    for(const auto s : str) {
        if(st.empty()) 
            st.push(s);
        else if((st.top() == '(' && s==')') or (st.top() == '{' && s == '}') or (st.top() == '[' && s == ']'))
            st.pop();
        else    
            st.push(s);
    }

    return (st.size() == 0) ? true : false;

}

int main()
{
    string exp = "{(}[{}]";
    bool ans = isValid(exp);
    (ans) ? cout <<"Balanced\n" : cout<<"Not balanced\n";
    


    return 0;
}
  */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


bool hasDuplicateParenthesis(string &str) {
     if (str.length() <= 3) {
        return false;
    }
 
     
    stack<char> stack;
    for (char c: str) {
        
        if (c != ')')  
      
            stack.push(c);
      
       
        else {
            
            if (stack.top() == '(')  
                return true;
            
  
            while (stack.top() != '(')  
                stack.pop();
             
  
            stack.pop();
        }
    }
  
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str = "((x+y))";  
    (hasDuplicateParenthesis(str)) ? cout<<"Yes\n" : cout<<"No\n";
     

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class TreeNode  {
    public:
        int val;
        TreeNode *left, *right;
        TreeNode(int val) {
            this->val = val;
            this->left= this->right = nullptr;
        }
};

// void inorder(TreeNode *root, vector<int> &ans) {
//     if(root) {
//         inorder(root->left, ans);
//         ans.push_back(root->val);
//         inorder(root->right, ans);
//     }

//     else 
//         ans.push_back(100000);
// }


// void postOrder(TreeNode *root, vector<int> &ans) {
//     if(root) {
//         postOrder(root->left, ans);
//         postOrder(root->right, ans);
//         ans.push_back(root->val);
//     }

//     else 
//         ans.push_back(100000);
// }

// bool isSame(TreeNode *p, TreeNode *q) {
//     vector<int> inp, inq, postp, postq;
//     inorder(p, inp);
//     inorder(q, inq);

//     postOrder(p, postp);
//     postOrder(q, postq);

//     return (inp == inq && postp == postq) ? true : false;
// }

// bool isSameTree(TreeNode *root1, TreeNode *root2) {
//     if(root1 == nullptr and root2== nullptr)
//         return true;
//     if(root1 == nullptr or root2 == nullptr)    
//         return false;
//     if(root1->val != root2->val) 
//         return false;
    
//     return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);
// }


// bool isSameTree(TreeNode *root1, TreeNode *root2) {
//     if(root1 == nullptr && root2== nullptr) 
//         return true;
//     if(root1 == nullptr || root2 == nullptr) 
//         return false;
//     return (root1->val == root2->val && isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right));
// }


// int find_min(TreeNode *root)  {
//     if(root == nullptr) 
//         return 0;
    
//     if(root->left == nullptr && root->right== nullptr) 
//         return 1;
    
//     if(root->left == nullptr)
//         return find_min(root->right) +1;
//     if(root->right == nullptr) 
//         return find_min(root->left) +1;
    
//     return min(find_min(root->left), find_min(root->right)) +1;
// }
/* 
int find_sum(TreeNode *root) {
    int sum = 0;
    if(root == nullptr)
        return 1;
    
    if(root->left == nullptr && root->right == nullptr)
        return 1;
    
    if(root->left != nullptr) 
        sum += root->left->val;
    if(root->right != nullptr) 
        sum += root->right->val;
    
    return (root->val != sum) ? 0 : find_sum(root->left) && find_sum(root->right);

}

int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    


    return 0;
} 
  */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class TreeNode {
    public:
        int val;
        TreeNode *left, *right;
        TreeNode(int val) {
            this->val = val;
            this->left = this->right = nullptr;
        }
};


// int find_sum(Node *root) {
//     int sum=0;
//     if(root == nullptr ||(root->left == nullptr && root->right))
//         return 1;
    
//     if(root->left != nullptr)
//         sum += root->left->data;
//     if(root->right != nullptr) 
//         sum += root->right->data;
    
//      return ((root->data == sum) && find_sum(root->left) && find_sum(root->right)) ? 1 : 0;
// }
 
vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);

    if(root == nullptr) 
        return ans;
    
    while(!q.empty()) {
        int size= q.size();
        vector<int> data;

        for(int i=0; i<size; i++) {
            TreeNode *curr= q.front();
            q.pop();
            data.push_back(curr->val);
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        ans.push_back(data);
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

class TreeNode {
    public:
        int val;
        TreeNode *left, *right;
        TreeNode(int val) {
            this->val = val;
            this->left = this->right = nullptr;
        }
};


vector<vector<int>> solve(TreeNode *root) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);

   int count=0;
    if(root== nullptr)
        return ans;
    
    while(true) {
        int size = q.size();
        if(size==0) 
            return ans;
        count++;
        vector<int> data;

        while(size>0) {
            TreeNode *curr = q.front();
            q.pop();

            data.push_back(curr->val);
            (curr->left) ? q.push(curr->left) : q.push(curr->right);

            size--;
        }

        if(count%2==0) 
            reverse(data.begin(), data.end());
        ans.push_back(data);

    }
     
    return ans;
}

int main()
{


    return 0;
} */




/* 
=============================
Binary search Tree..
Practice in C++
============================= */

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

};

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
    int value; cin>> value;
    (bst.searchTree(root, value)) ? cout<<"Found!\n" : cout<<"Not found\n";
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target) {
    vector<int> ans;
    unordered_map<int,int> mp;

    for(int i=0; i<arr.size(); i++) {
        if(mp.find(target - arr[i]) != mp.end()) {
            ans.push_back(mp[target-arr[i]]);
            ans.push_back(i);
            return ans;
        }

        mp[arr[i]] = i;
    }

    return ans;
}

int main()
{           




    return 0;
} */


// ===========================
// Second Time reacp...
// ===========================

// implement stack using queue

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Stack {
    queue<int> q;
    public:
        void push(int x) {
            q.push(x);
        }

        void reverseQueue() {
            if(q.empty()) return;

            int front = q.front();
            q.pop();

            reverseQueue();
            q.push(front);
        }

        int pop() {
            if(q.empty()) {
                cout <<"Underflow\n";
                exit(0);
            }

            reverseQueue();
            int front = q.front();
            q.pop();
            reverseQueue();
            return front;
        }

};

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    vector<int> arr = {1, 2, 3, 4, 5};
    Stack st;

    for(int i : arr) 
        st.push(i);
    
    for(int i=0; i<arr.size(); i++) 
        cout << st.pop() << " ";
    cout << endl;
    
    


    return 0;
}