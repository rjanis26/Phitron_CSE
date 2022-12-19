#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n; i++) 
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int l,r,k;
    cin>>l >> r >> k;

    int count=0;
    for(int i=l; i<=r; i++) {
        if(i%k==0) {
            count++;
        }
    }

    cout<< count<< endl;

    return 0;

}