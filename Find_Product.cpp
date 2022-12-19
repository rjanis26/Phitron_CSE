/* #include<bits/stdc++.h>
using namespace std;
const int m= 1e9+7;
int main()
 
{
 
int n;
 
cin>>n;
 
int a[n];
 
for(int i=0;i<n;i++)
 
cin>>a[i];
 
long long int p;
 
p=1;
 
for(int i=0;i<n;i++)
 
{
 
p=(p*a[i])%(m);
 
}
 
cout<<p;
 
return 0;
 
} */

/* #include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int m = 1e9+7;

int findProduct(int arr[], int n) {
    ll product=1;
    for(int i=0; i<n; i++) {
        product = (product*arr[i])%(1000000007);
    }
    return product;
}

int main() 
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }

    cout << findProduct(arr,n)<<endl;
    

    return 0;
} */

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int findProduct(int arr[], int n) {
    const int m = 1e9+7;
    ll product=1;
    for(int i=0; i<n; i++) {
        product = (product*arr[i])%m;
    }
    return product;
}

int main() 
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }

    cout << findProduct(arr,n)<<endl;
    

    return 0;
}

/* #include <iostream>

 
using namespace std;

 
int main() {
    long long ans=1;
    int n,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        ans=(ans*k)%(1000000000+7);
    }
    cout<<ans;
} */