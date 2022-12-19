/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int cost = 0;
    if(a >= b && a >= c) {
        cost = b + c;
        printf("%d", cost);
    }
    else if(b >= a && b >= c) {
        cost = a +c; 
        printf("%d", cost);
    }
    else if(c >=  b && c >= a) {
        cost = b + a;
        printf("%d", cost);
    }

     return 0;
 }

  */

 /* #include<stdio.h>
 #include<string.h>

int main()
{

    int n; scanf("%d", &n);
    char str[100];
    int count;
    while(n--) {
        count=0;
        scanf("%s", &str);

        int len = strlen(str);
        if(len%2==1) {
            printf("NO\n");
            return;
        }

        int j= len/2;
        int i=0;
        while(j<n) {
            if(str[i] != str[j]) {
                printf("NO\n");
                return  ;
            }
            i++;
            j++;
        }

        printf("YES\n");
        return ;
         

    }

    return 0;
} */

/* 
 #include <stdio.h>
 #include<string.h>
 #include<stdlib.h>

int main () 
{
    int n;
    scanf("%d", &n);

    char s[100001];
    scanf("%s", &s);

    int ones = 0 , zeros = 0;

    for(int i =0 ; i< n ;i++) {
        if(s[i] == 'z') zeros++;
        else if (s[i]== 'n') ones++;
    }

    for(int i=0 ; i < ones ; i++){
        if(i== (ones-1) && zeros == 0){
            printf("1 ");
        } else printf("1 ");
    }

    for( int i= 0; i<zeros ;  i++) {
        if( i == zeros-1) {
            printf("0 ");
        } else  {
           printf("0 ");
        }
    }

    return 0;
} */

 
#include<stdio.h>
#include<string.h>
#define ll long long int

int main()
{
    char str[100001];
    ll n;
    scanf("%d %s", &n, str);

    ll one=0, zero=0;

    for(int i=0; i<strlen(str); i++) {
        if(str[i] == 'z') {
            zero++;
        }

        else if(str[i] == 'n') {
            one++;
        }
    }

    for(int i=0; i<one; i++) {
        printf("1 ");
    }
    
    for(int i=0; i<zero; i++) {
        printf("0 ");
    }
     

    return 0;
}
  





