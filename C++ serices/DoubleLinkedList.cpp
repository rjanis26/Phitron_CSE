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


class LinkedList {
    Node *head;
    public:
        LinkedList() {
            this->head = NULL;
        }

        void print_list();
        void add_head(int data);
        void add_end(int data);
        void make_cycle(int pos);
        bool has_cycle();
        void romove_cycle(); 
       int find_mid();

       void reverse_list();

};


void LinkedList :: reverse_list() {
    Node *curr=head;
    while(curr != NULL) {
        swap(curr->next, curr->prev);
        if(curr->prev != NULL) 
            head = curr->prev;
             
        curr = curr->prev;

    }
}
 
// remove the cycle...
void LinkedList :: romove_cycle() {
    Node *slow = head, *fast = head;
    do {
        slow = slow->next;
        fast = fast->next->next;
    } while(slow != fast);

    fast = head;

    while(fast->next != slow->next) {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

bool LinkedList :: has_cycle() {
    Node *slow = head, *fast = head;  
    if(head == nullptr) 
        return false;
    while(fast!=NULL and fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow )
                return true;
        }
        return false;
}

void LinkedList :: make_cycle(int pos) {
    Node *curr = head, *startNode;
    int count = 1;
    while(curr->next != NULL) {
        if(count == pos) startNode = curr;
        curr = curr->next;
        count++;
    }
    curr->next = startNode;

}
 

void LinkedList :: add_head(int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    if(head != NULL) {
        head->prev = newNode;
    }
    head = newNode;

}
void LinkedList :: add_end(int data)  {
    Node *newNode = new Node(data);
    if(head == NULL) {
        add_head(data);
        return;
    }
 
    else {
        Node *curr = head;
        while(curr->next != NULL) {
            curr = curr->next;
        }
        
        curr->next = newNode;
        newNode->prev = curr;
       
    }
}


int LinkedList :: find_mid() {
    Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->value;
}




void LinkedList :: print_list() {
    Node *curr = head;
    while(curr != NULL) {
        cout<< curr->value  <<"->";
        curr = curr->next;
    }
    cout<<"NULL" << endl;
}



int main()
{
    LinkedList ll = LinkedList();
    ll.add_end(10);
    ll.add_end(3);
    ll.add_head(5);
    ll.add_end(100);
    ll.add_head(11);
    ll.add_head(111);
  
     ll.print_list();
    // int ans = ll.find_mid();
    // if (!ans) 
    //     cout<< "List is empty" << endl;
    // else 
    //     cout <<"mid of the list: " << ans  << endl;

    // ll.make_cycle(3);
    // bool ans = ll.has_cycle();
    // (ans) ? cout<<"Yes" << endl : cout<< "No" << endl;
    
    // ll.romove_cycle();
    // bool res = ll.has_cycle();
    // (res) ? cout<<"Yes" << endl : cout<< "No" << endl;
    
    // cout<<"Mid value: " <<ll.find_mid() << endl;
    ll.reverse_list();
    ll.print_list();

    return 0;
}

   */

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

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

class LinkedList {
    Node *head;
    public:
        LinkedList() {
            this->head = NULL;
        }

        void insert_at_head(int data);
        void insert_at_end(int data);
        void print_list();
        void reverse_list();
        int get_length();
        bool length_even_odd();

};
 

void LinkedList :: reverse_list() {
   Node *curr=head;
    while(curr != NULL) {
        swap(curr->next, curr->prev);
        if(curr->prev != NULL) 
            head = curr->prev;
             
        curr = curr->prev;

      }

    Node *curr = head;
    while(curr->next != nullptr)
        curr = curr->next;
    
    while(curr != nullptr) {
        cout<< curr->value;
        if(curr->prev != nullptr) 
            cout <<"->";
        curr = curr->prev;
    }
    cout << endl;
  
}

//insert at the first node...
void LinkedList :: insert_at_head(int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    if(head != NULL) 
        head->prev = newNode;
    head = newNode;

}

// insert at the end node...
void LinkedList :: insert_at_end(int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
        return;
    }

    Node *curr = head;
    while(curr->next != nullptr) 
        curr = curr->next;
    
    curr->next = newNode;
    newNode->prev = curr;
 
}

// get size the list...
int LinkedList :: get_length() {
    Node *curr = head;
    int count = 0;
    while (curr != nullptr) {
        count++;
        curr = curr->next;
    }
    return count;
}


bool LinkedList :: length_even_odd() {
    // Node *curr =  head;
    // while(1) {
    //     if(curr == nullptr) {
    //         cout<<"Even" << endl;
    //         break;
    //     }

    //     if(curr->next == nullptr) {
    //         cout<<"odd" << endl;
    //         break;
    //     }
    //     curr = curr->next->next;
    // }

    Node *curr = head;
    while(curr && curr->next)
        curr = curr->next->next;
    
    if(!curr)
        return true;
    return false;


     
 }

// print the list...
void LinkedList :: print_list() {
    Node *curr = head;
    while(curr != nullptr)  {
        cout<< curr->value << "->";
        curr = curr->next;
    }

    cout << "NULL" << endl;
}

int main()
{

    LinkedList ll = LinkedList();
    ll.insert_at_end(5);
    ll.insert_at_end(50);
    ll.insert_at_end(500);
    ll.print_list();

    cout<<"Lenght of the list: " << ll.get_length() << endl;

    ll.insert_at_head(10);
    ll.insert_at_head(20);
    ll.print_list(); 
    ll.reverse_list();
    ll.print_list();
    cout<<"Lenght of the list: " << ll.get_length() << endl;
    (ll.length_even_odd()) ? cout<<"Even" : cout<< "Odd" << endl;
   
    return 0;
}
 */




 