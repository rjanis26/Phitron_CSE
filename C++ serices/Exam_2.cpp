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
        void print_lsit();
      
};

  

// check head is null...
bool LinkedList ::  is_empty() {
    return (head == NULL);
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
    ll.insert_First(3);
    ll.insert_First(5);
    ll.insert_last(10);
    ll.insert_last(30);
    ll.insert_last(50);
    ll.print_lsit();
    
    ll.insert_last(3);
    ll.insert_last(11);
    ll.print_lsit();

    ll.reverse_list();
    ll.print_lsit();
  

    return 0;
}  
    
 

// Question-1:
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define llu unsigned long long int
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define rrep(i,n) for(int i=n-1; i>=0; i--)

void input_arr(int arr[], int n) {
    rep(i,n)
        cin>> arr[i];
}

void print_arr(int arr[], int n) {
    rep(i,n)
        cout << arr[i] <<" ";
    cout << endl;
}

void bubble_sort(int arr[], int n)  {
    rep(i,n-1) {
        bool ans = false;
        cout<< "Step: " << i+1 <<endl;
        
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1])  {
                swap(arr[j], arr[j+1]);
                ans = true;
            }
            print_arr(arr,n);
        }
        cout << endl;
        if(!ans) 
            break;
    }
}

int main() 
{       
    int n; cin>>n;
    int arr[n+2];
    input_arr(arr,n);

    bubble_sort(arr,n);
    cout<<"sorted arr is :";
    print_arr(arr,n);


    return 0;
} */


// Question-4:
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define llu unsigned long long int
#define anisul  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define rrep(i,n) for(int i=n-1; i>=0; i--)

void input_arr(int arr[], int n) {
    rep(i,n) 
        cin>> arr[i];
}

void print_arr(int arr[], int n) {
    rep(i,n) 
        cout<< arr[i] <<" ";
    cout << endl;
}

void insertion_sort(int arr[], int n) {
     int value, hole;

    for(int i=1; i<n; i++) {
        cout<< "Step: "<< i << endl;
        value = arr[i];
        hole = i;

        while(hole > 0 and arr[hole-1] > value) {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
        print_arr(arr,n);
    }
    cout<< endl;
}

int main()
{
    int n; cin>> n;
    int arr[n+2];
    input_arr(arr,n);
    insertion_sort(arr,n);
    cout<<"Sorted array: ";
    print_arr(arr,n);

 
    return 0;
} */


// Question-5:
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define anisul  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define rrep(i,n) for(int i=n-1; i>=0; i--)

void input_arr(int arr[], int n) {
    rep(i,n)
        cin >> arr[i];
}

void print_arr(int arr[], int n) {
    rep(i,n)    
        cout<< arr[i] << " ";
    cout<< endl;
}

int Binary_search(int arr[], int n, int x) {
    int l = 0, r = n-1, ans = -1;
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x) 
            return mid;
        else if(arr[mid] < x) 
            l = mid + 1;
        else 
            r = mid - 1;
    }

    return ans;
}


int main()
{   
    anisul;
    int n; cin>> n;
    int arr[n+2];
    input_arr(arr,n);

    sort(arr, arr+n);
    //int x; cin>> x;
    int value = 6;
    int ans = Binary_search(arr,n,value);
    if(ans != -1)  
        cout << "Found at index: " << ans << endl;
    else 
        cout << "Not found!" << endl;

    
    return 0;
} */
 

a. value of head = 5
b.? value of = 1020
c. the value of Head->Next->Next->Value = 1
d. the value of Sum following pseudocode snippets 
= 5 + 7 + 1 // as while(temp->next != 1020) so , address of 1020 -> vlue ->14 = NULL
= 13
now, sum -= temp->vlaue;
then final ans will be = 13 - 14 = -1  


//Here is the code...
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

        void insert__last(int data);
        int add();
        void find();
};


// insert at End node...
void LinkedList :: insert__last(int data) {
    Node *newNode = new Node(data);
    if(head == NULL) 
        head = newNode;
    
    else {
        Node *curr = head;
        while(curr->next != NULL) // 1020
            curr = curr->next;
        curr->next = newNode;
    }
    
}

void LinkedList :: find() {
    Node *curr = head;
    cout<< curr->next->next->value;
}


int LinkedList :: add() {
    int sum =0;
    Node *temp = head;
    while(temp->next != NULL) {
        sum += temp->value;
        temp = temp->next;
    }
     return sum -= temp->value;
    //return sum;

}


int main() 
{   

    LinkedList ll = LinkedList();
    ll.insert__last(5);
    ll.insert__last(7);
    ll.insert__last(1);
    ll.insert__last(14);
    cout<< ll.add() << endl;
    ll.find();
 
    return 0;
}  




By row major order:
If array is declared by a[m][n] where m is the number of rows while n is the number of columns, then address of an element a[i][j] of the array stored in row major order is calculated as,

Address(a[i][j]) = Base_address + (i * n + j) * size   
Given,
array = arr[50][45]
m = 50
n = 45
base = 760
data type = 4 bytes.

address arr[6][13] = 760 + (6*45 + 13)*4 =  1892 bytes.

By Column major order
If array is declared by a[m][n] where m is the number of rows while n is the number of columns, then address of an element a[i][j] of the array stored in row major order is calculated as,

Address(a[i][j]) = Base_address + ((j*m) +i)*size 


address arr[6][13] = 760 + ((13 *50) + 6) *4 = 3384 bytes. */

/* 

#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int l, int r) {
    while( l <= r) {
        const int mid = l + (r-l)/2;
        return arr[mid];
    }
   return  -1;
}

int main()
{

    int arr[] =  {1, 2, 9, 11, 17, 24, 26, 31, 32, 45};
    int n= sizeof(arr)/sizeof(arr[0]);

    int ans = search(arr,0, n-1);
    cout<< ans << endl;

    
int n=10;
int l=0, r = n-1;
const int mid = l + (r-l)/2;
mid = 0 + 9/2 = 4 =
arr[mid] = 17;





    return 0;
}
 */
 
/* 
There are some limitations of bubble sort appraoch:
1. Very expensive,  O(n2) in worst case and average case.
2. It does more element assignments than its counterpart, insertion sort.

The main disadvantage of the bubble sort is that is not the fastest sort. It has a worst case and average complexity both O(n2), where n is the number of items being sorted. Other sorting algorithms have worst case complexity of O(n log n). So, for small sets, it is fine and easy to use, but the more items being sorted, the less efficient it is compared to alternative methods of sorting.


Bubble Sort is that the sorting algorithm is extremely slow. This sorting algorithm is fine to use for small lists, however becomes extremely slow when sorting a larger list. Another reason that it is not recommended to implement is due to the fact that there are much more efficient algorithms that run at O(n) time and even O(nlogn) time.

Just like insertion sort, bubble sort is an in-place, easy to implement sorting algorithm that is extremely easy for people to understand and implement themselves. However there are much more efficient sorting algorithms when dealing with larger lists such as quicksort, mergesort, etc..

 */
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
arr            : 7  2  9  2   7   4   5   1
cumulative sum : 7  9  18 20  27  31  36  37
step 5 : Final arry.... Backward Traversal of array.

for(int i=n-1; i>=0; i--) {
    ..........
}
 
 we start scanning from backward in the last step of Counting Sort Beacuyse,  We could just as easily have done a forward scan, but the advantage of a backwards scan is that it sorts elements stably. That is, if you have multiple elements with the same key, they'll all appear in the same relative order in the output sequence as they would in the input sequence. */