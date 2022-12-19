/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int reverse_array(int arr[], int start, int end) {
    if(start < end) {
        swap(arr[start], arr[end]);
        reverse_array(arr, start+1, end-1);
    }
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[] = {1, 3, 5, 6, 8, 9, 11, 10, 50};
    int len = sizeof(arr)/sizeof(arr[0]);

    print_array(arr, len);
    reverse_array(arr, 0, len-1);
    print_array(arr,len);


    return 0;
} */
 

 /* #include<bits/stdc++.h>
using namespace std;

int main()
{
int n, m , index = 0;
cin>>n>>m;

int arr[n];
for(int i = 0 ; i < n ; i++)
cin>>arr[i];
for(int i = 0 ; i < n ; i++){
if(arr[i] == m){
index = i;
}

}
//since array starts from 0
cout<<++index;
return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define endl "\n"


void solve() {
    int n, item; 
    cin>>n>>item;
    int arr[n];
    rep(i,n) {
        cin>>arr[i];
    }
    int index=0;
    rep(i,n) {
        if(arr[i]==item) {
            index=i;
        }
    }
    if(index>0) {
        cout<<++index<< endl;
    }
    else {
        cout<<-1 << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
} */
 
/* 
#include<bits/stdc++.h>
using namespace std;

void print_arrray(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout<< endl;
}

int main()
{ 
    

    int arr[51];
    int n; cin>>n;
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    cout<<"Given array: ";  
    print_arrray(arr,n);

    int pos, value;
    cout<< "Enter your position:";
    cin>> pos;
    cout<< "Enter the value: ";
    cin>> value;

    if(pos < 0 or pos > n) 
        cout<< "Invalid input.";
    
    else {
        for(int i=n-1; i>=pos; i--) 
            arr[i+1] = arr[i];
        arr[pos] = value;
    }
    
    cout<<"New array : ";
    print_arrray(arr,n+1);

    return 0;
  
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    









    return 0;
}
 
 