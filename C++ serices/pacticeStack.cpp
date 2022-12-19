/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public: 
        int value;
        Node *next, *prev;
        Node(int data) {
            this->value = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

class Stack {
    Node *head, *top;
    int len=0;
    public:
        Stack() {
            this->head = NULL;
            this->top = NULL;
        }

        bool is_empty();
        void push(int data);
        void pop();
        void size();
        void top_element(); 
        void print_stack();
        void find_max();
        int segreegate();

};



bool Stack :: is_empty() {
    if(head == nullptr) 
        return true;
    return false; 
}

void Stack :: push(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) {
        newNode->next = newNode->prev = NULL;
        head = top = newNode;
    }

    else {
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
    }
}


 void Stack :: pop() {
    Node *curr = top;
    if(is_empty()) 
        cout<<"Stack is empty!"<< endl;
    
    else if(head = top) {
        top = head = NULL;
        free(curr);
    }

    else {
        top->prev->next = NULL;
        top = curr->prev;
        free(curr);
    }
      
 }

void Stack :: size() {
    Node *curr = head;
    int len=0;
    while(curr != NULL) {
        len++;
        curr = curr->next;
    }

    cout <<"Size: "<< len << endl;
}

void Stack :: top_element() {
    if(is_empty())
        cout<<"Stack is empty!" << endl;
    else 
        cout<<"Top: " << top->value << endl;
}

void Stack :: find_max() {
    if(is_empty()) 
        cout<<"Stack is empty!" << endl;
    
    Node *curr = head;  
    int ans = INT_MIN, mn = INT_MAX;
    while(curr != NULL) {
        // if((curr->value) > max)
        //     max= curr->value;
        ans= max(ans, (curr->value));
        mn = min(mn, (curr->value));
        curr = curr->next;
    }

    cout<< "Max: "<< ans << endl;
    cout<< "Min: " << mn << endl;
}

void Stack :: print_stack() {
    Node *curr = head;
    cout<<"Stack elements: ";
    while(curr != NULL) {
        cout<< curr->value << " ";
        curr = curr->next;
    }

    cout << endl;
}
 

int main()
{
    Stack st = Stack();
    (st.is_empty()) ? cout<<"Empty!"<< endl : cout<<"Not empty" << endl;
    st.push(1);
    st.push(11);
    st.push(4);
    st.push(3);

    st.print_stack();
    st.size();
    st.top_element();
    st.find_max();
    st.pop();
    st.print_stack();

    return 0;
} */


// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// int precission(char ch) {
//     if(ch=='^') 
//         return 3;
    
//     else if(ch=='*' || ch=='/') 
//         return 2;
    
//     else if(ch=='+' || ch=='-')
//         return 1;
//     else 
//         return -1;
// }

// string infix_to_postfix(string s) {
//     stack<char> st;
//     string ans;

//     for(auto str : s) {
//         if(isalpha(str) || isdigit(str)) 
//             ans += str;
        
//         else if(str == '(') 
//             st.push(str);
        
//         else if(str ==')') {
//             while(!st.empty() && st.top() != '(') {
//                 ans += st.top();
//                 st.pop();
//             }

//             if(!st.empty()) 
//                 st.pop();
//         }

//         else {
//             while(!st.empty() &&  precission(st.top()) >= str) {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(str);
//         }

//     }

//     while(!st.empty()) {
//         ans += st.top();
//         st.pop();
//     }

//     return ans;
// }
// int main()
// {   
//     string str; cin>> str;
//     string ans = infix_to_postfix(str);
//     cout << ans << endl;
 

//     return 0;
// }

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

int precission(char ch) {
    if(ch=='^') 
        return 3;
    else if(ch == '*' || ch =='/') 
        return 2;
    else if(ch == '+' || ch == '-') 
        return 1;
    else 
        return -1;
}
 
  
string infix_to_prefix(string s) {
    reverse(s.begin(), s.end());
    stack<char> st;
    string ans;

    for(auto str : s) {
        if(isalpha(str) || isdigit(str)) 
            ans += str;
        
        else if(str == ')') 
            st.push(str);
        
        else if(str =='(') {
            while(!st.empty() && st.top() != ')') {
                ans += st.top();
                st.pop();
            }

            if(!st.empty()) 
                st.pop();
        }

        else {
            while(!st.empty() &&  precission(st.top()) >= str) {
                ans += st.top();
                st.pop();
            }
            st.push(str);
        }

    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}


int prefixEvaluation(string  str) {
    stack<int> st;
    for(int i=str.length()-1; i>=0; i--) {
        //if(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <='z' || str[i] >= 'A' && str[i]<='Z')
        if(isdigit(str[i])) 
            st.push(str[i]-'0');
        
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            switch (str[i])
            {
            case '+':
                st.push(a+b);break;
            case '-':
                st.push(a-b); break;
            case '*':
                st.push(a*b); break;
            case '/':
                st.push(a/b); break;
            case '^':
                st.push(pow(a,b)); break;
            
            default:
                break;
            }
        }
    }

    return st.top();
    
}
 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

     string str = "(7+(4*5))-(2+0)";
     string ans = infix_to_prefix(str);
     cout << ans << endl;
    
    cout << prefixEvaluation(ans)<< endl;

    
    return 0;
}

 */


// leetcode solve...

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int evalPRN(vector<string> &tokens) {
    stack<int> st;
    for(auto str : tokens) {
        if(str == "+" || str == "-" || str == "*" || str== "/" ) {
            int a = st.top() ; st.pop();
            int b = st.top(); st.pop();

            if(str == "-") st.push(a-b);
            if(str =="+") st.push(a+b);
            if(str=="*") st.push(a*b);
            if(str=="/") st.push(a/b);
        }

        else {
             stringstream ss(str);
                int data;
                ss >> data;
                st.push(data);
        }
            
    }

    return st.top();
}

int main()
{
 
    return 0;
} */


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'



int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    






    return 0;
}