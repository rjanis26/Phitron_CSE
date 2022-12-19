#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if(b != a or c != a)
            cout << 1 << "\n";
        else 
            cout << 0 << "\n";
    }



    return 0;
}