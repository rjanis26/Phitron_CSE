/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)

int sumElements(int arr[], int n) {
    int sum=0;
    rep(i,n) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }

    int add = sumElements(arr,n);
    printf("%d", add);
    
    return 0;
} */

 

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)

void insertElements(int arr[], int n, int element, int pos) {
   int i;
    if(pos > n+1 || pos <=0) {
        printf("Invalid position!");
    }
    else {
        
        for(int i=n; i>=pos; i--) {
            arr[i]=arr[i-1];
        }
        /// insert element at given position
        arr[pos-1]=element;
        n++;  // increment the array size.
    }
}

int main()
{
    int n; sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }
    
    int pos, element;
    printf("Input element to insert: ");
    sf(element);
    printf("Input position where to insert: ");
    sf(pos);

    insertElements(arr,n,element, pos);
 
    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)

void searchElements(int arr[], int n, item) {
    int found=0;
    
    rep(i,n) {
        if(arr[i]==item) {
            found=1;
            break;
        }
    }
}

int main() 
{
    int n; sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }

    int item;
    sf(item);

    searchElement(arr,n,item);

    return 0;
} */
  

// find max occurrence from array string..

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define ch 256
#define srep(i) for(int i=0; i<strlen(str); i++)

char findMaxOccurrence(char str[]) {
    
    int max=0;
    char result;
    int count[ch]={0};

    srep(i) {
        int vals=str[i];
        count[vals]++;
        if(max < count[vals]) {
            max=count[vals];
            result=str[i];
        }
    }
    return result;
}

int getLength(char str[]) {
    int i=0, len=0;
    while(str[i] != '\0') {
        len++;
        i++;
    }
    return len;
}
 

int main()
{

    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);

    printf("Lenght of the string: %d\n", getLength(str)); 
    printf("max occurrence: %c",findMaxOccurrence(str));

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>

#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++) 
#define sf(x) scanf("%d", &x);
#define pf(x) printf("%d", x);

int main()
{
    int n;
    printf("Enter the size of the array: ");
    sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }

    int count[1001]={0};
    rep(i,n) {
        int vals=arr[i];
        count[vals]++;
    }

    for(int i=1; i<=n; i++) {
        printf("%d occurs %d times.\n", i, count[i]);
    }
    return 0;
}
 */