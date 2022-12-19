/* #include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define size 100

void input(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++)  {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }
}

void print_arr(int arr[size][size], int n, int m )  {
      for(int i=0; i<n; i++)  {
        for(int j=0; j<m; j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}

void major_diagonal(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i==j) 
                cout << arr[i][j] <<" ";
        }
    }
    cout<< endl;
}

void minor_diagonal(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if(i+j == n-1) 
                cout << arr[i][j] <<" ";
        }
    }
    cout<< endl;
}

int main()
{
    int arr[size][size], n,m;
    cout <<"Enter the row and col: ";
    cin>> n >> m;

    input(arr, n, m);
    puts("");

    cout<< "Mojor diagonal: ";    
    major_diagonal(arr,n,m);
    cout<< "Minor diagonal: ";
    minor_diagonal(arr,n,m);

  
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define size 100

void input(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++)  {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }
}

int major_diagonal_sum(int arr[][size], int n, int m) {
    int major_sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i == j) 
                major_sum += arr[i][j];
        }
    }
    return major_sum;
}

int minor_diagonal_sum(int arr[][size], int n, int m) {
    int minor_sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i+j == n-1) 
                minor_sum += arr[i][j];
        }
    }

    return minor_sum;
}

void major_diagoanl(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i == j) 
                cout<< arr[i][j] <<" ";
        }
    }
    cout << endl;
}

void minor_diagonal(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if(i+j == n-1) 
                cout << arr[i][j] <<" ";
        }
    }
    cout<< endl;
}

int diagonal_difference(int arr[][size], int n, int m) {
    int major = 0, minor = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i == j) 
                major += arr[i][j];
            if(i+j == n-1)
                minor += arr[i][j];
        }
    }
    return abs(major-minor);
}

int main()
{
    int arr[size][size], n,m;
    cout <<"Enter the row and col: ";
    cin>> n >> m;

    input(arr, n, m);
    puts("");

    cout<< "Mojor diagonal: ";    
    major_diagoanl(arr,n,m);
    cout<< "Minor diagonal: ";
    minor_diagonal(arr,n,m);
    
    cout<<"Major sum :" << major_diagonal_sum(arr,n,m) << endl;
    cout<<"Minor sum: " << minor_diagonal_sum(arr,n,m)<< endl;

    cout<<"Difference: " << diagonal_difference(arr,n,m) << endl;
  
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

void swap_diagonal(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) 
        swap(arr[i][i], arr[i][n-i-1]);
}

void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            cout<< arr[i][j] <<" ";
        }

        cout<< endl;
    }
}

int main()
{
 
    return 0;
} */


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

        void print_list();
        int get_length();
        void intsert_at_head(int data);
        void insert_at_end(int data);
        int find_mid();
        void swapData(Node *frist, Node *second);
        void insertion_sort();
        void reverse_list();
        void delete_at_head();
        void delete_at_end();
        void delete_mid();


};


void LinkedList :: delete_mid() {
    if(head == nullptr) 
        cout<< "there is no node" << endl;
     if(head->next == nullptr) {
        free(head);
        head = NULL;
    }
    
    Node *slow = head, *fast = head, *prev;
    while(fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    prev->next = slow->next;
    free(slow);
}

void LinkedList :: delete_at_end() {
    
    if(head == nullptr)     
        cout <<"There is no node" << endl;
    else if(head->next == nullptr) {
       free(head);
       head = NULL;
    }

    Node *curr = head;
    while(curr->next != nullptr) 
        curr = curr->next;
    
    curr->prev->next = NULL;
    free(curr);
    curr = NULL;

}
void LinkedList :: delete_at_head() {
   
    if(head == nullptr) 
        cout<<"there is no node!"<< endl;
    else if(head->next == nullptr) {
        head = NULL;
        free(head);
    }

    else {
        Node *delNode = head;
        head = head->next;
        head->prev = NULL;
        free(delNode);
    }
}

void LinkedList :: swapData(Node *frist, Node *second) {
    int temp = frist->value;
    frist->value = second->value;
    second->value = temp;
}

// sort the list...
void LinkedList :: insertion_sort() {
    Node *front = head, *back = NULL;
    while(front != nullptr) {
        back = front->next;

        while(back != nullptr && back->prev != nullptr && back->value < back->prev->value) {
             swapData(back, back->prev);
             back = back->prev;
        }
           
        front = front->next;
    
    }
}

void LinkedList :: reverse_list() {
    Node *curr = head;
    while(curr != nullptr) {
        swap(curr->next, curr->prev);
        if(curr->prev != nullptr) 
            head = curr->prev;
        curr = curr->prev;
    }
}

int LinkedList :: find_mid() {
    Node *slow = head, *fast = head;
    if(head != nullptr) {
         while(fast!=nullptr && fast->next!=nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    }
   
    return slow->value;
}
 

void LinkedList :: intsert_at_head(int data) { 
    Node *newNode = new Node(data);
    newNode->next = head;
    if(head != nullptr) 
        head->prev = newNode;
    head = newNode;
}


void LinkedList :: insert_at_end(int data) {
    Node *newNode  = new Node(data);
    if(head == nullptr) {
        head = newNode;
        return;
    }

    Node *curr = head;
    while(curr->next !=nullptr) 
        curr = curr->next;
    curr->next = newNode;
    newNode->prev = curr;

}


int LinkedList ::  get_length() {
    Node *curr = head;
    int count = 0;
    while(curr != nullptr) {
        count++;
        curr = curr->next;
    }

    return count;
}

void LinkedList :: print_list() {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->value <<"->";
        curr = curr->next;
    }
     
    cout << "NULL" << endl;
}

int main()
{
     LinkedList ll = LinkedList();
    ll.intsert_at_head(1);
    ll.insert_at_end(5);
    ll.insert_at_end(10);
    ll.insert_at_end(20);
    ll.intsert_at_head(100);
    ll.insert_at_end(11);
     ll.print_list();
    cout<<"Size: "<< ll.get_length() << endl;

    // ll.print_list();
    // cout<<"Mid of list: "<< ll.find_mid() << endl;

    // ll.insertion_sort();
    // ll.print_list();

    // int n; cin>> n;
    // long long int temp;
    // for(int i=0; i<n; i++) {
    //     cin>> temp;
    //     ll.insert_at_end(temp);
    // }

    // ll.insertion_sort();
    // ll.reverse_list();
    // ll.print_list();
    // cout << "mid of list: "<< ll.find_mid() << endl;
    // ll.delete_at_head();
    // ll.delete_at_head();
    // ll.print_list();
    // ll.delete_at_end();
    // ll.delete_at_end();
    // ll.print_list();
    // cout<<"Size:" << ll.get_length() <<endl;

    
     cout << "mid of list: "<< ll.find_mid() << endl;
    ll.delete_mid();
    ll.print_list();
 
    return 0;
}

 */

/* 

9
2 18 24 3 5 7 9 6 12 

*/


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int


int main()
{    



    return 0;
}


