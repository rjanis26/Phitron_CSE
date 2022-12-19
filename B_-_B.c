/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


int main()
{   
    int t;
    scanf("%d", &t);


    for(int i = 1 ; i<= t; i++) {
        printf("%d Abracadabra\n", i);
    
    }

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{ 
    char s[256];
    gets(s);
    int count_up=0, count_lo=0;
    int n= strlen(s);
    for(int i=0; i<n; i++) {
        if(isupper(s[i])) {
            count_up++;
        }
        else {
            count_lo++;
        }
    }

    if(count_up > count_lo) {
        char ch;
        for(int i=0; i<n; i++) {
            ch = toupper(s[i]);
            printf("%c", ch);
        }
    }
    else {
        char ch;
        for(int i=0;i<n; i++) {
            ch = tolower(s[i]);
            printf("%c", ch);
        }
    }

    return 0;
} */


 
/* 
 #include<stdio.h>
 #include<string.h>

 int main()
 {

    char str[1001];
    gets(str);

    int count=0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i] == str[i+1]) {
            count++;
        }
    }

    printf("%d",count);

     return 0;
 } */


 #include<stdio.h>
 #include<string.h>

 void swap(int *a, int *b) {
     int temp = *a;
  *a = *b; 
  *b = temp;
 }

 void print_array(int arr[], int n) {
     for(int i=0; i<n; i++) {
         printf("%d ", arr[i]);
     }
 }

 void reverse_array(int arr[], int n ) {
    int low = 0, high = n-1;
    while(low < high) {
        swap(&arr[low++], &arr[high--]);
    }
 }

 int main()
 {
    int n; scanf("%d", &n);
    int arr[n+2];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr,n);
    print_array(arr,n);

 
    return 0;
 }