#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


template <class N> class Node {
    public:
        N value;
        Node  *next, *prev;
        Node(N data) {
            this->value = data;
            this->next = NULL;
            this->prev = NULL;
        }
};


template <class S> class Stack {
    Node <S> *head,  *top;
    int len = 0;
    public:
        Stack() {
            this->head = NULL;
            this->top = NULL;
        }

        bool is_empty();
        int size();
        void push(S data);
        void pop();
        void print_stack();
        int top_element();
        void mid();
       

};
 

 // find the mid of the stack...
 template<class S>
 void Stack<S> :: mid() {
    Node<S> *slow = head, *fast = head;
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->value << endl;
 }


template <class S>
bool Stack<S> :: is_empty() {
    if(head == nullptr) 
        return true;
    return false;
}


template <class S>
void Stack<S> :: push(S data) {
    Node<S> *newNode = new Node<S>(data);
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


template <class S>
void Stack<S> :: pop() {
    Node<S> *curr = top;
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


template <class S>
int Stack<S> :: size() {
    Node <S> *curr = head;
    int len = 0;
    while(curr != nullptr) {
        len++;
        curr = curr->next;
    }

    return len;
}
 
 template <class S>
int Stack<S> :: top_element() {
    if(is_empty()) 
       return -1;
    else
        return top->value;
}


template <class S>
void Stack<S> :: print_stack() {
    Node <S> *curr = head;
    cout<<"Stack elements: ";
    while(curr != nullptr) {
        cout<< curr->value <<" ";
        curr = curr->next;
    }

    cout<< endl;
}
 


