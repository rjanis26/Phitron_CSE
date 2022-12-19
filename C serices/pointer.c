/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int i,n;
    int *element;

    printf("Enter the total numbeer:");
    scanf("%d", &n);
    
    element = (int*) calloc(n, sizeof(int));
    if(element == NULL) {
        printf("No memoy allocated.");
        exit(0);
    }

    printf("\n");
    for(int i=0; i<n; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", element+i);
    }
    
    for(int i=0; i <n; i++) {
        if(*element > *(element+i)) { // *element < *(element+i)
            *element = *(element+i);
        }
    }

    
    printf("Largest element is: %d", *element);


    return 0;
} */

/* #include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate_length(char *ch) {
    int count=0;
    while(*ch != '\0') {
        count++;
        ch++;
    }
    return count;
}

int main()
{

    char str[25];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);

    int len= calculate_length(str);
    printf("length of the string %d\n", len-1);
 

    return 0;
} */
 
/* #include<stdio.h>
#include<string.h>

int *findMid(int arr[], int n) {
    return &arr[n/2];
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int *mid = findMid(arr,n);
    printf("%d", *mid);


    return 0;

} */


  if((Year % 400 == 0) or  
     (Year % 100 != 0) and  
     (Year % 4 == 0))