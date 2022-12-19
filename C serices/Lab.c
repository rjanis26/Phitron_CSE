/* #include<stdio.h>
#include<string.h>

#define sf(x) scanf("%d", &x)
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++) 

void reverse_array(int arr[], int n) {
     
    for(int i=0,j=n-1;i<j; i++, j--) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main()
{
    int n; sf(n);
    int arr[n+3];

    rep(i,n) {
        scanf("%d", &arr[i]);
    }
 
    reverse_array(arr,n);
   rep(i,n) {
       printf("%d ", arr[i]);
   }
     

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{
    char num[10];
    gets(num);

    int freq[10]={0};
    for(int i=0; i<9; i++) {
        char c = num[i];
        int digit= c-'0';
        freq[digit]++;
    }

    int ans=0;
    for(int i=0; i<9; i++) {
        if(freq[i]==0) {
            ans=i;
        }
    }
    printf("%d", ans);

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

    if(pos>n+1 || pos <=0) {
        printf("Opps! Invalid position");
    }

    else {
        // making room for new element by shifting
        for(int i=n; i>=pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos-1]=element;
        n++;
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
    printf("Enter the insert element: ");
    sf(element);

    printf("Enter the position to insert: ");
    sf(pos);

    insertElements(arr, n,element, pos);
    rep(i,n) {   /// print the new array ...
        printf("%d ", arr[i]);
    }

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

void findMaxElement(int arr[], int n) {
    
    int max=arr[0], count=0;
    rep(i,n) {
        if(arr[i] > max) {
            max=arr[i];
            count=1;
        }

        else if(arr[i]==max) {
            count++;
        }
    }

    printf("Max element: %d\n", max);
    printf("Max occurrence: %d\n", count);
}

int main() 
{
    int n; sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }

    findMaxElement(arr, n);


    return 0;

} */

/* #include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int arr[] = {10, 20, 50, 40, 50, 10, 40};
    int len= sizeof(arr)/sizeof(arr[0]);

    int occu[101] = {0};

    for(int i=0; i<len; i++) {
        int vals = arr[i];
        occu[vals]++;
    }

    for(int i=10; i<=50; i++) {
        printf("%d occurs %d times\n", i,occu[i]);
    }



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
        /// make room for new element by shifting to right...
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
    rep(i,n) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}   */

/* 
  #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); i++) 

void rotate(int arr[], int n, int d) {
     
    rep(i,d) {
         int x=arr[0];
        rep(j, n) {
           int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        arr[n-1] = x;
    }
   
}  

 

int main()
{
    int n; scanf("%d", &n);
    int arr[n+3];

    rep(i,n) {
        scanf("%d", &arr[i]);
    }    

    int k;
    printf("Enter the rotation: ");
    scanf("%d", &k);
    rotate(arr, n, k);

    rep(i,n) {
        printf("%d ", arr[i]);
    }

    return 0;
}
     
 */

// using pointer all the operation...

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int calculateLength(char *ch) {
    int len=0;
    while(*ch != '\0') {
        len++;
        ch++;
    }
    return len;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);

    printf("Lenght string: %d\n", calculateLength(str)-1);

    return 0;

} */


/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int findLargest(int *a, int *b) {
    if(*a > *b) {
        return a;
    }
    else {
        return b;
    }
}

int main()
{
    int x, y;
    printf("Enter the two number: ");
    scanf("%d%d", &x, &y);

    int *result= findLargest(&x, &y);
    printf("Latge: %d", *result);
 
    return 0;
} */

  /* Question-1: 

  #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++) 
#define sf(x) scanf("%d", &x)
#define ll long long int 

int makeSquare(int n) {
    return n*n;
}

int main()
{
    int n; sf(n);
    printf("%d", makeSquare(n));

    return 0;
}   */

 

// Question numbe:5

/* #include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=10, b=20;
    int *p = &a;
    printf("%d %d %d\n", a, b, *p );

    // output: 10 20 10

    *p = 30;
     printf("%d %d %d\n", a, b, *p );

    // ouput: 30 20 30

    *p=20;
    a=50, b=10;
    printf("%d %d %d/n", a, b, *p );
    
    // output: 50 10  50

    p=&b;
     printf("%d %d %d\n", a, b, *p );

    // output: 50 10 10

    a=20, b= 100;
    printf("%d %d %d\n", a, b, *p );

    // output: 20 100 100


    return 0;
} */


// Question No-9:

/* #include<stdio.h>
#include<string.h>

void reverse(int arr[], int n) {
    int *ptr;
    ptr = &arr[n-1];

    for(int i=0; i<n; i++) {
        printf("%d ", *ptr);
        ptr--;
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
    int n; scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);
    

    return 0;
} */

// Question-3:
/* 
  #include<stdio.h>
#include<string.h>

int gcd(int a, int b) {  // Uclid Algorithm...
    if(b==0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}

int findGcd(int arr[], int n) {
    int ans = arr[0];
    for(int i=0;i<n; i++) {
        ans = gcd(arr[i], ans);
        if(ans == 1) return 1;
    }
    return ans;
}

int main()
{
    int n=10;  // said that takes 10 integer..
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", findGcd(arr,n));

    return 0;
}  
 */
// Questiion 4:

 /* #include<stdio.h>
#include<string.h>

void makeSum(int a, int b, int *sum) {
     *sum = a+b;
    
}

int main()
{
    int a,b, sum;
     
    makeSum(a, b, &sum);
    printf("%d",sum);

    return 0;
}
 */

/* #include<stdio.h>
#include<string.h>

void makeNArrray(int n, int *sum) {
    *sum=0;
    for(int i=1; i<=n; i++) {
       // printf("%d ", i*i);
        *sum += (i*i);
    }
}

int main()
{
    int n, sum;
    scanf("%d", &n);

    makeNArrray(n,&sum);
    printf("%d", sum);

    return 0;
} */
  
 
//   #include<stdio.h>
// #include<string.h>

// void makeEqualToAverage(int *pa, int *pb) {
//     int av = (*pa + *pb)/2;
//     *pa = *pb = av;
// }

// int main()
// {
//     int a=10, b = 7;
//     makeEqualToAverage(&a, &b);
//     printf("%d %d ", a, b);

//     return 0;
// } 

 /* #include<stdio.h>
#include<string.h>

void makeNArrray(int n, int arr[]) {
    
    for(int i=1; i<=n; i++) {
         int count =0;
         count += i;
         //printf("%d ", count);
        arr[i] = count;
       
         
    }
     
      for(int i=1; i<=n; i++) {
          printf("%d ", arr[i]);
      }
    
}

int main()
{
    int n;
    int arr[n];
    scanf("%d", &n);

    makeNArrray(n, arr);
     
    return 0;
}   */


/* #include<stdio.h>
#include<string.h>

int makeNproduct(int arr[], int n, int *product) {
    *product=1;

    for(int i=0; i<n; i++) {
        *product *= arr[i];
    }
    return *product;
}
 
int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int product;

    int res=makeNproduct(arr, n,&product);
    printf("%d",res);

    return 0;
}
 */

 
 /* #include<stdio.h>
 int f(int n, int arr[]) {
    int count =0;

    for(int i=0; i<n; i++) {
        if(arr[i] ==arr[1]) {
            count++;
            printf("%d ", arr[i]);
        }
        
    }
    printf("\n");
    return count;
 }

 int main() 
 {
    int arr[] = {1, 2, 1, 2, 1} ;
    int n= sizeof(arr)/sizeof(arr[0]);

    int s =f(n,arr);
    printf("%d", s);

    return 0;
 } */

/* #include<stdio.h>
#include<string.h>

void makeCopy(char in[], char out[]) {
    int i=0, j=0;
    while(in[i] != '\0') {
        out[j] = in[j];
        i++;
        j++;
    }

    out[j] = '\0';
}

 int main()
 {
    char in[100], out[100];

    gets(in);

    makeCopy(in,out);
    printf("%s", out);

 
     return 0;
 } */

/* 
#include<stdio.h>
#include<string.h>

 
 int main()
 {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d\n", a[8]);
    // output: 9

    printf("%p\n", &a[5]);
    //Output: address of a[5] = 6422020,  000000000061FE04

    printf("%d\n", a);

    // Output: 6422000

    printf("%p\n", a+4);
    // Output:: 000000000061FE00

    printf("%d\n", *(a+2));

    // Output:: 3

    printf("%p\n", &*(a+4));
    // output : 000000000061FE00

    printf("%d\n", &*(a+4));
    //output:: 6422016
     
     return 0;
 }  

 */
/*   
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>

 int main()
 {
    int n=100;

    float *ptr = (float *)malloc(n*sizeof(float));

    printf("%d\n", n*sizeof(float));

    printf("%d\n", sizeof(ptr));
       
     return 0;
 }
   */
/* 
   #include<stdio.h>
#include<string.h>
#include<stdlib.h>

void bubble_sort(int arr[], int n) {
    for(int i=0; i< n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

 
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y; 
    *y = temp;
}



void sort(int n, int a[]) {
    for(int steps = 0; steps<n; steps++) {
        for(int i=n-1; i>0; i--) {
            // write code here...
            if(a[i] < a[i-1]) {
                swap(&a[i], &a[i-1]);
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

    // bubble_sort(a, n);
    // print_array(a,n);

    //   printf("\n");
      sort(n,a);
      print_array(a,n);
    return 0;
}     */

/* 
  #include<stdio.h>
#include<string.h>


int main()
{
    char str[] = "Hello";
    char *pos = strchr(str, 'e');

    if(!pos) {
        printf("Not found.");
    }
    else {
        printf("Found at %d", pos-str);
    }

    return 0;
}  

  */




 /*  #include<stdio.h>
 #include<string.h>

 int findNewValue(int x) {
    return x+5;
 }

int main() 
{
    int value = 50;
    int val = findNewValue(value);
    printf("%d\n",val);
    return 0;
}
 
 */
/*  
#include<stdio.h>
#include<string.h>

int findNewValue(int *newValue) {
    return *newValue+5;
 }

int main() 
{
    int value = 500;
    int val = findNewValue(&value);
    printf("%d\n",val);
    printf("%d", value);

    return 0;
}
   */

 /* #include <stdio.h>
#include <string.h>
#define rep(i,n) for(int i=0; i<(n); i++)

void strchar(char str[], char ch) {
    int pos = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            printf("%c %d\n", str[i], i);
        } else {
            pos++;
        }
    }
    if (pos == strlen(str)) {
        printf("not found");
    }
}

int main() {
    char str[100], c;
    gets(str);
    scanf(" %c", &c);
    strchar(str, c);

    return 0;
}  
 */

  
/* #include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>

 int main()
 {
 
   float *a;
    printf("%d\n", sizeof(float));
    
    a  = (float *)malloc(100*sizeof(float));
    printf("%d\n", sizeof(a));

    float *b = (float *)malloc(500*sizeof(float));
    printf("%d\n", sizeof(b));
       
    float *d = (float *)malloc(2*sizeof(float));
    printf("%d\n", sizeof(d));
     return 0;
 } */
  

/* #include<stdio.h>
#include<string.h>


int main()
{
    char str[] = "Hello";
    char *pos = strchr(str, "ello");

    if(!pos) {
        printf("Not found.");
    }
    else {
        printf("Found at %d", pos-str);
    }

    return 0;
}  
 */

/* if(n==0 || n==1) {
        return true;
    }
 */
  
  
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool is_reverse_sorted(int arr[], int n) {
    
    for(int i=1; i<n; i++) {
        if(arr[i-1] < arr[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    if(is_reverse_sorted(arr,n)) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;

}   




 