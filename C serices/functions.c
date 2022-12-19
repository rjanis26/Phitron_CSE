 /* https://prepinsta.com/c-program/linear-search/ */

  /* #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)

void leftRotatebyOne(int arr[], int n) {
    int temp = arr[0];
    rep(i,n-1) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void leftRotate(int arr[], int n, int k) {
    rep(i,k) {
        leftRotatebyOne(arr,n);
    }
}

int main()
{   
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, len, 3);
    rep(i,len) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}  
 */

/* #include<stdio.h>
#include<string.h>

void rotate(int arr[], int n, int d) {
    for(int i=0; i<d; i++) {
        int x = arr[0];

        for(int j=0; j<n; j++) {
           int temp = arr[j];
           arr[j]=arr[j+1];
           arr[j+1] = temp;
        }
        arr[n-1] = x;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    rotate(arr, len, 3);
    
    for(int i=0; i<len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

void makeNsquares(int arr[], int n) {
    for(int i=1; i<=n; i++) {
        arr[i] = i*i;
    }
}

int main()
{
    int n; 
    scanf("%d", &n);
    int arr[n];
    makeNsquares(arr,n);
    for(int i=1;i<=n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;

}

*/
 /* 
  #include<stdio.h>
#include<string.h>

void print_duplicate_elements(int arr[], int ln) {
    int i, j;

    for(int i=0; i<ln; i++) {
        for(j=0; j<i; j++ ) {
            if(arr[i]== arr[j]) {
                break;
            }
        }
        if(i == j) {
            printf("%d ", arr[i]);
        }
    }
}

 int main() 
{
    int n; scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    print_duplicate_elements(arr, n);

    return 0;  
 
 }  
  */
 
/* 
#include<stdio.h>
#include<string.h>

void print_duplicate_elements(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j= i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }
}

 int main() 
{
    int n; scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    print_duplicate_elements(arr, n);

    return 0;  

} 
 */

