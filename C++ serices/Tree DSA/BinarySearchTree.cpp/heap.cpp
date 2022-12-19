 

/* https://medium.com/techie-delight/heap-practice-problems-and-interview-questions-b678ff3b694c */

/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i+1, right = 2*i+2;

    if(left < n && arr[left] > arr[largest]) 
        largest = left;
    if(right < n && arr[right] > arr[largest]) 
        largest = right;
    
    if(largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

   

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] <<" ";
    cout<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    // heapify ...
    int nonLeafStart = (n/2)-1;
    for(int i=nonLeafStart; i>=0; i--) 
        heapify(arr,n, i);
    
    print_arr(arr,n);
 

    return 0;
}
 */

/* 
9
2 10 1 5 4 8 3 8 7

 */


/* 


================
heap sort in C++
================
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<<arr[i] << " ";
    cout<< endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i+1, right = 2*i+2;

    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest = right;
    
    if(largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr,n, largest);
    }
}

void heap_sort(int arr[], int n) {
    for(int i=n/2-1; i>=0; i--)
        heapify(arr, n, i);
    
    for(int i=n-1; i>=0; i--) {
         swap(arr[0], arr[i]);
        heapify(arr, i,0);
    } 
       
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    heap_sort(arr,n);
    print_arr(arr,n);

    return 0;
} */


 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void heapify(int arr[], int n, int i) {
    int largest = i, left = 2*i+1, right = 2*i+2;

    if(left < n && arr[left] < arr[largest]) 
        largest = left;
    if(right < n && arr[right] < arr[largest])
         largest = right;

    if(largest != i)  {
        swap(arr[i], arr[largest]);
        heapify(arr,n , largest);
    }
}

void heapSort(int arr[], int n) {
    for(int i=n/2-1; i>=0; i--)
        heapify(arr,n, i);
    
    for(int i=n-1; i>=0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr,i,0);
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] <<" ";
    cout<< endl;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    heapSort(arr,n);
    print_arr(arr,n);
 

    return 0;
}  




// =========================================
// Find kth largest and smallest element 
// using max heap...
/* // =========================================

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int findKthSmallest(vector<int> &arr, int k) {
    if(arr.size() < k)
        exit(-1);
    
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
    //priority_queue<int> pq(arr.begin(), arr.end());

    while(--k) 
        pq.pop();
    
    return pq.top();
}

void print_arr(vector<int> &arr) {
    for(const auto x : arr) 
        cout<< x <<" ";
    cout<< endl;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    
    int k; cin>>k;
    cout<<"Kth smallest: " << findKthSmallest(arr,k)<<endl;
    //print_arr(arr);

 

    return 0;
}
 */
 

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int kthSmallest(int arr[], int n, int k) {
    priority_queue<int> pq;
    for(int i=0; i<k; i++) 
        pq.push(arr[i]);
    
    for(int i=k; i<n; i++) {
        if(arr[i] < pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        }
           
    }

    return pq.top();
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    int k; cin>> k;
    cout<<"Kth Smallest: " << kthSmallest(arr,n, k)<< endl;
 
    return 0;
}
  

  */
 

   /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int kthLargest(vector<int> &arr, int k) {
    priority_queue<int> pq(arr.begin(), arr.end());
    for(int i=0; i<k-1; i++) 
        pq.pop();
    return pq.top();
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    int k; cin>> k;
    cout << "Kth largest: " << kthLargest(arr,k)<< endl;
 
    return 0;
}
  
 */

 /* 
// kth largest...
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int kthLargest(vector<int> &arr, int k) {
    if(arr.size() < k) 
        exit(-1);
    // priority_queue<int, vector<int>> pq(arr.begin(), arr.end());
    priority_queue<int, vector<int>> pq(less<int>(), arr);
    while(--k) 
        pq.pop();
    return pq.top();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int k; cin>>k;
    cout<<"Kth largest:" << kthLargest(arr,k) << endl;

 
    return 0;
}
 */
 

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(int arr[], int n){
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    

    sort(arr, arr+n);
    print_arr(arr, n);
    sort(arr, arr+n, less<int>());
    print_arr(arr,n);
    sort(arr, arr+n, less<int>());
    print_arr(arr, n);

 
    return 0;
} */

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int KthSamllest(vector<int> &arr, int k) {
    if(arr.size() < k) return -1;
    // nth_element is a STL built in function...
    //Time complexity O(n)...
    nth_element(arr.begin(), arr.begin()+k-1, arr.end());
    return arr[k-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    int k ; cin>> k;
    cout <<KthSamllest(arr, k) << endl;
 
    return 0;
}  
 */

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int kthLargest(vector<int> &arr, int k) { 
    if(arr.size() < k) return -1;

    
    nth_element(arr.begin(), arr.begin()+k-1, arr.end(), greater<int>());
    return arr[k-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    int k ; cin>> k;
    cout <<kthLargest(arr, k) << endl;


 
    return 0;
}  
 */


// ============================
// Heap in STL 
// =============================
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main()
{
    vector<int> arr = {20, 30, 40, 25};
    
    make_heap(arr.begin(), arr.end());

    cout << "Heap elements are:";
    for(int &x: arr) 
        cout<< x << " ";
    cout << endl;

    sort_heap(arr.begin(), arr.end());
    for(int &x : arr) 
        cout << x <<" ";
    cout << endl;


    return 0;
}
 */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int heapify(int arr[], int n, int i) {
    int largest = i, left = 2*i+1, right = 2*i+2;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    
 


    return 0;
}
 */






