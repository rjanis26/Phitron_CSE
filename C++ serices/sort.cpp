/* #include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout<< arr[i] <<" ";
    cout<< endl;
}

void bubble_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) 
                swap(arr[j], arr[j+1]);
        }
    }
}

int main()
{
    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    bubble_sort(arr,n);
    print_arr(arr,n);
 
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

void bubble_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=n-1; j>0; j--) {
            if(arr[j] < arr[j-1]) 
                swap(arr[j], arr[j-1]);
        }
    }
}

int main()
{
    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    bubble_sort(arr,n);
    print_arr(arr,n);
 
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

void bubble_sort(int arr[], int n) {
  
    for(int i=0; i<n-1; i++) {
        bool ans = false;
          cout<<"Iterration no: " << i+1 << endl;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                ans = true;
            }  
                
            print_arr(arr,n);
                
        }
         cout<< endl;
         if(!ans)
            break;
    }
  
}

int main()
{
    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    bubble_sort(arr,n);
    print_arr(arr,n);
 
    return 0;
}  
 */

// insertion sort...
/* #include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] <<" ";
    cout<< endl;
}

void insertion_sort(int arr[], int n) {
    int value, hole;

    for(int i=1; i<n; i++) {
        value = arr[i];
        hole = i;

        while(hole > 0 and arr[hole-1] > value) {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
}

int main()
{
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    insertion_sort(arr,n);
    print_arr(arr,n);

   
    return 0;
}
 */

/* #include<stdio.h>
#define size 5
int main()
{
    int arr[] = {-8, 4, 11, 3, 19};
    int i, value, hole;

    for(i = 1; i < size; i++){
        value = arr[i];
        hole = i;
 
        while (hole > 0 && arr[hole - 1] > value){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }

    printf("Sorted Arryay: \n");
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    } 
         
    return 0;
}
 */

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

/* 
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    int val, hole;
    for(int i=0; i<n; i++) {
        val = arr[i];
        hole = i;
        
        while(hole > 0 && arr[hole-1] > val) {
            arr[hole] = arr[hole-1];
            hole--;
        }

        arr[hole] = val;
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] <<" ";
    cout << endl;
}

int main()
{

    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    insertion_sort(arr,n);
    print_arr(arr,n);

  
    return 0;
} */ 

/* 
#include<bits/stdc++.h>
using namespace std;

int find_peak_element(int arr[], int n) {
    int ans = -1, l=0, r=n-1;

    while(l <= r) {
        const int mid = l + (r-l)/2;
        if((mid == l || arr[mid] >= arr[mid-1]) && (mid==r || arr[mid] >= arr[mid+1] ))
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
     
     if(ans != -1 ) 
        cout<<"Found at index:" << ans << endl;
    else   
        cout <<"Not found" << endl;



    return 0;
} */


/// find the smallest missing value...
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

// int find_smallest_missing(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         if(arr[i+1] != arr[i]+1) {
//             break;
//             return i+1;
//         }
//     }
// }

int find_smallest_missing(int arr[], int n) {
    int ans= -1, l=0, r=n-1;
    while(l <= r) {
        const int mid = l + (r-l)/2;

        if(arr[mid]== mid) 
            l = mid+1;
        else 
            r = mid-1;
    }

   // return ans;
}

int main()
{

    
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
   
    int ans = find_smallest_missing(arr,n);
    cout<< ans << endl;


    return 0;
} */


// counting sort in c++
 
// #include<bits/stdc++.h>
// using namespace std;

// void count_sort(int arr[], int n) {

//     int output[n+1],  mx=INT_MIN;

//     for(int i=0; i<n; i++) 
//         if(arr[i]> mx) 
//             mx= arr[i];
        
//     //memset(count, 0, sizeof(count));
//     // for(int i=0; i<=mx; i++) 
//     //     count[i] = 0;
    
//     // dynamic allocation..
//     //  int *count = new int[mx+1];
//     // memset(count, 0, sizeof(int)*mx+1);

//     int count[mx+1] = {0};

//     for(int i=0; i<n; i++) 
//         count[arr[i]]++;
    

//     // accumulate sum...
//     for(int i=1; i<=mx; i++) 
//         count[i] += count[i-1];
    
//     for(int i=n-1; i>=0; i--) {
//         output[count[arr[i]]-1] = arr[i];
//         count[arr[i]]--;
//     }

//     for(int i=0; i<n; i++) 
//         arr[i] = output[i];

// }

// void print_arr(int arr[], int n) {
//     for(int i=0; i<n; i++) 
//         cout<<arr[i] <<" ";
//     cout<< endl;
// }

// int main()
// {

//     int arr[] =  {2, 5, 2, 8, 1, 4, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     count_sort(arr,n);
//     print_arr(arr,n);



//     return 0;
// }  

  /* 
#include<bits/stdc++.h>
using namespace std;

void count_sort(int *arr, int n) {

    int output[n+1], max = INT_MIN; 
    for(int i=0; i<n; i++) {
        if(arr[i] > max) 
            max = arr[i];
    }

    int free[max+1] = {0};
    memset(free, 0, sizeof(free));
    
    // using dynamic allocation...
    // int *free = new int[max+1];
    // memset(free, 0, sizeof(int)*max+1);

    for(int i=0; i<n; i++) 
        free[arr[i]]++;
    
    for(int i=1; i<=max; i++) 
        free[i] += free[i-1];
    
    for(int i=n-1; i>=0; i--) {
        free[arr[i]]--;
        output[free[arr[i]]] = arr[i];
    }
    
    
    for(int i=0; i<n; i++)  
        arr[i] = output[i];


   // delete[] free;
    
}

void print_arr(int *arr, int n) {
    for(int i=0; i<n; ++i) 
        cout<< arr[i] <<" ";
    cout<< endl;
}

int main()
{

    int n; cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    count_sort(arr,n);
    print_arr(arr,n);

    delete[] arr;
 

    return 0;
}   */


// counting sort (string..)
/* 
#include<bits/stdc++.h>
using namespace std;

void count_sort(char str[]) {
    int len = strlen(str);
    char output[len];

    int count[len+1] = {0};

    for(int i=0; i<=len; i++) 
        count[str[i]]++;
    
    for(int i=1; i<=len; i++) 
        count[i] += count[i-1];
    
    for(int i=len-1; i>=0; i--) {
        count[str[i]]--;
        output[count[str[i]]] = str[i];
    }

    for(int i=0; str[i]; i++) 
        str[i] = output[i];

}

int main()
{
      char str[] = "geeksforgeeks";
    // sort(str.begin(), str.end());

    
  
    count_sort(str);
    cout<< str << endl;
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

void count_sort(vector<int> &arr) {
    int max= *max_element(arr.begin(), arr.end());
    int min= *min_element(arr.begin(), arr.end());
    int n = max-min+1;

    vector<int> count(n,0), output(arr.size());
    for(int i=0; i<arr.size(); ++i) 
        count[arr[i] -min]++;
    
    for(int i=1; i<count.size(); i++) 
        count[i] += count[i-1];
    

    for(int i=arr.size()-1; i>=0; i--) {
        count[arr[i]-min]--;
        output[count[arr[i]-min]] = arr[i];
    }

    for(int i=0; i<arr.size(); i++)
        arr[i] = output[i];
}

void print_arr(vector<int> &arr) {
    for(auto const x: arr) 
        cout<< x << " ";
    cout<<endl;
}

int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    count_sort(arr);
    print_arr(arr);
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 1, 3 , 6, 7, 9, 5};

    auto it = minmax_element(v.begin(),v.end());
    int min_index = distance(v.begin(), it.first );
    int max_index = distance(v.begin(), it.second );

    cout<< "Min index:" << min_index<< endl;
    cout<< "Max index:"<< max_index << endl;
 
    return 0;
} */







/* 

void LinkedList::displayOddNodes()
{
    // mainting a counter
    int counter = 0;

    //variable to traverse linked list
    node* dummy = head;

    do
    {   
        //condition to check odd
        if (counter % 2 == 1)
        {
            std::cout << "data: " << dummy->data << endl;
        }

        //incrementing counter
        counter++;
        //jumping to next node
        dummy = dummy->next;
    } while (dummy != NULL);
} */
/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10;
    if(n&1) 
        cout<< "odd" << endl;
    else 
        cout<<"Even" <<endl;



    return 0;
} */
 



 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void solution() {
    stack<char> st;
    string str; cin>> str;
    
    for(int i=0; i<str.size(); i++) {
        if(str[i] =='(' or str[i] == '{' or str[i] == '[')
            st.push(str[i]);

        if(!st.empty()) {
            if(str[i] == ')' && st.top() == '(')
                st.pop();
            if(str[i] =='}' && st.top() == '{') 
                st.pop();
            if(str[i] == ']' && st.top() == '[')
                st.pop();
        }

        else 
            st.push(str[i]);
    }

    if(st.empty()) 
        cout<< "Yes" << endl;
    else 
        cout<<"No" << endl;
}


int main()  
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solution();
 
    return 0;
}  
 
 