/* #include<bits/stdc++.h>
using namespace std;

class Node {
    // struct Node {
    //     int value;
    //     Node *next;
    //     Node(int data) {
    //         value = data;
    //         next = NULL;
    //     }
    // };
    int value;
    Node *next;
    Node(int data) {
        value = data;
        next = NULL;
    }
    Node *head;

    public:
        Node() {
            head = NULL;
        }
        void print_list();
        void insertAtBeginnig(int data);
        void insertAtEnd(int data);
        
};


void Node ::insertAtBeginnig(int data) {
    Node *newNode = new Node(data);
    if(head == NULL) 
        head = newNode;
    else {
        newNode->next = head;
        head = newNode;
    }
        
}


void Node :: insertAtEnd(int data) {
    Node *newNode = new Node(data);
    if(head == NULL) 
        head = newNode;
    else {
        
        Node* curr = head;  
        while(curr->next != NULL)  
            curr = curr->next;
        curr->next = newNode;
         
    }
}


// print the list...
void Node :: print_list() {
    if(head == NULL) 
        cout<< "List is empty!" << endl;
    else {
        Node *curr = head;
        while(curr != NULL) {
            cout<<curr->value <<"->";
            curr = curr->next;
        }
        cout<< "NULL" << endl;
    }
}

int main()
{
    //  Node *head = new Node();
    // Node *first = new Node();
    // Node *second = new Node();
    // Node *third = new Node(); 

    // head->value = 1;
    // first->value = 3;
    // second->value = 5;
    // third->value = 7;

    // head->next = first;
    // first->next = second;
    // second->next = third;
    // third->next = NULL;

    // print_list(head);
 
    Node ll = Node();
    ll.insertAtBeginnig(3);
    ll.insertAtBeginnig(5);
    ll.insertAtEnd(1);
    ll.insertAtEnd(100);
    ll.insertAtEnd(200);
    ll.print_list();

 
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class LinkedList {
    struct Node {
        int value;
        Node *next;
        Node(int data) {
            value = data;
            next = NULL;
        }
    };
    Node* head;

    public:
        LinkedList() {
             head = NULL;
        }

        void insert_Beginnig(int data);
        void insert_End(int data);
        void print_list();

};  

// add at the beginnig node...
void LinkedList :: insert_Beginnig(int data)  {
    Node *newNode = new Node(data);
    if(head == NULL) 
        head = newNode;
    else {
        newNode->next = head;
        head = newNode;
    }
}

// add the end node...
void LinkedList :: insert_End(int data) {
    Node *newNode = new Node (data);
    if(head == NULL) 
        head = newNode;

    else {
        Node * curr = head;
        while(curr->next != NULL) 
            curr = curr->next;
        curr->next = newNode;
    }

}

void LinkedList :: print_list() {
    if(head == NULL) 
        cout<<"List is empty!";
    else {
        Node *curr = head;
        while(curr != NULL) {
            cout << curr->value <<"->";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);
    LinkedList ll = LinkedList();
    ll.insert_End(13);
    ll.insert_Beginnig(100);
    ll.insert_End(15);
    ll.insert_End(17);
    ll.insert_Beginnig(-1);
    ll.print_list();
 
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

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
        LinkedList(){
            this->head = NULL;
        }
        
        bool is_empty();
        void print_list();
        void insertFrist(int data);
        void insertLast(int data);
        void insertKthPosition(int k, int data);
        void reverseList();
        int findMid();

};

//find mid point in the list...
int LinkedList ::  findMid() {
    Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->value;
}


// find the mid point in the list...
// int LinkedList ::  findMid() {
//     int count = 0;
//     Node *curr = head, *mid_curr=head;
//     while(curr != NULL) {
//         curr = curr->next;
//         count++;
//     }

//     int mid = count/2;
//     for(int i=1; i<=mid; i++) 
//         mid_curr = mid_curr->next;
    
//     return mid_curr->value;
// }


// int LinkedList :: findMid() {
//     Node *curr = head, *mid_curr = head;
//     int count = 0;
//     while(curr != NULL) {
//         curr = curr->next;
//         count++;
//     }

//     int mid = count/2;
//     for(int i=1; i<=mid; i++) 
//         mid_curr = mid_curr->next;
    
//     return mid_curr->value;
// } 
 
 

// Reverse the list iterative...
void LinkedList :: reverseList() {
    Node * prev = NULL, *curr = head, *next = NULL;
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}


void LinkedList :: insertFrist(int data) {
     Node *newNode = new Node(data);
    if(head == NULL) 
        head = newNode;
    else {
        newNode->next = head;
        head = newNode;
    }
    
}


void LinkedList :: insertLast(int data) {
    Node *newNode = new Node(data);
    if(head == NULL) 
        head = newNode;
    else {
        Node *curr =  head;
        while(curr->next != NULL) 
           curr = curr->next;
        curr->next = newNode;
        
    }
}


void LinkedList :: insertKthPosition(int k, int data) {
    
    if(k < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    Node *newNode = new Node(data);
    if(k==0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    else {
        Node *curr = head;
        while(curr->next != NULL && --k) 
            curr = curr->next;
        if(k==0) {
            newNode->next = curr->next;
            curr->next = newNode;
        }
        else 
            cout<<"Position does not exit!"<< endl;
    }
}
 

bool LinkedList :: is_empty() {
    return head == NULL;
}

void LinkedList :: print_list() {
    if(head == NULL) 
        cout<<"List is empty!";
    else {
        Node *curr = head;
        while(curr != NULL) {
            cout << curr->value <<"->";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
}


int main()
{

    LinkedList ll = LinkedList();
    ll.insertFrist(1);
    ll.insertFrist(3);
    ll.insertLast(5);
    ll.insertLast(7);
    ll.insertLast(9);
    ll.insertLast(100);
    // ll.insertFrist(2);
    // ll.insertFrist(-1);
    // ll.insertLast(100);
    // ll.insertLast(50);
    // ll.insertKthPosition(2, 66);
    // ll.insertKthPosition(10, 100);
    ll.print_list();

    // ll.reverseList();
    // ll.print_list();
    
    int ans = ll.findMid();
    cout<<"Mid point: " << ans << endl;

    return 0;
}

  */
 /* 
 #include<bits/stdc++.h>
using namespace std;

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
            head = NULL;
        }
        
        bool is_empty();
        void insert_First(int data);
        void insert_last(int data);
        void reverse_list();
        int get_length();
        void insert_positon(int pos, int value);
        void delete_first();
        void deleter_End();
        void print_oddNodes();
        void print_evenNode();
        void print_lsit();
        void deletion_position(int pos);
        bool search_element(int val);
        void move();
        Node *findmid();
};


Node *LinkedList :: findmid() {
    Node *slow = head, *fast = head;
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void LinkedList :: move() {
    if(!head) 
        cout<< head->value;
    
    Node *odd = head, *odd_head = head;
    Node *even = head->next, *even_head = head->next;

    while(even && even->next) {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
       
    } 
    odd->next = even_head;

    odd = head;
    while(odd) {
        cout<< odd->value <<"->";
        odd = odd->next;
    }

    cout<<"NULL" << endl;
}

// void LinkedList :: move() {
//     if(!head) 
//        cout << head->value;
    
//     Node *end = head;
//     int  count = 0;
//     while(end->next) {
//         end = end->next; 
//         count++;
//     }

//     count = count&1 ? (count/2)+1 : count/2;
//     Node *curr = head;
//     while(count--) {
//         end->next = curr->next;
//         curr->next = curr->next->next;
//         end->next->next = NULL;
//         curr = curr->next;
//         end = end->next;
//     }

//     curr = head;
//     while(curr) {
//         cout<< curr->value << "->";
//         curr = curr->next;
//     }

//     cout<< "NULL" << endl;
   
// }

// search the value from linkedlist...
bool LinkedList :: search_element(int val) {
    Node *curr = head;
    while(curr != NULL) {
        if(curr->value == val)
            return true;
        curr = curr->next;
    }

    return false;
}

void LinkedList :: deletion_position(int pos) {
    Node *curr = head;
    int i=1;
    while(i<pos-1)  {
        curr = curr->next;
        i++;
    }
    Node *delNode = curr->next;
    curr->next = delNode->next;
    delete delNode;
}
 

// print even positions node...
void LinkedList :: print_evenNode() {
    int ans = 0;
    Node *curr = head;
    do{
        if(ans&1) 
            cout<<curr->value << "->";
        ans++;
        curr = curr->next;
    } while(curr != NULL);

    cout<< "NULL" << endl;
}

// print even position node...
void LinkedList :: print_oddNodes() {
    int ans=0;
    Node *curr = head;
    do{
        if(!(ans&1))
            cout<<curr->value << "->";
        ans++;
        curr = curr->next;

    }while(curr != NULL);
    cout<<"NULL" << endl;
}
 
// check head is null...
bool LinkedList ::  is_empty() {
    return (head == NULL);
}

void LinkedList :: delete_first() {
    Node *curr = head;
    if(curr != NULL) {
        head = curr->next;
        delete curr;
    }
      
    else    
        cout<< "List is empty!" << endl;
}


// delete at end node..
void LinkedList :: deleter_End() {
   Node *curr = head;
   if(curr != NULL && curr->next != NULL)  {
    while(curr->next->next != NULL)
        curr = curr->next;

    Node *delNode = curr->next;
    curr->next = NULL;
    delete  delNode;
    
   }
    
    else {
        if(curr == NULL) 
            cout<<"List is empty!" << endl;
        else    
            deleter_End();
    }
}
    

// insert value at positions...
void LinkedList :: insert_positon(int pos, int value)  {
    int i=0; 
    Node *curr = head;
    while(i < pos-1) {
        curr = curr->next;
        i++;
    }
      
    Node *newNode = new Node(value);
    newNode->next = curr->next;
    curr->next = newNode;
}

// insert at first node...
void LinkedList :: insert_First(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) 
        head = newNode;

    else {
        newNode->next =  head;
        head = newNode;
    }
} 

// insert at End node...
void LinkedList :: insert_last(int data) {
    Node *newNode = new Node(data);
    if(is_empty()) 
        head = newNode;
    
    else {
        Node *curr = head;
        while(curr->next != NULL) 
            curr = curr->next;
        curr->next = newNode;
    }
    
}

// Reverse the list...
void LinkedList :: reverse_list() {
    Node *prev = NULL, *curr = head, *next = NULL;
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

// get length of the list...
int LinkedList :: get_length() {
    Node *curr = head;
    int count=0;
    while(curr != NULL) {
        curr = curr->next;
        count++;
    }

    return count;
}

// show the list...
void LinkedList :: print_lsit() {
    
    if(is_empty()) 
        cout << "List is empty!"<< endl;
    else {
        Node *curr = head;
        while(curr != NULL) {
            cout<< curr->value <<"->";
            curr = curr->next;
        }
        cout<< "NULL";
    }
    cout<< endl;
} 
   
int main()
{   
    LinkedList ll  = LinkedList();
     ll.insert_First(1);
      ll.insert_last(3);
      ll.insert_last(10);
      ll.insert_last(15);
      ll.insert_last(4);
      ll.insert_last(11);
      ll.insert_last(13);
      ll.print_lsit();
    //   ll.print_oddNodes();
    //   ll.print_evenNode();
    //   ll.move();

    //   bool ans = ll.search_element(15);
    // (ans == true) ? cout<<"Yes" : cout<<"No" << endl;

    // ll.deletion_position(3);
    // ll.print_lsit();

      
    // ll.insert_last(5);
    // ll.print_lsit();
    // ll.deleter_End();
    // ll.print_lsit();


    // ll.insert_First(1);
    // ll.insert_First(3);
    // ll.insert_First(5);
    // ll.insert_last(10);
    // ll.insert_last(30);
    // ll.insert_last(50);
    // ll.print_lsit();
    
    // ll.insert_last(3);
    // ll.insert_last(11);
    // ll.print_lsit();

    //ll.reverse_list();
    //ll.print_lsit();
    // cout <<"LinkedList Lenght: "<< ll.get_length() << endl;
    // ll.insert_positon(3, 100);
    // ll.insert_positon(6, 300);
    // ll.print_lsit();
    // cout <<"LinkedList Lenght: "<< ll.get_length() << endl;
    // ll.delete_first();
    // ll.print_lsit();
    // cout <<"LinkedList Lenght: "<< ll.get_length() << endl;
    //   ll.delete_first();
    // ll.print_lsit();
    // cout <<"LinkedList Lenght: "<< ll.get_length() << endl;

    // ll.deleter_End();
    // ll.print_lsit();
    // cout <<"LinkedList Lenght: "<< ll.get_length() << endl;
    // ll.deleter_End();
    // ll.print_lsit();
    // cout <<"LinkedList Lenght: "<< ll.get_length() << endl;
    


    return 0;
}   */



/* 

 #include<bits/stdc++.h>
using namespace std;

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
    public: 
       
        bool is_empty(Node* &head);
        void insert_last(Node* &head, int data);
        Node *reverse_list(Node* &head);
        bool search_element(Node* &head, int val);
        void print_lsit(Node* &head);
        void move(Node* &head);
        Node *findmid(Node* &head);
        bool is_palindrome(Node* &head);
};


bool LinkedList :: is_palindrome(Node* &head) {
    if(head == nullptr)     
        return true;
    
    Node *mid = findmid(head);
    Node *temp = mid->next;
    Node *last = reverse_list(head);

    Node *curr = head;
    while(last != nullptr) {
        if(last->value != curr->value) 
            return false;
        
        last = last->next;
        curr = curr->next;
    }

    return true;

}

Node *LinkedList :: findmid(Node* &head) {
    Node *slow = head, *fast = head;
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void LinkedList :: move(Node* &head) {
    if(!head) 
        cout<< head->value;
    
    Node *odd = head, *odd_head = head;
    Node *even = head->next, *even_head = head->next;

    while(even && even->next) {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
       
    } 
    odd->next = even_head;

    odd = head;
    while(odd) {
        cout<< odd->value <<"->";
        odd = odd->next;
    }

    cout<<"NULL" << endl;
}
 

// insert at End node...
void LinkedList :: insert_last(Node* &head, int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) 
        head = newNode;
    
    else {
        Node *curr = head;
        while(curr->next != NULL) 
            curr = curr->next;
        curr->next = newNode;
    }
    
}

// Reverse the list...
Node *LinkedList :: reverse_list(Node* &head) {
    if(head == nullptr || head->next == nullptr)
        return head;
    
    Node *newhead = reverse_list(head->next);
    Node *headNext = head->next;
    head->next = head;
    head->next = NULL;
    return newhead;
}
 

// show the list...
void LinkedList :: print_lsit(Node* &head) {
    
    if(head == nullptr) 
        cout << "List is empty!"<< endl;
    else {
        Node *curr = head;
        while(curr != NULL) {
            cout<< curr->value <<"->";
            curr = curr->next;
        }
        cout<< "NULL";
    }
    cout<< endl;
} 
   
int main()
{      

    Node *head = NULL;
    LinkedList ll  = LinkedList();
    ll.insert_last(head, 1);
    ll.insert_last(head, 5);
    ll.insert_last(head, 6);
    ll.insert_last(head, 5);
    ll.insert_last(head, 1);

    ll.print_lsit(head);    
    (ll.is_palindrome(head)) ? cout<<"Yes\n" : cout<<"No\n";

    return 0;
}   */


/* 
#include<bits/stdc++.h>
using namespace  std;
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


class LinkedList {
    public:

        void insert_at_end(Node* &head, int data);
        void insert_at_positions(Node* &head, int data, int pos);
        void delete_at_head(Node* &head);
        void print_list(Node* &head);
};


void LinkedList :: insert_at_end(Node* &head, int data) {
      Node *newNode = new Node(data);
    if(head ==nullptr) 
        head = newNode;
    
    else {
        Node *curr = head;
        while(curr->next != NULL) 
            curr = curr->next;
        curr->next = newNode;
    }
}

//i) To insert 40 in between 33 and 47.
void LinkedList :: insert_at_positions(Node* &head, int data, int pos) {
    int i=0; 
    Node *curr = head;
    while(i < pos-1) {
        curr = curr->next;
        i++;
    }
      
    Node *newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;
}

//ii) To delete 14 from the list.
void LinkedList :: delete_at_head(Node* &head) {
     Node *curr = head;
    if(curr != NULL) {
        head = curr->next;
        delete curr;
    }
      
    else    
        cout<< "List is empty!" << endl;
}
 

void LinkedList :: print_list(Node* &head) {
    Node *curr = head;  
    while(curr != NULL) {
        cout << curr->value <<"->";
        curr =curr->next;
    }

    cout <<"NULL" << endl;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *head = NULL;
    LinkedList ll = LinkedList();
    ll.insert_at_end(head, 14);
    ll.insert_at_end(head, 25);
    ll.insert_at_end(head, 33);
    ll.insert_at_end(head, 47);
    ll.print_list(head);

    //	i) To insert 40 in between 33 and 47.
    ll.insert_at_positions(head, 40, 3);
    ll.print_list(head);

    //ii) To delete 14 from the list.
    ll.delete_at_head(head);
    ll.print_list(head);



    return 0;
}
 */

  
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int vlaue;
        Node *next;
        Node(int data) {
            this->vlaue = data;
            this->next = nullptr;
        }
};


class LinkedList {
    public:
        void add_end(Node* &head, int data);
        Node *reverse(Node* &head);
        Node *findMid(Node* &head);
        bool isPalindrome(Node *head);
        void print_list(Node* &head);
        Node *rev(Node* &head);
        Node *recurcive_rev(Node* head);
};

Node *LinkedList :: recurcive_rev(Node *head) {
    if(head == nullptr or head->next == nullptr)     
        return head;

    Node *newHead = recurcive_rev(head->next);
    head->next->next = head;
    head->next = nullptr;
  
    return newHead;

}

bool LinkedList :: isPalindrome(Node *head) {
    if(head == nullptr or head->next == nullptr)
        return true;

    Node *slow = head, *fast = head;
    while(fast and fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *last = rev(slow->next);
    Node *first = head;
    while(first and last) {
        if(first->vlaue != last->vlaue) 
            return false;
        first = first->next;
        last = last->next;
    }
    return true;
}

Node *LinkedList :: rev(Node* &head) {
    Node *prev= NULL, *curr = head;
    while(curr) {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

void  LinkedList :: add_end(Node* &head, int data) {
    Node *newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }

    Node *curr = head;
    while(curr->next != nullptr) 
        curr = curr->next;
    
    curr->next = newNode;
}


// reverse the list...
Node *LinkedList :: reverse(Node* &head) {
    vector<int> data;
    for(Node *curr=head; curr!=NULL; curr=curr->next) 
        data.push_back(curr->vlaue);
    
    for(Node *curr=head; curr!=NULL; curr=curr->next) {
        curr->vlaue = data.back();
        data.pop_back();
    }

    return head;
}
 

                                                     
// find the mid...
Node *LinkedList :: findMid(Node* &head) {
    Node *slow = head, *fast = head;
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void LinkedList :: print_list(Node* &head) {    
    Node *curr = head;
    while(curr != nullptr)  {
        cout<< curr->vlaue <<"->";
        curr = curr->next;
    }

    cout<< "NULL" << endl;
}

int main()
{

    Node *head = NULL;
    LinkedList ll = LinkedList();
    ll.add_end(head, 1);
    ll.add_end(head, 55);
    ll.add_end(head, 50);
    ll.add_end(head, 11);
    ll.print_list(head);

    // bool ans = ll.isPalindrome(head);
    // (ans==true) ? cout<<"Yes\n" : cout<<"No\n";

    Node *ans = ll.recurcive_rev(head);
    ll.print_list(ans);
    

    return 0;
}
   

 
 
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

class LinkedList {
    public:
        void insert_first(Node* &head, int data);
        void print_list(Node* &head);
        Node *reveser_recursiv(Node* &head);
        Node *reveseKthNode(Node* &head, int k);
};

Node *LinkedList :: reveseKthNode(Node* &head, int k) {
     
     if(!head || !head->next || k==1) 
        return head;
    
    // step->2...reverse k node
    Node *next = nullptr, *curr = head, *prev = nullptr;
    int count = 0;
    while(curr != nullptr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next) 
        head->next = reveseKthNode(next, k);
    
    return prev;
}

Node *LinkedList :: reveser_recursiv(Node* &head) {
    if(head == nullptr or head->next == nullptr)    
        return head;
    
    Node *newHead = reveser_recursiv(head->next);
    head ->next ->next = head;
    head->next = NULL;

    return newHead;
}

void LinkedList :: insert_first(Node* &head, int data) {
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

void LinkedList :: print_list(Node* &head) {
    Node *curr = head;
    while(curr != nullptr) {
        cout <<curr->value <<"->";  
        curr = curr->next;
    }

    cout <<"NULL" << endl;
}

int main()
{

    Node *head = NULL;
    LinkedList ll = LinkedList();
    // ll.insert_first(head, 5);
    // ll.insert_first(head, 3);
    // ll.insert_first(head, 20);
    // ll.insert_first(head, 11);
    // ll.insert_first(head, 10);
    // ll.insert_first(head, 4);
    // ll.print_list(head);

    int n; cin>>n; 
    for(int i=0; i<n; i++) {
        int d; cin>> d;
        ll.insert_first(head, d);
    }

    int k; cin>>k;

    Node *ans = ll.reveseKthNode(head,k);
    ll.print_list(ans);

    // Node *ans = ll.reveser_recursiv(head);
    // ll.print_list(ans);
 

}
   


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
  


    return 0;
}
 
 