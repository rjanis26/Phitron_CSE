  /* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

ll power(ll base, ll n) {
    ll res = 1;
    while(n) {
        if(n&1) {
            res *= base;
            n--;
        }
        else {
            base *= base;
            n/=2;
        }
    }
    return res;
}
 
int main()
{   

    int b, p; cin>>b>> p;
   // cout<< power(b,p) << endl;
    int ans= power(b,p);
    // int first = ans%10;
    // ans/=10;
    // int last = ans%10;
    // last *= 10;
 
    
    cout<< ans << endl;

    return 0;
}   */

/* 
    int one= n%10;
    n/=10;

    int digit = n%10;
    digit *= 10;

    n=digit+one;
 */



/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cint.tie(0);    cout.tie(0);


    int b, p; cin>> b, p;
    int 




    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll power(ll b, ll n) {
    ll res = 1;
    while(n) {
        if(n&1) {
            res *= b;
            n--;
        }
        else {
            b *= b;
            n/=2;
        }
    }

    return res;
}

int main()
{
    int b, p; cin>> b >>p;
    int ans = power(b,p);
    cout<< ans << endl;


    return 0;
} */


 /* 
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

 
bool prime(int n) {
    if(n <2 ) return false;
    if(n==2 or n == 3) return true;
    if(n%2 ==0) return false;

    for(int i=3; i*i<=n; i+=2) {
        if(n%i==0) 
            return false;
    }

    return true;
}
 */
/* 
 
 
 #include<iostream>
using namespace std ;

class LinkedList
{
    struct Node
    {
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
   Node *head, *tail;

 public:
    LinkedList(){
       head = NULL;
       tail = NULL;

   }
//Add value at the First Node:::::

   void insertAtBeginning(int data)
   {
       Node* newNode = new Node (data);
       if(head == NULL)
       {
           head = newNode;
           tail = newNode;
       }else{
           newNode->next = head;
           head = newNode;
       }
   }
// Add value at the Last Node::::

   void insertAtEnd(int data)
   {
       Node* newNode = new Node(data);
       if(head == NULL){
           head = newNode;
           tail = head;
       }else{
           tail->next = newNode;
           tail = tail->next;
        //    Node* current = head;
        //    while( current->next != NULL)
        //         current = current->next;
        //     current->next = newNode;
       }
    
   }

//LinkedList print logic:::::

   void print()
   {
       if(head == NULL)
       {
           cout << "List is empty!" << endl;
       }else{
           Node* current = head;
           while(current!= NULL){
               cout << current->data << "->";
               current = current->next;
           }
           cout << "NULL" << endl;
       }
   }

   void deleteNode(int dataToDel)
   {
       Node* current = head;
       if(head == NULL){
           cout << "List is empty!" << endl;
           return;
       }
       else if(head->data == dataToDel){
           head = head->next;
           free(current);
           return;
       }else {
           while(current->next!=NULL && current->next->data != dataToDel)
           {
               current = current->next;
           }
           if(current->next == NULL){
               cout << "Data doesn't exist." << endl;
               return;
           }else{
               Node* nodeToDel = current->next;
               current->next = current->next->next;
               free(nodeToDel);
           }
       }
   }
};

int main(void){
    LinkedList ll = LinkedList();
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtBeginning(50);
    ll.print();
    ll.deleteNode(50);
    ll.print();
    ll.deleteNode(10);
    ll.print();
    ll.deleteNode(40);
    ll.print();
}
 */
/* 
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    for(int i=0; i<n; i++){
        if(arr[i] %2 == 0) 
            arr[i] = -1;
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{   
    int n; cin>> n; 
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    solve(arr,n);
    print_arr(arr,n);



    return 0;
} */





#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public: 
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};

class Stack {
    Node *top;
    public: 
        Stack() {
            this->top == nullptr;
        }

        void push(int data);
        int pop();
        void print_stack();

};

void Stack :: push(int data) {
    Node *newNode = new Node(data);
    if(top == NULL) 
        cout<<"Stack is empty!"<< endl;
    else {
        newNode->next = top;
        top = newNode;
    }
}


int Stack :: pop() {
    int ans = -1;
    if(top == nullptr) 
        cout<< "Stack is empty!" << endl;
    
    else {
        Node *delNode = top;
        top = top->next;
        delete(delNode);
    }

    return ans;
}


void Stack  :: print_stack() {
    Node *curr = top;
    while(curr != nullptr) {
        cout<< curr->value<<" ";
        curr = curr->next;
    }

    cout<< endl;
}

int main() 
{

    Stack st = Stack();
    st.push(25); //push(x+y) = 11 + 14= 25
    st.push(39); //push(y+z) = 14 + 25 = 39
    // st.push(350); //push(y*z) = 14 * 25 = 350
    // st.push(154);//push(x*y) = 11 * 14 = 154
    // st.print_stack();

    st.print_stack();
    st.pop();
    st.pop();

    st.print_stack();
    st.push(350); //push(y*z) = 14 * 25 = 350
    st.push(154);//push(x*y) = 11 * 14 = 154
    
    st.print_stack();
    st.pop();
    st.pop();
    
    st.print_stack();
/* 

Given, 
x = last of my birthday + 5 = 6 + 5 = 11
y = x + 3 = 11 + 3 = 14
z = y + x = 14 + 11 = 25
push(x+y) = 11 + 14= 25
push(y+z) = 14 + 25 = 39
pop()
push(y*z) = 14 * 25 = 350
push(x*y) = 11 * 14 = 154

Push(x+y), Push(y+z), Pop(), Push(y*z), Push(x*y), Pop(), Pop()
 */
 

    return 0;
}



