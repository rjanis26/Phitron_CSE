#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, x, k;
    cin >> t;

    while(t--) {
        cin >> n >> x >> k;
        if(k/x > n) {
            cout << n <<"\n";
        }
        else {
            cout << k/x << "\n";
        }
    }

    return 0;
}