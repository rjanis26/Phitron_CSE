#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void solve() {
    int a, b; 

    int t; scanf("%d", &t);
    for(int i=1; i<= t; i++) {
        scanf("%d%d", &a, &b);   
            printf("Case %d: %d\n", i, a+b);
    }
}

int main() 
{

    solve();
    // int t; scanf("%d", &t);
    // for(int i=1; i<=t; i++)  {
    //     int a, b;
    //     scanf("%d%d", &a, &b);
    //         printf("Case %d: %d\n", i, a+b);
       
    // }


    return 0;
}