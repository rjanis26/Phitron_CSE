#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, y;
    cin>> t;

    while(t--) {
        cin >> x >> y;
        int val = x + y;
        if(val >= 11) {
            cout << 21 - val<< "\n";
        }
        else {
            cout << -1 << endl;
        }
    }


    return 0;
}