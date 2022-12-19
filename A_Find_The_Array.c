/* #include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define rep(i,n) for(int i=0; i<(n);i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define ll long long int
#define sf(x) scanf("%d", &x)
 
int main()
{ 
    int t;
    sf(t);
    
    while(t--) {

        int n; sf(n);
        int sum=0;
        int count=0;
        int i=1;
        while(sum < n) {
            count++;
        sum += i;
        i += 2;
    }
    printf("%d\n", count);
 }
 
    return 0;
} */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define rep(i,n) for(int i=0; i<(n);i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define ll long long int
#define sf(x) scanf("%d", &x)
 
int main()
{ 
    int t;
    sf(t);
    
    while(t--) {

        int n; sf(n);
        int i=1;
        while(i*i < n) {
            i++;
        
    }
    printf("%d\n", i);
 }
 
    return 0;
}

