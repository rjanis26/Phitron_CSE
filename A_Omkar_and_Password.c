#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define rep(i,n) for(int i=0; i<(n);i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define ll long long int
#define sf(x) scanf("%d", &x)

void solve() {
    int n;
    sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }  

    rep(i,n) {
        if(arr[i] != arr[0]) {
            printf("%d\n", 1);
            return;
    }
}
    printf("%d\n", n);
    return;

}
int main()
{

    int t;
    sf(t);
    while(t--) {
        solve();
    }

    return 0;
}