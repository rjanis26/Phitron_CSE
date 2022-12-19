 /* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Selection_sort(int arr[], int n) {
    int i,j, min_index;
    for(int i=0; i<n; i++) {
        int min_index=i;
        for(int j=i+1; j<n; j++) {
             if(arr[j] > arr[min_index]) {
                min_index=j;
             }
        }

        if(min_index!=i) {
             int temp = arr[i];
            arr[i] =arr[min_index];
            arr[min_index] = temp;
        }

    }
   
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}


int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    Selection_sort(arr,n);
    print_array(arr,n);
    

    return 0;
}

 */


/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

void bubble(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sort(int n, int a[]) {
    for(int steps = 0; steps<n-1; steps++) {
        for(int i=n-1; i>0; i--) {
            // write code here...
            if(a[i] > a[i+1]) {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int n; scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    bubble(a, n);
    print_array(a,n);

    // printf("\n");
    // sort(n,a);
    // print_array(a,n);
    return 0;
} */

/* 
 
#include<stdio.h>
#include<string.h>

int main()
{
    int t,n, tag;
    scanf("%d", &t);

    while(t--) {

        tag = 0;
        char str[1000];
        scanf("%d %s", &n, str);
        

        for(int i=0; i<n; i++) {
            if(str[i] == '8' && n-i>=11) {
                tag = 1;
                break;
            }
        }

        if(tag==1 && n >=11) {  
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
 
    }
 
    return 0;
}
 */ 



 











 