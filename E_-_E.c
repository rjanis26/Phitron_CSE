/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int x, y, n;
    scanf("%d %d %d", &x, &y, &n);

    for(int i = 1; i <= n; i++) {
        if(i % x == 0 && i % y == 0) 
            printf("FizzBuzz\n");
        else if(i%x == 0)
            printf("Fizz\n");
        else if(i%y ==0)
            printf("Buzz\n");
        else 
            printf("%d\n", i);
    }

    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int t, n, arr[1000]; 
    scanf("%d", &t); 

    while(t--) {
        scanf("%d", &n);
        for(int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }
        int odd=0, even=0;
        for(int i=0; i<n; i++) {
            if(i%2 != arr[i]%2) {
                if(arr[i]%2==1) {
                    odd++;
                }
                else {
                    even++;
                }
            }
        }
        if(odd==even) {
            printf("%d\n", even);
            
        }
        else {
              printf("-1\n");
        }
    }

    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>

void solve() {
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int count =0;
    int min = arr[0], max = arr[0];
    
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            count++;
        }
       if(arr[i] < min) {
            min = arr[i];
            count++;
        }
        
        
    }
    printf("%d", count);
}

int main() {

    solve();

    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>

int main()
{
    int n; scanf("%d", &n);

    int sum = 0;

    while(n != 0) {
        int digit = n%10;
        sum += digit;
        n/=10;
    }

    printf("%d", sum);



    return 0;
} */


#include<stdio.h>
#include<string.h>
#define ll long long int

void solution() {
    
    ll m, n, b;
    ll count = 0, ans=0;
    char str[1000];
    int t; scanf("%d", &t);

    while(t--) {

        count=0, ans=0;
        ll cn=0;
        scanf("%d %s", &n, &str);


        for(int i=0; i<n; i++) {
            if(str[i] == '8')  
                break;
            else 
                cn++;
        }
        ans = n-cn;
    }
    if(ans>=11) 
        printf("YES\n");
    else 
        printf("NO\n");
}

int main()
{
        
    solution();

    return 0;
}