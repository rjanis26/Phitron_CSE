
/* 
All the steps of Counting Sort:
step 1 : Finding max element from array.
arr: 7 2 9 2 7 4 5 1 max_vlaue = 9

step 2 : Initilazation of the counter/ freequence arrray.
  int free[max+1] = {0};
  memset(free, 0, sizeof(free)); // set all vlaue of 0.
    
step 3 : calculate the freequence.
 element  : 7 2 9 2 7 4 5 1
 Num_times: 7 -> has -> 2 times.
            2 -> has -> 2 times.
            9 -> has -> 1 times.
            4 -> has -> 1 times.
            5 -> has -> 1 times.
            1 -> has -> 1 times.
step 4 : Find the cumulative sum.
arr                    :   7   	2 	 9  	2   	7   	4   	5  	 1
cumulative sum : 7  	 9  	18 	20  	27  	31  	36  	37

step 5 : Final arry.... Backward Traversal of array.

for(int i=n-1; i>=0; i--) {
    ..........
}
 
 
 // Here is the code...
#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n) {

    int output[n+1],  mx=INT_MIN;

    for(int i=0; i<n; i++) 
        if(arr[i]> mx) 
            mx= arr[i];
        
    //memset(count, 0, sizeof(count));
    // for(int i=0; i<=mx; i++) 
    //     count[i] = 0;
    
    // dynamic allocation..
    //  int *count = new int[mx+1];
    // memset(count, 0, sizeof(int)*mx+1);

    int count[mx+1] = {0};

    for(int i=0; i<n; i++) 
        count[arr[i]]++;
    

    // accumulate sum...
    for(int i=1; i<=mx; i++) 
        count[i] += count[i-1];
    
    for(int i=n-1; i>=0; i--) {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i=0; i<n; i++) 
        arr[i] = output[i];

}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<<arr[i] <<" ";
    cout<< endl;
}

int main()
{

    int arr[] =  {2, 5, 2, 8, 1, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    count_sort(arr,n);
    print_arr(arr,n);



    return 0;
}



//  */
  
// All the step of Binary search algorithm:
// Step 1. Start with a sorted array(array must be sorted);
// Step 2. Find the middle element and divide it into two-part.
// Like: 
// int arrr[] = {1, 3, 5, 7, 9};
// int n= sizeof(arr)/sizeof(arr[0]);
// int value = 4;
// int l = 0, r= n-1;
// int const mid = l + (r-l)/2;

// Step 3. Compare the search value with the middle element if match found, then return the middle index. If not, then follow step 4 and step 5 accordingly.
//     if(arr[mid] == value)
//         return mid;
// Step 4. If the search value is greater than the middle, then select the right part of the array after division and follow step 2
//     if(arr[mid] < value) 
//         l = mid+1;
// Step 5. If the search value is lesser than the middle, then select the left part of the array after division and follow step 2
//     if(arr[mid] > value) 
//         r = mid-1;
// Step 6. When a match is found, then return the index of the element.
// Step 7. If no match is found, then return -1.


// Here is the Pseudocode for binary search:

// function binary_search(K, n, X) is
//     L = 0
//     R = n − 1
//     while L ≤ R do
//         m = round((L + R) / 2)
//         if K[m] < X then
//             L = m + 1
//         else if K[m] > X then
//             R = m − 1
//         else:
//             return m
//     return -1


// Binary search time complexity
// Worst-case performance O(log n)
// Best-case performance O(1)
// Average performance O(log n)
// Worst-case space complexity O(1)
 


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
   
int binary_search(int arr[], int n, int x) {
    int l=0, r=n-1, ans =-1;

    while(l <= r) {
        int const mid = l + (r-l)/2;
        if(arr[mid] == x) 
            return mid;
        else if(arr[mid] < x) 
             l = mid+1;
        else 
            r = mid-1;
    }

    return ans;
}

int main()
{   
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    sort(arr, arr+n);
    int value; cin>> value;
    int ans = binary_search(arr,n, value);

    if(ans != -1) 
        cout<<"Found at index: " << ans<< endl;
    else 
        cout<< "Not found!"<< endl;
  

    return 0;
} */


/* 
By row major order:
If array is declared by a[m][n] where m is the number of rows while n is the number of columns, then address of an element a[i][j] of the array stored in row major order is calculated as,

Address(a[i][j]) = Base_address + (i * n + j) * size   
Given,
array = arr[70][65]
m = 70
n = 65
base = 1230
data type = 4 bytes.

address of arr[3][18] = 1230 + (3*65 + 18)*4 =  2082 bytes.

By Column major order:
If array is declared by a[m][n] where m is the number of rows while n is the number of columns, then address of an element a[i][j] of the array stored in row major order is calculated as,

Address(a[i][j]) = Base_address + ((j*m) +i)*size 


address of arr[3][18] = 1230 + ((18 *70) + 3) *4 = 6282 bytes.
 */


 /* 
Given,
p = 12
q = p + 4 = 12 + 4 = 16
r = p + q = 12 + 16 = 28
s = r - 3 = 28 - 3 = 25
t = r + s = 28 + 25 = 53


a) The value of head −> next −>next-> value = 28
b) The value of last −> prev −> next->value =  53
c) The value of  temp −> prev −> prev −> prev= NULL
d) The value of temp −> next−> prev −>prev->value =  16
e) The value of  last −> prev −> prev −>next-> value =  25 */

// Given, 
// x = last of my birthday + 5 = 6 + 5 = 11
// y = x + 3 = 11 + 3 = 14
// z = y + x = 14 + 11 = 25


// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// class Node {
//     public: 
//         int value;
//         Node *next;
//         Node(int data) {
//             this->value = data;
//             this->next = NULL;
//         }
// };

// class Stack {
//     Node *top;
//     public: 
//         Stack() {
//             this->top == nullptr;
//         }

//         void push(int data);
//         int pop();
//         void print_stack();

// };

// void Stack :: push(int data) {
//     Node *newNode = new Node(data);
//     if(top == NULL) 
//         cout<<"Stack is empty!"<< endl;
//     else {
//         newNode->next = top;
//         top = newNode;
//     }
// }


// int Stack :: pop() {
//     int ans = -1;
//     if(top == nullptr) 
//         cout<< "Stack is empty!" << endl;
    
//     else {
//         Node *delNode = top;
//         top = top->next;
//         delete(delNode);
//     }

//     return ans;
// }


// void Stack  :: print_stack() {
//     Node *curr = top;
//     while(curr != nullptr) {
//         cout<< curr->value<<" ";
//         curr = curr->next;
//     }

//     cout<< endl;
// }

// int main() 
// {

//     Stack st = Stack();
//     st.push(25); //push(x+y) = 11 + 14= 25
//     st.push(39); //push(y+z) = 14 + 25 = 39

//     st.print_stack();
//     st.pop();
//     st.pop();

//     st.print_stack();
//     st.push(350); //push(y*z) = 14 * 25 = 350
//     st.push(154);//push(x*y) = 11 * 14 = 154
    
//     st.print_stack();
//     st.pop();
//     st.pop();
    
//     st.print_stack();
//   */

// Given, 
// x = last of my birthday + 5 = 6 + 5 = 11
// y = x + 3 = 11 + 3 = 14
// z = y + x = 14 + 11 = 25
// push(x+y) = 11 + 14= 25
// push(y+z) = 14 + 25 = 39
// pop()
// push(y*z) = 14 * 25 = 350
// push(x*y) = 11 * 14 = 154

// Push(x+y), Push(y+z), Pop(), Push(y*z), Push(x*y), Pop(), Pop()
//  */
 

//     return 0;
// }


 /* 
 Given, 
 x=9
y=x+3 = 9 + 3 = 12
z=x+y = 9 + 12 = 21
and p=y+z = 12 + 21 = 33
 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 3
int arr[size], front = 0, rear = -1, total_item =0;

bool isEmpty() {
    if(total_item == 0) 
        return true;
    else 
        return false;
}

void Enqueue(int value) {
    if(isEmpty()) {
        cout<< "Queue is empty!" << endl;
        return;
    }

    rear = (rear + 1) % size;
    arr[rear] = value;
    total_item++;
}

int Dequeue() {
    if(isEmpty()) {
         cout<<"Queue is empty!" << endl;
         return -1;
    }
       
    
    int front_item = arr[front];
    arr[front_item] = -1;
    front = (front + 1) % size;
    total_item--;

    return front_item;
}

void print_queue() {
    cout<< "Queue elements: ";
    for(int it : arr)   
        cout<< it <<" ";
    cout << endl;
}

int main()
{
  Enqueue(21); //// z=x+y = 9 + 12 = 21
    Enqueue(33); //p=y+z = 12 + 21 = 33
    print_queue();
    Dequeue();

    print_queue();

    Enqueue(12);  //// z=x+y = 9 + 12 = 21
    Enqueue(21);   // z=x+y = 9 + 12 = 21

    print_queue();
 

    return 0;
}    */
 






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
    ll.insert_at_end(head, 1);
    ll.insert_at_end(head, 4);
    ll.insert_at_end(head, 10);
    ll.insert_at_end(head, 5);
    ll.insert_at_end(head, 30);

    ll.print_list(head);




    return 0;
} */


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

/* 
#include<bits/stdc++.h>
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


class CircularLinkedList {
    public:

        void insert_at_end(Node* &head, int data);
        void insert_at_positions(Node* &head, int data, int pos);
        void delete_at_head(Node* &head);
        void print_list(Node* &head);
};


void CircularLinkedList :: insert_at_end(Node* &head, int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) {
        head= newNode;
        newNode->next = head;
        return;
    }

    Node *curr = head;
    while(curr->next != head) {
        curr = curr->next;
    }

    newNode->next = head;
    curr->next = newNode;
}


void CircularLinkedList :: insert_at_positions(Node* &head, int data, int pos) {
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


// delete at head node....
void CircularLinkedList :: delete_at_head(Node* &head) {
    Node *curr = head;
    if(curr != nullptr) {
        Node *delNode = curr;
        while(curr->next != nullptr) 
            curr = curr->next;
        
        curr->next = delNode->next;
        head = delNode->next;
        delete delNode;
    }

    else 
        cout <<"List is empty!" << endl;
}

// display the circular list....
void CircularLinkedList :: print_list(Node* &head) {
    Node *curr = head;
    if(head == nullptr) {
        cout<< "The List is a Emtpy!"<< endl;
        return;
    }

        do {
        cout << curr->value;
        curr = curr->next;
        if(curr != head) 
            cout<<"->";
    }  while(curr != head);

    cout<< endl;
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

/* 
// Reverse Doubly Linkedlist...
void LinkedList :: reverse_list() {
    Node *curr=head;
    while(curr != NULL) {
        swap(curr->next, curr->prev);
        if(curr->prev != NULL) 
            head = curr->prev;
             
        curr = curr->prev;

    }
}
  */


 
 Node * delete_all_(Node* &head)  
        // find max from list...
        int max = INT_MIN;
        int frq[max+1] = {0};

        Node *dummy = new Node(D);  
        Node *curr = dummy;
        int prefix_sum = 0;
        WHILE(curr)  
            prefix_sum += curr.value;
            if(freq[prefix_sum])  
                curr = freq[prefix_sum]->next;
                int p = prefix_sum + curr.value;

                WHILE(p != prefix_sum)  
                    curr= curr->next;
                    p += curr.value;
                 

                freq[prefix_sum]->next = curr->next;
             

            else  
                freq[prefix_sum] = curr;
                curr = curr->next;
             
        return dummy->next;



 

// Answer to the question: 10;
  
 Circular Queue:
 The four basic operations performed by a circular queue. 
here,
 N = maximum size of the queue, F = front pointer, R = Rear pointer, Q = Circular Queue

 1.front(): This function returns the front element, that is the element pointed by the front pointer, from the circular queue. Return Q[F]
 2.rear(): This function returns the rear element, that is the element pointed by the rear pointer, from the circular queue. Return Q[R]

 3.Enqueue Operation:
 Step 1: Check Overflow Condition. Overflow will arise when the circular queue is full and we try to insert a new element. This happens when the position/index where the new element is to be inserted [(Rear + 1)th position] is the start position, ie., the position with the first element pointed by the front pointer. We cannot insert an element in such a condition and exit with an overflow message.

If (Rear + 1) % N == Front Print " Overflow " and Exit

Step 2: Check if Q is Empty and Set Rear If Front == -1 and Rear == -1 Set Front = Rear = 0 Else Set Rear = (Rear + 1) % N

Step 3: Insert the new element Set Q[Rear] = Element_to_Insert

Step 4: Return Exit


3.Dequeue Operation
Let’s see the steps for Dequeue Operation [ Deletion from Q]

Step 1: Check Underflow Condition
If Front == -1 Print " Underflow " and Exit

Step 2: Retrieve the front element
Set Deleted_Element = Q[Front]

Step 3: Check if Q has only 1 element left
If Front == REAR Set Front = Rear = -1 Else Set Front =( Front + 1) % N

Step 4: Return the Deleted Element
Return Deleted_Element and Exit
  




#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void solve() {
    int n; cin>> n;
    int arr[n], brr[n];

    for(int i=0; i<n; i++) 
        cin >> arr[i];

    for(int i=0; i<n; i++) {
        cin >> brr[i];
    }


    // calculate prefix sum of earns...
    int pre_arr[n+1];
    pre_arr[0] = arr[0];
    for(int i=1; i<n; i++) 
        pre_arr[i] = pre_arr[i-1]+ arr[i];

    // calculate prefix sum of expense..
    int pre_brr[n+1];
    pre_brr[0] = brr[0];
    for(int i=1; i<n; i++) 
        pre_brr[i] = pre_brr[i-1] + brr[i];


    int ans;
    int q; cin>> q;
    while(q--) {
        int l; cin>> l;
        ans = pre_arr[l] - pre_brr[l];
          //cout << ans << endl;
       
        (ans > 0) ? cout<< 1 <<" " : cout << 0 << " ";
    } 
    cout << endl;
    
 }
 

int main() 
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>> t;
    while(t--) {
        solve();
    }

 
    return 0;
}



