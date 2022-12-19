/* #include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 6; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;

} */

/* #include<stdio.h>
int main()
{
    int i, j;
    for(i = 6; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
} */
/* #include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
} */

/* #include<stdio.h>
int main()
{
    // int i, j;
    // for(i = 1; i <= 5; i++) {
    //     for(j = 1; j <= 5; j++) {
    //         printf("%d ", );
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for(i = 5; i >= 1; i--) {
    //     for(j = 1; j <= 5; j++) {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for(i = 5; i >= 1; i--) {
    //     for(j = 5; j >= 1; j--) {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }
 
    return 0;
} */

/* #include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} */
/* #include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 6; i++) {
        for(j = i; j <= (i*i); j = j+i) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
} */
/* 
// reverse array using swapping method..

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swapArray(int arr[], int n) {
    int k=n;
    while(k>=0) {
        for(int j=0; j<k-1; j++) {
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        k--;
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n+3];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    swapArray(arr,n);
 
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

     

} */