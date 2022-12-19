#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


template <class N> class Node {
    public:
        N value;
        Node *next;
        Node(N data) {
            this->value = data;
            this->next = nullptr;
        }
};

template <class Q>class Queue {
    Node<Q> *front, *rear;
    public:
        Queue() {
            this->front = nullptr;
            this->rear = nullptr;
        }

        void push(Q data);
        Q pop();
        void print_queue();
        Q fronts();
        Q back();
        bool is_empty();
        Q size();
        
};

template<class Q> 
bool Queue<Q> :: is_empty() {
    if(front == nullptr && rear == nullptr) 
        return true;
    else    
        return false;  

}

template<class Q> 
Q Queue<Q> :: size() {
    Node<Q> *curr = front;
    Q count = 0;
    while(curr != nullptr) {
        count++;
        curr = curr->next;
    }

    return count;
} 


template<class Q> 
Q Queue<Q> :: back() {
    if(rear == nullptr) 
        return -1;
    else 
        return rear->value;
}

template<class Q> 
Q Queue<Q> :: fronts() {
    if(front == nullptr)    
        return -1;
    else    
        return front->value;
     
}

template<class Q> 
void Queue<Q> :: push(Q data) {
    Node<Q> *newNode = new Node<Q>(data);
    if(front == nullptr) {
        front = newNode;
        rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
} 

template<class Q> 
Q Queue<Q> :: pop() {
   Q val;
    if(rear == nullptr) {
        cout << "Queue Underflow!" <<endl;
    }

    Node<S> *delNode;
    delNode = front;
    val = delNode->value;
    front = front->next;
    free(delNode);
    return val;
   
}

 