/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{ 
    int *ptr;
    //ptr = (int *)malloc(5*sizeof(int));

    ptr = (int *) calloc(5,sizeof(int));
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
    }
    else {
        printf("Memory allocated successfully.\n ");
    }
     
    free(ptr);
    printf("Memory free successfully.\n");


    return 0;
}
 */

/* #include<stdio.h>
#include<stdlib.h>

int main()
{
    int n; 
    printf("Enter the number of integer: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Memory not availabe.");
        exit(1);
    }

    for(int i=0; i<n; i++) {
        printf("Enter an integer: ");
        scanf("%d", ptr+i);
    }

    for(int i=0; i<n; i++) {
        printf("%d ", *(ptr+i));
    }

    return 0;
} */

// Find the max element using dynamic memory allocation..

/* #include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    float *element;
    element = (float *)malloc(n*sizeof(float));

    if(element==NULL) {
        printf("Memory is not allocatd.");
        exit(0);
    }
    
    for(int i=0;i<n;i++) {
        scanf("%f", element+i);
    }

    for(int i=1; i<n; i++) {
        if(*element<*(element+i)) {
            *element=*(element+i);
        }
    }

    printf("Largest: %.3f",*element);
    return 0;
} */

/* #include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n*sizeof(int));

    if(ptr==NULL) {
        printf("Memory not allocated.");
        exit(0);
    }

    printf("Enter %d items:\n",n);
    for(int i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    printf("Arrary elements: \n");
    for(int i=0;i<n;i++) {
        printf("%d ", *(ptr+i));
    }

    puts("\n");
    free(ptr);
    printf("Memory successfully freed.");
    return 0;
}
 */


/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *makeCopy(int arr[], int n) {
    int *out = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        out[i] = arr[i];
    }
    return  out;
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int *b = makeCopy(arr,n);
    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }


    return 0;
}
 
 */


 /* #include<stdio.h>
#include<string.h>

int Linear_search(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return i; 
        }
    }
     
    return -1;
}

int main()
{

    int n; scanf("%d", &n);
    int arr[n+3];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int item;
    scanf("%d", &item);
    
    int index = Linear_search(arr,n,item);
    if(index==-1) {
        printf("Item is not found.\n");
    }
    else {
        printf("Item found at index: %d\n", index);
    }


    return 0;
} */

// Bubble sort in c... programing.. 

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Bubble_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {

        for(int j=0; j<n-i-1; j++) {

            if(arr[j] >arr[j+1]) {
                // swap the value..
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sorted array: ");
    Bubble_sort(arr,n);
    print_array(arr,n);

    return 0;
} */

#include<stdio.h>
#include<string.h>

void selection_sort(int arr[], int n) {
    int min_index, i;
    for(int i=0; i<n-1; i++) {
        min_index=i;

        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_index]) {
                 min_index = j;
            }
           
        }
        if(min_index != i) {
        int temp = arr[i];
        arr[i] =arr[min_index];
        arr[min_index] = temp;
        
        }
    
   }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{

    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sorted array: ");
    selection_sort(arr,n);
    printArray(arr,n);


    return 0;
}