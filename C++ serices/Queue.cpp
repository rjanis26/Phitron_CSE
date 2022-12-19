
// queue using array...
/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = nullptr;
        }
};

class Queue {
    Node *front, *rear;
    public:
        Queue() {
            this->front = nullptr;
            this->rear = nullptr;
        }

        void push(int data);
        int pop();
        void print_queue();
        int fronts();
        int back();
        bool is_empty();
        int size();
        
};

bool Queue :: is_empty() {
    if(front == nullptr && rear == nullptr) 
        return true;
    else    
        return false;  

}

int Queue :: size() {
    Node *curr = front;
    int count = 0;
    while(curr != nullptr) {
        count++;
        curr = curr->next;
    }

    return count;
} 


int Queue :: back() {
    if(rear == nullptr) 
        return -1;
    else 
        return rear->value;
}

int Queue :: fronts() {
    if(front == nullptr)    
        return -1;
    else    
        return front->value;
     
}

void Queue :: push(int data) {
    Node *newNode = new Node(data);
    if(front == nullptr) {
        front = newNode;
        rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = rear->next;
} 

int Queue :: pop() {
    int val;
    if(rear == nullptr) {
        cout << "Queue Underflow!" <<endl;
    }

    Node *delNode;
    delNode = front;
    val = delNode->value;
    front = front->next;
    free(delNode);
    return val;
}
 

void Queue :: print_queue() {
    Node *curr = front;
    while(curr != nullptr) {
        cout << curr->value << "->";
        curr = curr->next;
    }

    cout << "NULL" << endl;
    
}

int main()
{
    Queue q = Queue();
    q.is_empty();
    q.push(4);
    q.push(5);
    q.push(10);
    q.push(11);

    q.is_empty();
    q.print_queue();
    cout << q.fronts() << endl;
    cout<< q.back() << endl;

    cout <<"Size: " << q.size() << endl;


    return 0;
} */
/* 
#include<bits/stdc++.h>
#include"MY_Queue.h"
using namespace std;

int main()
{
    Queue<int> q = Queue();
    q.is_empty();

    // q.push(1);
    // q.push(5);
    // q.push(10);
    // q.push(11);
    // q.push(2);

    int n; cin >> n;
    for(int i=1; i<=n; i++) {
        // int data; cin>> data;
        q.push(i);
    }


    cout<< "size: " << q.size() << endl;
    while(!q.is_empty()) {
        cout << q.pop() << " ";
    }
    
   
    cout<<"front: " << q.fronts() << endl;
    cout<< "Back: " << q.back() << endl;
    q.pop();
    q.pop();
 
    cout<< "size: " << q.size() << endl;
    cout<<"front: " << q.fronts() << endl;
    cout<< "Back: " << q.back() << endl;



    return 0;
}
 */
