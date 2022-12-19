
// // Answer to the Question...01
 
//   #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// class Node {
//     public:
//         int data;
//         Node *left, *rigt;
//         Node(int data) {
//             this->data = data;
//             this->left = this->rigt = nullptr;
//         }
// };


// // Inorder Traversal...
// void inorderTraversal(Node *root) {
//     if(root== nullptr) return;
//     inorderTraversal(root->left);
//     cout<<root->data <<" ";
//     inorderTraversal(root->rigt);
// }

// // preorder Traversal..
// void preOrderTreversal(Node *root) {
//     if(root == nullptr)  return;
//     cout << root->data <<" ";
//     preOrderTreversal(root->left);
//     preOrderTreversal(root->rigt);

// }


// // post ordertraversal....
// void postorderTraversal(Node *root) {
//     if(root == nullptr) return ;

//     postorderTraversal(root->left);
//     postorderTraversal(root->rigt);
//     cout<< root->data << " ";
// }

// int findHeight(Node *root) {
//     return (root == nullptr) ? 0 : max(findHeight(root->left), findHeight(root->rigt))+1;
// }


// void printLevelOrder(Node* root)
// {
//     // Base Case
//     if (root == NULL)
//         return;
 
//     // Create an empty queue for level order traversal
//     queue<Node*> q;
 
//     // Enqueue Root and initialize height
//     q.push(root);
 
//     while (q.empty() == false) {
//         // Print front of queue and remove it from queue
//         Node* node = q.front();
//         cout << node->data << " ";
//         q.pop();
 
//         /* Enqueue left child */
//         if (node->left != NULL)
//             q.push(node->left);
 
//         /*Enqueue right child */
//         if (node->right != NULL)
//             q.push(node->right);
// }
 

// int main()
// {
//     ios_base ::sync_with_stdio(false);
//     cin.tie(0); cout.tie(0);

//     Node *root = nullptr;
//     root = new Node(15);
//     root->left = new Node(11);
//     root->rigt = new Node(26);

//     root->left->left = new Node(8);
//     root->left->rigt = new Node(12);
//     root->left->rigt->rigt = new Node(14);

//     root->left->left->left = new Node(6);
//     root->left->left->rigt = new Node(9);

//     root->rigt->left = new Node(20);
//     root->rigt->rigt = new Node (30);

//     root->rigt->rigt->rigt = new Node(35);

//     //inorderTraversal(root);
//     //preOrderTreversal(root);
//     postorderTraversal(root);
    
//     cout << endl << "Height of the Tree: "<< findHeight(root) << endl;

//     return 0;
// }

 


/// Answer to the Question 07
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

class BST {
    public:
        Node *insertNode(Node *root, const int data);
        Node *deleteNode(Node *root, int value);
        Node *inorderSuccesor(Node *root);
        void inorderTraversal(Node *root);
};


void BST :: inorderTraversal(Node *root) {
    if(root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data <<" ";
    inorderTraversal(root->right);
}

// insert Node...
Node *BST :: insertNode(Node *root, const int data) {
    if(root == nullptr) return new Node(data);
    (data < root->data) ? root->left = insertNode(root->left, data) : root->right = insertNode(root->right, data);
    return root;
}

Node *BST :: inorderSuccesor(Node *root) {
    Node *curr = root;
    while(curr->left != nullptr) 
        curr = curr->left;
    return curr;
}
 

Node *BST :: deleteNode(Node *root, int value) {

    if(value < root->data) 
        root->left = deleteNode(root->left, value);
    else if(value > root->data) 
        root->right = deleteNode(root->right, value);
    
    else {
        if(root->left == nullptr) {
                Node *temp = root->right; free(root);
                return temp;
            }
            else if(root->right == nullptr) {
                Node *temp = root->left; free(root);
                return temp;
            }

            else {
                Node *temp = inorderSuccesor(root->right);
                root->data = temp->data;
                root->right = deleteNode(root->right, temp->data);
            }
    }

    return root;
}


int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Node *root = nullptr;
    BST bst = BST();

    int n; cin>> n;
    for(int i=0; i<n; i++) {
        int d; cin>> d;
        root = bst.insertNode(root, d);
    }

    bst.inorderTraversal(root);
    cout << endl;
    //int value; cin>> value;
    root = bst.deleteNode(root, 12);
    bst.inorderTraversal(root);
    cout << endl;

    root = bst.insertNode(root, 11);
    bst.inorderTraversal(root);
    cout << endl;

    root = bst.deleteNode(root, 6);
    bst.inorderTraversal(root);
 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// using min heap...
void heapify(int arr[], int n, int i) {
    int smallest = i, left = 2*i+1, right = 2*i+2;
    if(left < n and arr[left] < arr[smallest]) 
        smallest = left;
    if(right < n and arr[right] < arr[smallest]) 
        smallest = right;
    
    if(smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr,n, smallest);
    }
}

void heap_sort(int arr[], int n) {
    for(int i=n/2-i;  i>= 0; i--) 
        heapify(arr,n,i);
    
    for(int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr,i,0);
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout << endl;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    heap_sort(arr,n);
    print_arr(arr,n);
    return 0;
}

 */


// 9
 
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
 */


/* 
#Answer To The Question No_7: 



// Reverse Doubly Linked List...
void LinkedList :: reverse_list() {
    Node *curr=head;
    while(curr != NULL) {
        swap(curr->next, curr->prev);
        if(curr->prev != NULL) 
            head = curr->prev;
             
        curr = curr->prev;

    }
}
 






#Answer To The Question No_8: 

Given, 
x = last of my birthday + 5 = 6 + 5 = 11
y = x + 3 = 11 + 3 = 14
z = y + x = 14 + 11 = 25

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

class Stack {
    Node *top;
    public: 
        Stack() {
            this->top == nullptr;
        }

        void push(int data);
        int pop();
        void print_stack();

};

void Stack :: push(int data) {
    Node *newNode = new Node(data);
    if(top == NULL) 
        cout<<"Stack is empty!"<< endl;
    else {
        newNode->next = top;
        top = newNode;
    }
}


int Stack :: pop() {
    int ans = -1;
    if(top == nullptr) 
        cout<< "Stack is empty!" << endl;
    
    else {
        Node *delNode = top;
        top = top->next;
        delete(delNode);
    }

    return ans;
}


void Stack  :: print_stack() {
    Node *curr = top;
    while(curr != nullptr) {
        cout<< curr->value<<" ";
        curr = curr->next;
    }

    cout<< endl;
}

int main() 
{

    Stack st = Stack();
    st.push(25); //push(x+y) = 11 + 14= 25
    st.push(39); //push(y+z) = 14 + 25 = 39

    st.print_stack();
    st.pop();
    st.pop();

    st.print_stack();
    st.push(350); //push(y*z) = 14 * 25 = 350
    st.push(154);//push(x*y) = 11 * 14 = 154
    
    st.print_stack();
    st.pop();
    st.pop();
    
    st.print_stack();
	
    return 0;
 }














#Answer To The Question No_10: 
 Circular Queue:
 The four basic operations performed by a circular queue. (Please note: N = maximum size of the queue, F = front pointer, R = Rear pointer, Q = Circular Queue)

 1.front(): This function returns the front element, that is the element pointed by the front pointer, from the circular queue. Return Q[F]

 2.rear(): This function returns the rear element, that is the element pointed by the rear pointer, from the circular queue. Return Q[R]

 3.Enqueue Operation:
 Step 1: Check Overflow Condition. Overflow will arise when the circular queue is full and we try to insert a new element. This happens when the position/index where the new element is to be inserted [(Rear + 1)th position] is the start position, ie., the position with the first element pointed by the front pointer. We cannot insert an element in such a condition and exit with an overflow message.

If (Rear + 1) % N == Front Print " Overflow " and Exit

Step 2: Check if Q is Empty and Set Rear If Front == -1 and Rear == -1 Set Front = Rear = 0 Else Set Rear = (Rear + 1) % N

Step 3: Insert the new element Set Q[Rear] = Element_to_Insert

Step 4: Return Exit

And final operation is :
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
So, here is the checking process  Underflow and overflow in a circular queue  by using an array.


 

#Answer To The Question No_11: 
    
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
}   
 */


// answer to the question 10:
/* 
Advantage of heap sort:
The Heap sort algorithm is widely used because of its efficiency. Heap sort works by transforming the list of items to be sorted into a heap data structure, a binary tree with heap properties. In a binary tree, every node has, at most, two descendants. A node possesses the heap property when none of its descendants have greater values than itself. The largest element of the heap is removed and inserted into the sorted list. The remaining sub-tree is transformed into a heap again. This process is repeated until no elements remain. Successive removals of the root node after each rebuilding of the heap produces the final sorted list of items.

Advantages:

Efficiency

The algorithm is efficient. Performance is optimal. This implies that no other sorting algorithms can perform better in comparison.

Memory usage is less

Memory usage is minimal because apart from what is necessary to hold the initial list of items to be sorted, it needs no additional memory space to work. In contrast, the Merge sort algorithm requires more memory space. Similarly, the Quick sort algorithm requires more stack space due to its recursive nature.

Consistency

The Heap sort algorithm exhibits consistent performance. This means it performs equally well in the best, average and worst cases. Because of its guaranteed performance, it is particularly suitable to use in systems with critical response time.

However, with pros their are some cons as well



#Time and Space Complexity:
 heapsort has:

Worst case time complexity of O(n(log(n)) [all elements in the list are distinct]
Best case time complexity of O(n) [all elements are same]
Average case time complexity of O(n(log(n))
Space complexity of O(1)


If you have a small range of values (eg. the alphabet), count sort will let you count, I mean sort, them at the theoretical max speed – O(n). Let’s say you want to sort the digits of a number – take an array with length of 10 and every time you encounter a “3” incremented “array[3]” by one, counting the number of times you encountered the digit “3”. Read it all back and voila – you’ve got a sorted list! You can’t get any faster since you have to read each element at least once to sort it, and, well, that’s basically all you’re doing in this algorithm. However, this small-range-of-values scenario is rare and often it would take up an unrealistic or even unbounded amount of space – for instance you couldn’t really sort long words with it (or it would need a “spot” for every possible letter combination!)

#Time and Space Complexity:
counting sort has:

Time complexity: O(N+K)
Space Complexity: O(K)
Worst case: when data is skewed and range is large
Best Case: When all elements are same
Average Case: O(N+K) (N & K equally dominant)
where:

N is the number of elements
K is the range of elements (K = largest element - smallest element)
So here we conclude that:

Counting sort algorithm work best if k is not significantly larger than n. In this case the complexity becomes close to O(n) or linear.
Also larger the range of elements in the given array, larger is the space complexity.


Finally we can say that 
HeapSort is more efficient than Counting Sort


 */


// #Answer To The Question No_5: 
// Given,
// p = 12
// q = p + 4 = 12 + 4 = 16
// r = p + q = 12 + 16 = 28
// s = r - 3 = 28 - 3 = 25
// t = r + s = 28 + 25 = 53


// a) The value of head −> next −>next-> value = 28
// b) The value of last −> prev −> next->value =  53
// c) The value of  temp −> prev −> prev −> prev= NULL
// d) The value of temp −> next−> prev −>prev->value =  16
// e) The value of  last −> prev −> prev −>next-> value =  25



// zizagtraversal(Node* root):  
//     if(root== nullptr) return
//     // then declear 2 stack...
//     STACK<Node*> currentLevel
//     STACK<Node*> nextLevel

//     currentLevel.push(root)
//     bool LefttoRight = true

//     WHILE(!currentLevel.empty())
//         Node *temp = currentLevel.toP()
//         currentLevel.pop()


//             IF(LefttoRight) 
//                      IF(temp->left) 
//                         nextLevel.push(temp->left)
//                      IF(temp->right) 
//                         nextLevel.push(temp->right)
                     
//             ELSE 
//                 IF (temp->right) 
//                     nextlevel.push(temp->right) 
//                 IF (temp->left) 
//                     nextlevel.push(temp->left)


//            IF (currentlevel.empty()) { 
//             lefttoright = !lefttoright; 
//             SWAP(currentlevel, nextlevel); 
                    
 


 
// Given array:
//  10 40 20 8 99 X 15 17 	
// Here, last digit of my birthday= 0
// so, x = 0+1 = 1;

//  Final array: 10 40 20 8 99 1 15 17 	
 
//  For i = [lenght(arr)/2] to 1, i--
//  max_heapify(arr, i);



// For i = [lenght(arr)/2] to 1, i--
//  min_heap(arr, i);
 

// #include <iostream>
// using namespace std;
// void max_heap(int *a, int m, int n) {
//    int j, t;
//    t = a[m];
//    j = 2 * m;
//    while (j <= n) {
//       if (j < n && a[j+1] > a[j])
//          j = j + 1;
//       if (t > a[j])
//          break;
//       else if (t <= a[j]) {
//          a[j / 2] = a[j];
//          j = 2 * j;
//       }
//    }
//    a[j/2] = t;
//    return;
// }
// void build_maxheap(int *a,int n) {
//    int k;
//    for(k = n/2; k >= 1; k--) {
//       max_heap(a,k,n);
//    }
// }
// int main() {
//    int n, i;
//    cout<<"enter no of elements of array\n";
//    cin>>n;
//   int arr[n];
//    for (i = 1; i <= n; i++) {
      
//       cin>>arr[i];
//    }
//    build_maxheap(arr,n);
//    cout<<"Max Heap\n";
//    for (i = 1; i <= n; i++) {
//       cout<<arr[i]<<endl;
//    }


// }


// #include <iostream>
// #include <conio.h>
// using namespace std;
// void min_heap(int *a, int m, int n){
//    int j, t;
//    t= a[m];
//    j = 2 * m;
//    while (j <= n) {
//       if (j < n && a[j+1] < a[j])
//          j = j + 1;
//       if (t < a[j])
//          break;
//       else if (t >= a[j]) {
//          a[j/2] = a[j];
//          j = 2 * j;
//       }
//    }
//    a[j/2] = t;
//    return;
// }
// void build_minheap(int *a, int n) {
//    int k;
//    for(k = n/2; k >= 1; k--) {
//       min_heap(a,k,n);
//    }
// }
// int main() {
//    int n, i;
//    cout<<"enter no of elements of array\n";
//    cin>>n;
//    int a[n];
//    for (i = 1; i <= n; i++) {
      
//       cin>>a[i];
//    }
//    build_minheap(a, n);
//    cout<<"Min Heap\n";
//    for (i = 1; i <= n; i++) {
//       cout<<a[i]<<endl;
//    }
//    getch();
// }


// All the steap of heap sort:
// The Heap sort algorithm to arrange a list of elements in ascending order is performed using following steps...

// Step 1 - Construct a Binary Tree with given list of Elements.
// Step 2 - Transform the Binary Tree into Min Heap.
// Step 3 - Delete the root element from Min Heap using Heapify method.
// Step 4 - Put the deleted element into the Sorted list.
// Step 5 - Repeat the same until Min Heap becomes empty.
// Step 6 - Display the sorted list.

// For decending order we have to crate min heap:
// 1. Build a min heap from the input data. 
// 2.At this point, the smallest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of tree. 
// 3.Repeat above steps while size of heap is greater than 1.



  

// Handle duplicates in Binary Search Tree:
// In a Binary Search Tree (BST), all keys in left subtree of a key must be smaller and all keys in right subtree must be greater. So a Binary Search Tree by definition has distinct keys and duplicates in binary search tree are not allowed.

// Solution is to allow same keys with count. For example consider insertion of keys 3, 6, 7, 8, 8, 8, 10, 12, 12 in an empty Binary Search Tree

//   8(3)
//        /     \      
//     6(1)      10(1)
//   /    \        \
// 3(1)    7(1)     12(2)
// This count store requires changing the structure of Binary Search tree to

// class node
// {
//     int key;
//     int count;
//      node *left, *right;
// };

// Lets see for Insert

//  node* insert(node* node, int key)
// {
//     if (node == NULL) return newNode(key);
 
//     if (key == node->key)
//     {
//        (node->count)++;
//         return node;
//     }
 
//     if (key < node->key)
//         node->left  = insert(node->left, key);
//     else
//         node->right = insert(node->right, key);
 
//     return node;
// }
// Now Based upon Above code You can try to write code for “Search a value in BST with Duplicate” and Delete a node in BST with duplicate”.


// Solution 3:

// We can think of keeping same keys on left side (we could also choose right side) to support duplicates in Binary Search Tree. For example consider insertion of keys 3, 6, 7, 8, 8, 8, 10, 12, 12  in an empty Binary Search Tree

//               8
//           /       \
//         8         12
//       /           /     \
//     8           10      12
//   /
//  6   
// /  \
// 3  7
 


//  By row major order:
// If array is declared by a[m][n] where m is the number of rows while n is the number of columns, then address of an element a[i][j] of the array stored in row major order is calculated as,

// Given,
// loc(A[0][0])= (AE92F6)H 
// decimal A[0][0] = 11440886

// Address(a[i][j]) = Base_address + (i * n + j) * size   
// Given,
// array = A[15] [20]
// m = 15
// n = 20
// base = 11440886
// data type = 4 bytes.

// address of A[15] [20] = 11440886 + (0*20 + 0)*4 =  11440886 bytes.
// Answer= (AE92F6)16

// By Column major order:
// If array is declared by a[m][n] where m is the number of rows while n is the number of columns, then address of an element a[i][j] of the array stored in row major order is calculated as,

// Address(a[i][j]) = Base_address + ((j*m) +i)*size 
// A[50][100]

// address of arrA[50][100] = 11440886 + ((0 *50) + 0) *4 = 11440886 bytes.
// Answer = (AE92F6)16




 