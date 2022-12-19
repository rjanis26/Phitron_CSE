// bianry search...
 /* https://medium.com/techie-delight/binary-search-practice-problems-4c856cd9f26c */


/*
#include<bits/stdc++.h>
using namespace std;

 int Binary_search(int arr[], int n, int x) {
    int l=0, r=n-1, ans=-1;
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid]  < x)
            l =mid+1;
        else
            r =mid-1;;
    }

    return ans;

}

int main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    sort(arr, arr+n);
    int x; cin>> x;
    int ans = Binary_search(arr,n, x);

    if(ans!=-1)
       cout <<"found at index:" << ans << endl;
    else

       cout<< "Not found!" << endl;

    return 0;
}

 */

// reverse sorted arr...
// arr must be sorted...
// complexity O(logn)...
/*
#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[], int n, int x)   {
    int l=0, r=n-1, ans=-1;
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            r= mid-1;
        else
            l = mid+1;
    }

    return ans;
}

int main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    int x; cin>> x;
    int ans = Binary_search(arr,n,x);
    if(ans != -1)
        cout<<"Found at index: " << ans<< endl;
    else cout<<"Not found!"<< endl;

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int arr[100001];

int first_occurance(int arr[], int n, int x) {

    int ans = -1;
    int l=0, r=n-1;
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x) {
            ans = mid;
            r = mid-1;
        }
        else if(arr[mid] < x) 
            l = mid+1;
        else 
            r = mid-1;
    }

    return ans;
}


int last_occu(int arr[], int n, int x) {
    int l=0, r=n-1, ans= -1;

    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x)   {
            ans = mid;
            l = mid+1;
        }
        else if(arr[mid] < x) 
            l = mid+1;
        else 
            r = mid-1;
    }
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n; 
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    sort(arr, arr+n);

    int x; cin>> x;
    int ans = first_occurance(arr, n, x);
    cout << "First occu: " << ans << endl;

    int last = last_occu(arr, n, x);
    cout <<"Last occu: " << last << endl;
    
    return 0;
}

*/ 

 
/* 
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int l, int r) {
    int ans=0;
    while(l <= r) {
        const int mid = l + (r-l) /2;
        if(mid < r and arr[mid] > arr[mid+1]) {
            ans = mid+1;
            break;
        }
        else if(mid > l and arr[mid] < arr[mid-1]) {
            ans = mid;
            break;
        }

        if(arr[r] > arr[mid]) 
            r = mid-1;
        else 
            l = mid+1;
    }

    return ans;
}
 

int main()
{

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int ans = solve(arr, 0, n-1);
    cout<< ans << endl;
 

    return 0;
} */
  /* 
#include<bits/stdc++.h>
using namespace std;

int solution(int arr[], int l, int r) {
    
    int ans=0; 
    while(l <= r) {
        int mid = l +(r-l)/2;
       
        if(arr[mid] < arr[mid+1] && arr[mid] < arr[mid-1]) {
            ans = mid;
            break;
        }
        else if(arr[r] > arr[mid]) 
            r = mid-1;
        else 
            l = mid+1;
    }
    return ans;
}

int search(int arr[], int l, int r, int x) {
    int ans=-1;
    while(l <= r ) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x)  {
            ans = mid;
            r = mid-1;
        }
        else if(arr[mid] < x) 
            l = mid+1;
        else 
            r = mid-1;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n; 
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>>arr[i];

    int index = solution(arr,0,n-1);
    
    int x; cin>> x;
    int ans1 = search(arr, 0, index-1, x);
    int ans2 = search(arr,index, n-1, x);

    cout<< max(ans1, ans2) << endl;

    return 0;
}  

 */
/* #include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

int countrot(int ar[],int l,int r)
{
	int res=0;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(mid<r && ar[mid+1]<ar[mid])
		{
			res=mid+1;
			break;
		}
		else if(mid>l && ar[mid]<ar[mid-1])
		{
			res=mid;
			break;
		}
		else if(ar[r]>ar[mid])r=mid-1;
		else l=mid+1;
	}
	return res;
}

int binsearch(int ar[],int l,int r,int x)
{
    int res=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            r=mid-1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ind=countrot(ar,0,n-1);
    int fnd;
    cin>>fnd;
    int ans1=binsearch(ar,0,ind-1,fnd);
    int ans2=binsearch(ar,ind,n-1,fnd);
    cout<<max(ans1,ans2)<<nl;
    return 0;
}

 */
 

/* 
    int search(vector<int>& nums, int target) {
            int l = 0;
    int r = nums.size() - 1;

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

    return -1;
  */
/* 
#include<bits/stdc++.h>
using namespace std;
 
int search (int arr[], int l, int r, int x) {
    
    int ans=-1;
    while(l <= r) {
        const int mid = l + (r-l)/2;

        if(arr[mid] == x) 
            return mid;
        if(arr[l] <= arr[mid]) {
            if(arr[l] < x && x < arr[mid]) 
                r= mid-1;
            else    
                l =mid+1;
        }
        else {
            if(arr[mid] < x && x <= arr[r])

        }
    }

} 

// int search(int arr[], int n, int x) {
//     for(int i=0; i<n; i++) {
//         if(arr[i] == x) 
//             return i;
//     }
//     return -1;
        
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int x; cin>>x ;
    
    int ans = search(arr,n, x);

    cout<< ans << endl;
 


    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

int find_floor(int arr[], int l, int r, int x) {

    int ans = -1;
    while(l <= r) {
        const int mid = l + (r-l)/2;

        if(arr[mid] == x) {
            ans= x;
            break;
        }

        else if(arr[mid] < x) {
            ans = arr[mid];
            l = mid+1;
        }
        else 
            r = mid-1;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    int x; cin>> x;

    int ans = find_floor(arr, 0, n-1, x);
    cout<< ans << endl;
  
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

 
int first_occu(int arr[], int l, int r, int x) {
    int ans=-1;

    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x) {
            ans= mid;
            r = mid-1;
        }
        else if(arr[mid] < x) 
            l = mid+1;
        else   
            r = mid-1;
            
    }
    return ans;
}

int last_occu(int arr[], int l, int r, int x) {
    int ans = -1;

    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x) {
            ans = mid;
           l = mid+1;
        }
        else if(arr[mid] < x) 
            l =mid+1;
        else 
            r = mid-1;
    }

    return ans;
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    int x; cin>>x;
    int ans = first_occu(arr, 0, n-1, x);
    int last = last_occu(arr, 0, n-1, x);
    if(ans != -1)
        cout<< ans << endl;
    else 
        cout<< "Not found!" << endl;
    
    if(last != -1) 
        cout<<last << endl;
    else 
        cout<< "Not foudn!" << endl;


    return 0;
}  
 */

/* 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

 
int first_occu(int arr[], int l, int r, int x) {
    int ans=-1;

    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x) {
            ans= mid;
            r = mid-1;
        }
        else if(arr[mid] < x) 
            l = mid+1;
        else   
            r = mid-1;
            
    }
    return ans;
}

int last_occu(int arr[], int l, int r, int x) {
    int ans = -1;

    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == x) {
            ans = mid;
           l = mid+1;
        }
        else if(arr[mid] < x) 
            l =mid+1;
        else 
            r = mid-1;
    }

    return ans;
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    int x; cin>>x;
    int first = first_occu(arr, 0, n-1, x);
    int last = last_occu(arr, 0, n-1, x);
    
    cout<<  (last - first) +1 << endl;


    return 0;
}  
 */



/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

int find_smallest_missing(int arr[], int l, int r) {
    
    int ans = -1;
    while(l <= r) {
        const int mid = l + (r-l)/2;
        // if(arr[mid] == mid)  
        //     l = mid+1;  
        // else 
        //     r=mid-1;
        if(arr[mid] == mid) 
            l = mid+1;
        else    
           r= mid-1;
    }
 
}


// int find_smallest_missing(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         if(arr[i+1] != arr[i] +1)  {
//             break;
//             return i+1;
//         }
//     }
   
// }


 int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
   
    int ans = find_smallest_missing(arr,0, n-1);
    cout<< ans << endl;
    

    return 0;
}  
 */
/* 
#include<bits/stdc++.h>
using namespace std;

int find_smallest_missing(int arr[], int l, int r) {

    if(l > r) 
        return l;
    
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if(arr[mid] == mid) 
            return find_smallest_missing(arr, mid+1, r);
        else 
            return find_smallest_missing(arr, l, mid-1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    int ans = find_smallest_missing(arr,0, n-1);
    cout << ans << endl;
 

    return 0;
}
 */
/* 
#include<bits/stdc++.h>
using namespace std;

int getMissingNo(int arr[], int n) {
    int x1 = arr[0];
    int x2 = 1;

    for(int i=1; i<n; i++) 
        x1 = x1^arr[i];
    
    for(int i=2; i<=n+1; i++) 
        x2 = x2^i;
    
    return(x1^x2);
}

int main()
{   
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)  
        cin>>arr[i];
    
    int miss = getMissingNo(arr,n);
    cout<< miss << endl;
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace  std;

int get_floor(int arr[], int l, int r, int x) {
    int ans = -1;
    while(l <= r ) {
        const int mid = l + (r-l)/2;

        if(arr[mid] == x) {
            ans = x;
            break;
        }
        
        else if(arr[mid] < x) {
            ans = arr[mid];
            l = mid+1;
        }
        else 
            r =mid-1;
    }
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
     
    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)  
        cin>> arr[i];
    
    int x; cin>> x;
    int ans =  get_floor(arr, 0, n-1, x);
    cout<< ans << endl;

     
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace  std;

int get_ceil(int arr[], int l, int r, int x) {
    int ans = -1;
    while(l <= r ) {
        const int mid = l + (r-l)/2;

        if(arr[mid] == x) {
            ans = arr[mid];
            break;
        }

        else if(arr[mid] > x) {
            ans = arr[mid];
           r = mid-1;
        }
        else 
           l = mid+1;
       
    }
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
     
    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)  
        cin>> arr[i];
    
    int x; cin>> x;
    int ans =  get_ceil(arr, 0, n-1, x);
    cout<< ans << endl;

     
 
    return 0;
} */

  /* 
#include<bits/stdc++.h>
using namespace std;

void remove_dublicate(int n, int *arr) {
    int k=0;
    for(int i=0; i<n; i++) {
        for(int j=i+1;j<n; j++) {
            int count=0;
            if(arr[i] == arr[j]) 
                count++;
            if(count == 1) {
                for(int k=j+1; k<n; k++) {
                    arr[j] = arr[k];
                }
                n--;
                j--;
            }
        }
    }

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
        cin>> arr[i];
    
    remove_dublicate(n,arr);
   
    return 0;
} */


// Find the peak element using binary searh.
/* 
#include<bits/stdc++.h>
using namespace std;

int find_peak_element(int arr[], int n) {
    
    int ans = -1, l=0, r=n-1;
    
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if((mid == l or arr[mid] >= arr[mid-1]) and (mid == r or arr[mid] >= arr[mid+1]))
            return mid;
        else if(arr[mid] <= arr[mid+1])
            l = mid+1;
        else 
            r = mid-1;
    }

    return ans;

}



int main()
{
    int n; cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int ans = find_peak_element(arr,n);
    if(ans == -1) 
        cout << "Not found" << endl;
    else 
        cout<<"found at index: " << ans << endl;
     

    return 0;
} */

// find peak element from array ...
// brute forces...
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

int find_peak_element(int arr[], int n) {
    int ans= -1;

    if(n==1) 
        return 0;
    else if(n==2)
        return (arr[0] >= arr[1]) ? 0 : 1;
    else {
        if(arr[0] >= arr[1])
            return 0;
        if(arr[n-1] >= arr[n-2])
            return n-1;
        for(int i=1; i<n-1; i++) {
            if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
                return i;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int ans = find_peak_element(arr,n);
    if(ans != -1) 
        cout<< "Found at index:" << ans << endl;
    else 
        cout<<"Not found!"<< endl;
 
    return 0;
} */



// Using Binary search..
// complexity O(logN);
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

int find_peak_element(int arr[], int n) {
    
    int l=0, r=n-1, ans=-1;
    while(l <= r) {
        const int mid = l + (r-l)/2;
        if((mid== l || arr[mid] >= arr[mid-1]) && (mid== r || arr[mid] >= arr[mid+1]))
            return mid;
        else if(arr[mid] <= arr[mid+1])
            l = mid+1;
        else 
            r = mid-1;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int ans = find_peak_element(arr,n);
    if(ans != -1) 
        cout<< "Found at index:" << ans << endl;
    else 
        cout<<"Not found!"<< endl;
 
    return 0;
} */


// find square root using Binary search...
/// complexity O(logN)...
 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

ll find_square_root(ll n) {
    int l=1, r=n, ans=-1;

    while(l <= r) {
        const ll mid = l + (r-l)/2;
        ll root = mid*mid;

        if(root == n) 
            return mid;
        else if(root < n) {
            //ans = mid;
            l = mid+1;
        }
        else    
            r = mid-1;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    
        ll n; cin>>n;
        int ans = find_square_root(n);
        if(ans != -1) 
            cout<< "Square root of :" << n << " is " << ans << endl;
        else 
            cout << "Not found!" << endl;  
    
    return 0;
}
  */

/* 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int find_root(ll n)  {
    ll sqrt= 0;
    for(ll i=0; i<=n; i++) {
        if(i*i <=n) 
            sqrt = i;
        else    
            break;
 
    }
    return sqrt;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    while(true) {
        int n; cin>> n;
        int ans = find_root(n);
        cout<< ans  << endl;
    }

    return 0;
} */


/// recursive function...
 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int check_root(ll n, ll l, ll r) {
    int ans= -1;

    while(l <= r) {
        const ll mid = l + (r-l)/2; 
        ll root = mid*mid;
        
        if(l > r) 
            return ans;
        
        if(root == n) 
            return mid;
        
        else if(root < n) 
            return check_root(n, mid+1, r);
        else    
            return check_root(n, l, mid-1);
        
    }

    return ans;
}

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    ll n; cin>>n;
    int ans = check_root(n, 1, n);
    cout<< ans << endl;
 

    return 0;
}

   */

 
/* 
#include<bits/stdc++.h>
using namespace std;

void prime_factor(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n%i ==0) {
            int count = 0;
            while(n%i==0) {
                count++;
                n = n/i;
            } 
            cout << i <<"^" << count <<",";
                 
        }
    }

    if(n>1) 
        cout<<n<< "^" <<1<< endl;
    else 
        cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);     cin.tie(0);
    
    int n; cin>>n;
    prime_factor(n);

 
    return 0;
} */
 /* 
#include<bits/stdc++.h>
using namespace std;

int prime_factor(int n) {
    int ans=0;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            ans++;
            while(n%i==0) 
                n= n/i;
        }
    }

    if(n > 1) 
        ans++;
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);     cout.tie(0);

    int n;
    while(cin>>n) {
        if(n==0) break;
        int ans = prime_factor(n);
        cout<< n <<" : "<< ans <<endl;
    }
 

    return 0;
}
 */

