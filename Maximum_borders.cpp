#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    char arr[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++) {
        int count=0;
        for(int j=0; j<m; j++) {
            if(arr[i][j]=='#') {
                count++;
            }
            else continue;
        }
        if(count>ans) 
            ans = count;
         
    }
    cout << ans << endl;
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        solve();
    }
 
    return 0;
}