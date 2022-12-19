 /* #include<stdio.h>
#include<string.h>

int  print_duplicate_elements(int arr[], int ln) {
    int ans =0;
    for(int i=0; i<ln; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

 int main() 
{
    int n; scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    print_duplicate_elements(arr, n); 
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
   

    return 0;  
    
} */

#include <iostream>

using namespace std;

int main() {

    long n,input;

    cin >> n;                                       

    while(n--){

     cin>>input; 

    }   

    if(input%10==0)

    cout<<"Yes";

    else

    cout<<"No";

}