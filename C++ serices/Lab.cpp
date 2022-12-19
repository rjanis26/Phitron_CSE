/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

// int sum(int arr[], int n) {
//     ll sum(0);
//     for(int i=0; i<n; i++) 
//         sum += arr[i];
    
//     return sum;
// }

// int sum(int arr[], int n) {
//     ll sum=0;
//     for(int i=0; i<n; i++) {
//         if(i%2 == 0) 
//             sum += arr[i];
//     }

//     return sum;
// }


// void reverse(int arr[], int n) {
//     int l=0, r=n-1;
//     while(l < r) {
//         swap(arr[l++], arr[r--]);
//     }
// }

// void reverse(int arr[], int n) {
//     for(int i=n-1; i>=0; i--) 
//         cout<< arr[i]  << " ";
//     cout << endl;
// }

// int find_max(int arr[], int n) {
//     sort(arr, arr+n);

//     return *max_element(arr, arr+n);
// }

// int find_min(int arr[], int n) {
//     return *min_element(arr, arr+n);
// }

// void reverse(int arr[], int n) {
//     for(int i=0; i<n; i++) 
//         cout<< arr[n-i-1] <<" ";
    
//     cout<< endl;
// }

// void print_arr(int arr[], int n) {
//     for(int i=0; i<n; i++) 
//         cout<< arr[i] <<" ";
//     cout<< endl;
// }


void find_min_max(int arr[], int n) {
    int min, max, index=0;
    min = max = arr[0];


    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            index=i;
        }
        
        if(arr[i] < min) {
            min = arr[i];
            index = i;
        }
          
    }

         cout<< "Max: " << max << ", idex: " << index << endl;
         cout << "min: " << min <<", Index: " << index << endl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>>test;
    while(test--) {
       
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) 
            cin>> arr[i];

        // int ans= sum(arr, n);
        // cout<< ans << endl;

        //reverse(arr, n);
       // print_arr(arr,n);

    //    cout << "Max: " << find_max(arr,n) << endl;
    //    cout <<"Min: " << find_min(arr,n) << endl;

        find_min_max(arr,n);


    }
 

    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

// int Linear_search(int arr[], int n, int x) {
//     for(int i=0; i<n; i++) {
//         if(arr[i] == x) 
//             return i;
//     }
//     return -1;
// }

int Binary_search(int arr[], int l, int r, int x) {
    int ans= -1;
    while(l <= r) {
        const int mid = l + (r-l)/2;
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

    int test; cin>> test;
    while(test--) {
            
        int n; cin>> n;
        int arr[n+2];
        for(int i=0; i<n; ++i) 
            cin>> arr[i];
        
        sort(arr, arr+n);
        int x; cin>>x;

        int ans = Binary_search(arr,0, n-1, x);
        (ans!=-1) ? cout<<"Found at index: " <<ans <<" and position: "<< ans+1 << endl : cout<<"Not Found!" << endl;

    }
 
    return 0;
}
 */
/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void find_max_min(int arr[], int n) {
    int low, high, low_in = 0, high_in=0;
    low= high= arr[0];

    for(int i=0; i<n; i++) {
        if(arr[i] > high) {
            high = arr[i];
            high_in = i; 
        }

        if(arr[i] < low) {
            low = arr[i];
            low_in = i;
        }
    }

   cout<<"Max: " << high <<" -> index: "<< high_in<<endl;
   cout<<"Min: " << low<< " -> index: " << low_in<< endl;

     
}

int main()
{
    
    int test; cin>>test;
    while(test--) {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>> arr[i];

        find_max_min(arr,n);
    }
     

    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void intersection (int arr[], int n, int brr[], int m) {
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i] == brr[j]) 
                cout<< arr[i] <<" ";
            
        }
        
    }
}

int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>> a[i];

    int m; cin>>m;
    int b[n];
    for(int i=0; i<m; i++)
        cin>> b[n];

    intersection(a, n, b, m);
        
    

    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
 

void solve(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] % 3 == 0) 
            arr[i] = -1;
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] <<" ";
    cout <<endl;
}

int main()
{   
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
 
    solve(arr,n);
    print_arr(arr, n);
    

    return 0;
}
 */
 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
 

void unique(int arr[], int n) {
    int i, j;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(arr[i] == arr[j]) 
                break;
        }
        if(i == j) {
             cout<< arr[i]<< " ";
        }
    }
     
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] <<" ";
    cout<< endl;
}

int main()
{

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    

    unique(arr, n);
    

    return 0;

 } */


/* 
 #include<iostream>
using namespace std;
int main()
{
  int n1,n2,i,j;
  cin>>n1;
  int arr1[n1];
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  
   
  cin>>n2;
   
  int arr2[n2];
   
  for(i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
   
  for(i=0;i<n1;i++) {
    for(j=0;j<n2;j++) {
      if(arr1[i]==arr2[j])
      {
        cout<<arr1[i]<<" ";
      }

      else  
        cout<<"Empty set" << endl;
    }
  }
  
  return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout<< arr[i] <<" ";
    cout<< endl;
}

int main()
{
    int n ; cin>> n;
    int a[n];

    for(int i=0; i<n; i++) 
        cin>> a[i];
    
    int m; cin>>m;
    int b[m];
    for(int i=0; i<m; i++) 
        cin>> b[i];

   
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i] == b[j]) {
                cout<<a[i] <<" ";
               
            }
   
        }
         
    }
    
     
    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout<< arr[i] <<" ";
    cout<< endl;
}

int main()
{
    int n ; cin>> n;
    int a[n];

    for(int i=0; i<n; i++)  
        cin>>a[i];

    for(int i=0; i<n; i++) {
        //cout<< a[i+1] << " ";
        
         cout<< a[i]+1 <<" ";

    }
     
    return 0;
}

 */

 /* 
#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout<< arr[i] << " ";
    cout<< endl;
}

void insertion_sort(int arr[], int n) {
    int val, hole;

    for(int i=0; i<n; i++) {
        val =arr[i], hole = i;
        
        while(hole > 0 and arr[hole-1] > val) {
            arr[hole] = arr[hole-1];
            hole--;
        }

        arr[hole] = val;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n; 
    int arr[n+3];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    insertion_sort(arr,n);
    print_arr(arr,n);
    

    return 0;
} */
  
 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int bubble_sort(int arr[], int n) {
    int swaps=0;
    bool ans = false;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                swaps++;
                ans = true;
            }
            
        }
         if(!ans) 
        break;
    }
    
    return swaps;
   
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    int ans = bubble_sort(arr,n);
    cout<<"Array is sorted in " << ans << " swaps" <<endl;
    cout<<"First Element: "<< arr[0] << endl;
    cout<<"Last Element: " << arr[n-1] << endl;

 

    return 0;
}

  */
 

 
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
  



#include<bits/stdc++.h>
using namespace  std;
#define ll long long int
#define endl '\n'


