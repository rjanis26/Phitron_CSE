
// void KthLargest(int arr[], int size, int k) {
//     if(size < 2) {
//         cout << "Invalid size of array";
//     }

//     sort(arr, arr+size);
//     for(int i = 0; i < k; i++) {
//         cout << arr[size-1-i] << " ";
//     }
// }

// void KthSamllest(int arr[], int size, int k) {
//     sort(arr, arr+size);
//     for(int i = 0; i < k; i++) {
//         cout << arr[i] << " ";
//     }
// }

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void intput_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cin>> arr[i];
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++)  
        cout<< arr[i] <<" ";
    cout << endl;
}

int kth_smallest(int arr[], int n, int k) {
    sort(arr, arr+n);
    return arr[k-1];
}

  int kth_largest(int arr[], int n, int k) {
     sort(arr, arr+n, greater<int>());
     return arr[k-1];
    
}

int main()
{

    int n, k;
    cin>> n >> k;
    int arr[n];

    intput_arr(arr,n);
    print_arr(arr,n);
   
    cout<< kth_smallest(arr,n, k)<<" " << kth_largest(arr,n, k) << endl;
 
    return 0;
} */


// find prime with given range...
/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

bool is_prime(int n) { 
    if(n==1 or n==0) 
        return false;
    if(n <= 3) return true;
    if(n%2 == 0) 
        return false;
    for(int i=3; i*i <= n; i+=2) {
        if(n%i == 0) return false;
    }
    
    return true;
    
}

int main()
{
    int n; cin>>n;
    for(int i=1; i<=n; i++) {
        if(is_prime(i)) 
            cout<< i <<" ";
    }
     
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void solve() {
    int n; cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int pre_sum[n+1];
    pre_sum[0] = arr[0];

    for(int i=1; i<n; i++)
        pre_sum[i] = pre_sum[i-1] + arr[i];
    
    int q; cin>> q;
    while(q--) {
        int l, r; cin>> l>> r;
        if(l==0) 
           cout<< pre_sum[r] << endl;
        else 
            cout<< pre_sum[r] - pre_sum[l-1] << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);

    solve();
 
    return 0;
}


 */
 /* 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    
    int pre[n+1];
    pre[0]=ar[0];           // arr[i] = 1  2  3  4  5  6 

    for(int i=1;i<n;i++)      // pre = 0  1  3  7  12  18 
    {
        pre[i]=pre[i-1]+ar[i];
    }

    for(int i=0; i<n; i++) 
        cout<< pre[i] << " ";
    cout<< endl;
 
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)cout<<pre[r]<<endl;
        else cout<<pre[r-1] - pre[l]<<endl;
    }
}  */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int search(int nums[], int l, int r, int target) {
    int ans = -1;
   
    while (l <= r) {
      const int m = l + (r - l) / 2;
      if (nums[m] == target)
        return m;
      if (nums[l] <= nums[m]) {  // nums[l..m] are sorted
        if (nums[l] <= target && target < nums[m])
          r = m - 1;
        else
          l = m + 1;
      } else {  // nums[m..n - 1] are sorted
        if (nums[m] < target && target <= nums[r])
          l = m + 1;
        else
          r = m - 1;
      }
    }

    return ans;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(0);

    int n, x; cin>> n >> x;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
 
    int index = search(arr,0, n-1, x);
    if(index != -1) 
        cout<< index+1 << endl;
    else 
        cout<< index << endl;


    return 0;
} */
/* 

#include<bits/stdc++.h>
using namespace std;

void find_distinct(int arr[], int n) {
    int count[n+1] = {0};
    for(int i=0; i<n; i++) 
        count[arr[i]]++;
    
    for(int i=0; i<n; i++) {
        if(count[arr[i]] == 0) 
            cout<< arr[i] <<" ";
    }

}

int main()
{

    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++)  
        cin>> arr[i];

    find_distinct(arr,n);
    

    return 0;
} */

/* 
// C++ program to print all unique numbers in a given array using sorting
#include<bits/stdc++.h> 
using namespace std; 
void unique_number(int arr[], int n) 
{ 
  // Sorting the given arrayclear

  sort(arr, arr + n); 
    
  // Finding unique numbers
  for (int i=0; i<n; i++) 
    { 
    if(arr[i]==arr[i+1])
    {
      continue;
    }
    else
    {
          cout<< arr[i]  << " ";
    }
    }
} 
  
// Driver program
int main() 
{ 
    int n;
   
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"\nUnique numbers in given array are: ";
    unique_number(arr, n); 
    return 0; 
} */


#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int x) {
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x) 
            return mid;
        (arr[mid] < x) ? r = mid-1 : l = mid+1;
    }
    return -1;
}   

int main()
{
     
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    sort(arr, arr+n, greater<int>());
    int target; cin>> target;
    
    int index = binary_search(arr, 0, n-1, target);
    (index != -1) ? cout<<"Found at index:" << index << endl : cout<< "Not found!"<< endl;
    return 0;
}


