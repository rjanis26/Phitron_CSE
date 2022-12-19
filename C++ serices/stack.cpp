#include<bits/stdc++.h>
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
    Node *head,  *top;
    int len = 0;
    public:
        Stack() {
            this->head = NULL;
            this->top = NULL;
        }

        bool is_empty();
        void size();
        void push(int data);
        void pop();
        void print_stack();
        void top_element();
        int sum();
        void odd_pos_node();
        void even_pos_node();
        int getSize();

        void odd_even_node_sum();
        void odd_even_count();

        int find_mid();

};


int Stack :: find_mid() {
    Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->value;
}

void Stack :: odd_even_count() {
    Node *curr =  head;
    int odd = 0, even = 0;
    while(curr != NULL) {
        if((curr->value)&1) 
            odd++;
        else 
            even++;
        
        curr = curr->next;
    }

    cout <<"Total odd: "<< odd << endl;
    cout<<"Total even: " << even << endl;
}


void Stack :: odd_even_node_sum() {
    Node *curr = head;
    int odd=0, even=0;

    while(curr != NULL) {
        if((curr->value)&1) 
            odd += curr->value;
        else 
            even += curr->value;
        
        curr = curr->next;
    }

    cout<<"Odd sum: " << odd << endl;
    cout<< "even sum: " << even << endl;
}

void Stack :: even_pos_node() {
    Node *curr = head;
    int ans=0;
    while(curr!=NULL) {
        if(!(ans&1))
            cout<< curr->value<< " ";
        ans++;
        curr = curr->next;
    }
    cout<< endl;
}

void Stack :: odd_pos_node() {
    Node *curr = head;
    int ans=0;
    while(curr != NULL) {
        if(ans&1) 
            cout<< curr->value << " ";
        ans++;
        curr = curr->next;
    }

    cout<< endl;
}

int Stack :: sum() {
    Node *curr = head;
    int s = 0;
    while(curr != NULL) {
        s += curr->value;
        curr = curr->next;
    }

    return s;
}

bool Stack :: is_empty() {
    if(head == nullptr) 
        return true;
    return false;
}

void Stack :: push(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) {
        newNode->prev = newNode->next = NULL;
        head = top = newNode;
    }

    else {
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
    }
    
    len++;
}

void Stack :: pop() {
    Node *curr = top;
    if(is_empty()) 
        cout<<"Stack is empty!" << endl;
    
    else if(head == top) {
        top = head = NULL;
        free(curr);

    }

    else {
        top->prev->next = NULL;
        top =  curr->prev;
        free(curr);
    }
    
    len--;
}

void Stack :: size() {
    Node *curr = head;
    int len = 0;
    while(curr != nullptr) {
        len++;
        curr = curr->next;
    }

    cout<<"Size: "<< len << endl;
}

int Stack :: getSize() {
    return len;
}

void Stack :: top_element() {
    if(is_empty()) 
        cout<<"Stack is empty!" << endl;
    else
        cout<<"Top: "<< top->value << endl;
}

void Stack :: print_stack() {
    Node *curr = head;
    cout<<"Stack elements: ";
    while(curr != nullptr) {
        cout<< curr->value <<" ";
        curr = curr->next;
    }

    cout<< endl;
}

int main()
{   
    Stack st = Stack();
    (st.is_empty()) ? cout<<"Empty!" << endl : cout<< "Not Empty!" << endl;
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(10);
    st.push(-2);
    st.push(9);
   st.push(12);
    st.print_stack();
    st.top_element();
    st.size();
    (st.is_empty()) ? cout<<"Empty!" << endl : cout<< "Not Empty!" << endl;
    
    cout<< "Total_sumn: " << st.sum() << endl;
    
    cout<<"odd positon node: ";
    st.odd_pos_node();
    // st.pop();
    // st.print_stack();
    // st.top_element();
    // st.pop();
    // st.pop();
    // st.print_stack();
    // st.top_element();
    // st.pop();
    //  (st.is_empty()) ? cout<<"Empty!" << endl : cout<< "Not Empty!" << endl;

    cout<<"Size: "<<st.getSize() << endl;
    cout<<"even pos node: ";
    st.even_pos_node();

    st.odd_even_node_sum();
    st.odd_even_count();

    cout<< "Mid of the stack: " << st.find_mid() << endl;
    st.top_element();
 
    return 0;
}

 