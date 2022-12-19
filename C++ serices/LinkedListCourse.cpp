 /* 
#include<bits/stdc++.h>
using namespace std;

// this is node class...
class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};


class LinkedList {
    Node *head;
    public:
        LinkedList() {
            this->head = NULL;
        }

        bool is_empty();
        void insert_first(int data);
        void insert_end(int data);
        void print_list();
        int get_length();
        int find_mid();
        void delete_position(int pos);
        void delte_head();
        void delete_end();
        void print_even_nodes();
        void print_odd_nodes();
        int even_sum();
        int odd_sum();
        int count_even();
        int count_odd();
        bool search_value(int value);
        void show_odd();
        void show_even();
         
};

//find the even value...
void LinkedList :: show_even() {
    Node *curr = head;
    while(curr != NULL) {
        if(!((curr->value)&1))  
            cout<<curr->value << "->";
        curr = curr->next;
    }
    cout<<"NULL" << endl;
}

// print odd value...
void LinkedList :: show_odd() {
    Node *curr = head;
    while(curr != NULL) {
        if((curr->value) &1)
            cout<<curr->value <<"->";
        curr = curr->next;
    }
    cout<<"NULL" << endl;
}

// search from list...
bool LinkedList :: search_value(int value) {
    Node *curr = head;
    while(curr != NULL) {
        if(curr->value = value) 
            return true;
    }
    return false;
}

// count odd value...
int LinkedList :: count_odd() {
    Node *curr = head;
    int ans=0; 
    while(curr != NULL) {
        if((curr->value)&1)     
            ans++;
        curr = curr->next;
    }
    
    return ans;
}

// count even value...
int LinkedList :: count_even() {
    Node *curr = head;
    int ans=0;
    while(curr != NULL) {
       if(!((curr->value)&1))
            ans++;
        curr = curr->next;
    }

    return ans;
}

// find odd value sum...
int LinkedList :: odd_sum() {
    Node *curr = head;
    int odd_sum=0;
    while(curr != NULL) {
        if((curr->value)&1) 
            odd_sum += curr->value;
        curr = curr->next;
    }

    return odd_sum;
}

// find even value sum...
int LinkedList :: even_sum() {
    Node *curr = head;
    int even_sum=0;
    while(curr != NULL) {
        if(!((curr->value)&1))
            even_sum += curr->value;
        curr = curr->next;
    }

    return even_sum;
}

// print odd pos nodes...
void LinkedList :: print_odd_nodes() {
    Node *curr = head;
    int ans=0;
    while(curr != NULL) {
        if((ans&1)) 
            cout<<curr->value << "->";
        ans++;
        curr = curr->next;
    }

    cout<<"NULL" << endl;
}

// print even pos nodes...
void LinkedList :: print_even_nodes() {
    int ans=0;
    Node *curr = head;
    while(curr != NULL) {
        if(!(ans&1))
            cout<< curr->value <<"->";
        ans++;
        curr = curr->next;
    }

    cout<<"NULL" << endl;
}


void LinkedList ::delete_end()
{
    Node *curr = head;
    if (curr != NULL)
    {
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        
        Node *delNode = curr->next;
        curr->next = NULL;
        delete delNode;
    }
    
    else {
        cout<<"List is empty!" << endl;
    }
}

// delete at the first node...
void LinkedList :: delte_head() {
    Node *curr = head;
    if(curr != NULL)  {
        head = curr->next;
        delete curr;
    }

    else  {
        cout<<"Lis is empty!" << endl;
    }
}

void LinkedList :: delete_position(int pos) {
    Node *curr = head;
    if(curr != NULL) {
         if(pos == 1) {
        head = head->next;
        //return head->value;
    }

    Node *curr = head;
    int i=1; 
    while(i<pos-1) {
        curr = curr->next;
        i++;
    }

    curr->next = curr->next->next;
    }
    
    else  {
        cout<<"List is empty!" << endl;
    }
}

// insert at beginning...
void LinkedList :: insert_first(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) 
         head = newNode;
    
    else {
        newNode->next = head;
        head = newNode;
    }
}

// insert at last node... 
void LinkedList :: insert_end(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) 
        head = newNode;

    else {
        Node *curr = head;
        while(curr->next != NULL) {
            curr =  curr->next;
        }
        curr->next = newNode;
    }
}


int LinkedList :: get_length() {
    Node *curr = head;
    int count = 0;
    while(curr != NULL) {
        curr = curr->next;
        count++;
    }
    
    return count;
}

// find the mid...
int LinkedList :: find_mid() {
    Node *curr = head, *curr_mid = head;
    int count = 0;
    while(curr != NULL) {
        curr = curr->next;
        count++;
    }

    int mid = count/2;
    for(int i=1; i<=mid; i++) 
        curr_mid = curr_mid->next;
    
    return curr_mid->value;

}
 
// check is null ...
bool LinkedList :: is_empty()  {
    return (head == NULL);
}

// print list is...
void LinkedList :: print_list() {
    if(is_empty()) 
        cout<<"List is empty!" << endl;
    
    else {
        Node *curr = head;
        while(curr != NULL)  {
            cout<< curr->value <<"->";
            curr = curr->next;
        }
        cout <<"NULL";
    }
    cout<< endl;
}


int main()
{

    LinkedList ll = LinkedList();
    ll.insert_first(1);
    ll.insert_first(4);
    ll.insert_first(5);
    ll.insert_first(10);
    ll.print_list();
    ll.insert_end(3);
    ll.insert_end(2);
    ll.insert_end(9);
    ll.print_list();
    // cout<<"List length: " << ll.get_length() << endl;
    // cout<<"Mid of the list: "<< ll.find_mid() << endl;
    // ll.delete_position(1); 
    // ll.print_list();
    // ll.delte_head();
    // ll.print_list();
    // ll.print_list();
    // ll.delte_head();
    // ll.print_list();
    //  ll.delte_head();
    // ll.print_list();
    // ll.delete_end();
    // ll.print_list();
      cout<<"List length: " << ll.get_length() << endl;
    //   ll.delete_position(1);
    //   ll.print_list();

    cout<<"Even pos node: ";
    ll.print_even_nodes();
    cout <<"Odd pos node: ";
    ll.print_odd_nodes();
    cout<<"Even sum: " <<ll.even_sum() << endl;
    cout<<"Odd sum: " << ll.odd_sum() <<endl;
    cout<<"Total odd value: " << ll.count_odd() << endl;
    cout<<"Total even value: " << ll.count_even() << endl;
    // bool ans = ll.search_value(20);
    // (ans==true) ? cout<< "Found.\n" : cout <<"Not found!\n";
    
    ll.show_odd();
    ll.show_even();

    return 0;
   
}
 
  */


 
#include<bits/stdc++.h>
using namespace std;

// this is node class...
class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};
 

class LinkedList {
    Node *head;
    public:
        LinkedList() {
            this->head = NULL;
        }

        bool is_empty();
        void insert_first(int data);
        void insert_end(int data);
        void print_list();
        int get_length();
        int find_mid();
        void delete_position(int pos);
        void delte_head();
        void delete_end();
        void show_even();
        void show_odd();
        bool search_value(int value);
        void print_odd_nodes();
        void print_even_nodes();
        int count_odd();
        int count_even();
        int odd_sum();
        int even_sum();
        bool is_palindrome();
         
          
};
  

// is palindrome or not...
bool LinkedList :: is_palindrome() {
    bool ans = false;
    vector<int> v;
    Node *curr = head;

    while(curr != nullptr) {
        int x = curr->value;
        v.push_back(x);
        curr = curr->next;
    }

    int n = v.size();
    for(int i=0; i<n/2; i++) {
        if(v[i] == v[n-i-1]) 
            ans = true;
        else  
            break;
    }
    return ans;
}
 

//find the even value...
void LinkedList :: show_even() {
    Node *curr = head;
    while(curr != NULL) {
        if(!((curr->value)&1))  
            cout<<curr->value << "->";
        curr = curr->next;
    }
    cout<<"NULL" << endl;
}

// print odd value...
void LinkedList :: show_odd() {
    Node *curr = head;
    while(curr != NULL) {
        if((curr->value) &1)
            cout<<curr->value <<"->";
        curr = curr->next;
    }
    cout<<"NULL" << endl;
}

// search from list...
bool LinkedList :: search_value(int value) {
    Node *curr = head;
    while(curr != NULL) {
        if(curr->value = value) 
            return true;
    }
    return false;
}

// count odd value...
int LinkedList :: count_odd() {
    Node *curr = head;
    int ans=0; 
    while(curr != NULL) {
        if((curr->value)&1)     
            ans++;
        curr = curr->next;
    }
    
    return ans;
}

// count even value...
int LinkedList :: count_even() {
    Node *curr = head;
    int ans=0;
    while(curr != NULL) {
       if(!((curr->value)&1))
            ans++;
        curr = curr->next;
    }

    return ans;
}

// find odd value sum...
int LinkedList :: odd_sum() {
    Node *curr = head;
    int odd_sum=0;
    while(curr != NULL) {
        if((curr->value)&1) 
            odd_sum += curr->value;
        curr = curr->next;
    }

    return odd_sum;
}

// find even value sum...
int LinkedList :: even_sum() {
    Node *curr = head;
    int even_sum=0;
    while(curr != NULL) {
        if(!((curr->value)&1))
            even_sum += curr->value;
        curr = curr->next;
    }

    return even_sum;
}

// print odd pos nodes...
void LinkedList :: print_odd_nodes() {
    Node *curr = head;
    int ans=0;
    while(curr != NULL) {
        if((ans&1)) 
            cout<<curr->value << "->";
        ans++;
        curr = curr->next;
    }

    cout<<"NULL" << endl;
}

// print even pos nodes...
void LinkedList :: print_even_nodes() {
    int ans=0;
    Node *curr = head;
    while(curr != NULL) {
        if(!(ans&1))
            cout<< curr->value <<"->";
        ans++;
        curr = curr->next;
    }

    cout<<"NULL" << endl;
}


void LinkedList ::delete_end()
{
    Node *curr = head;
    if (curr != NULL)
    {
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        
        Node *delNode = curr->next;
        curr->next = NULL;
        delete delNode;
    }
    
    else {
        cout<<"List is empty!" << endl;
    }
}

// delete at the first node...
void LinkedList :: delte_head() {
    Node *curr = head;
    if(curr != NULL)  {
        head = curr->next;
        delete curr;
    }

    else  {
        cout<<"Lis is empty!" << endl;
    }
}

void LinkedList :: delete_position(int pos) {
    Node *curr = head;
    if(curr != NULL) {
         if(pos == 1) {
        head = head->next;
        //return head->value;
    }

    Node *curr = head;
    int i=1; 
    while(i<pos-1) {
        curr = curr->next;
        i++;
    }

    curr->next = curr->next->next;
    }
    
    else  {
        cout<<"List is empty!" << endl;
    }
}

// insert at beginning...
void LinkedList :: insert_first(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) 
         head = newNode;
    
    else {
        newNode->next = head;
        head = newNode;
    }
}

// insert at last node... 
void LinkedList :: insert_end(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) 
        head = newNode;

    else {
        Node *curr = head;
        while(curr->next != NULL) {
            curr =  curr->next;
        }
        curr->next = newNode;
    }
}


int LinkedList :: get_length() {
    Node *curr = head;
    int count = 0;
    while(curr != NULL) {
        curr = curr->next;
        count++;
    }
    
    return count;
}

// find the mid...
int LinkedList :: find_mid() {
    Node *curr = head, *curr_mid = head;
    int count = 0;
    while(curr != NULL) {
        curr = curr->next;
        count++;
    }

    int mid = count/2;
    for(int i=1; i<=mid; i++) 
        curr_mid = curr_mid->next;
    
    return curr_mid->value;

}
 
// check is null ...
bool LinkedList :: is_empty()  {
    return (head == NULL);
}

// print list is...
void LinkedList :: print_list() {
    if(is_empty()) 
        cout<<"List is empty!" << endl;
    
    else {
        Node *curr = head;
        while(curr != NULL)  {
            cout<< curr->value <<"->";
            curr = curr->next;
        }
        cout <<"NULL";
    }
    cout<< endl;
}


int main()
{ 
    LinkedList ll = LinkedList();
    ll.insert_first(1);
    ll.insert_first(40);
     ll.insert_first(10);
    // ll.insert_first(10);
    // ll.print_list();
    // ll.insert_end(3);
    // ll.insert_end(2);
    // ll.insert_end(9);
    ll.print_list();
    // cout<<"List length: " << ll.get_length() << endl;
    // cout<<"Mid of the list: "<< ll.find_mid() << endl;
    // ll.delete_position(1); 
    // ll.print_list();
    // ll.delte_head();
    // ll.print_list();
    // ll.print_list();
    // ll.delte_head();
    // ll.print_list();
    //  ll.delte_head();
    // ll.print_list();
    // ll.delete_end();
    // ll.print_list();
      cout<<"List length: " << ll.get_length() << endl;
    //   ll.delete_position(1);
    //   ll.print_list();

    // cout<<"Even pos node: ";
    // ll.print_even_nodes();
    // cout <<"Odd pos node: ";
    // ll.print_odd_nodes();
    // cout<<"Even sum: " <<ll.even_sum() << endl;
    // cout<<"Odd sum: " << ll.odd_sum() <<endl;
    // cout<<"Total odd value: " << ll.count_odd() << endl;
    // cout<<"Total even value: " << ll.count_even() << endl;
    // // bool ans = ll.search_value(20);
    // // (ans==true) ? cout<< "Found.\n" : cout <<"Not found!\n";
    
    // ll.show_odd();
    // ll.show_even();
    

    // bool ans = ll.is_palindrome();
    // (ans) ? cout<<"Yes" << endl : cout<< "No" << endl;

    ll.revese_list(); 

    return 0;
   
}


 