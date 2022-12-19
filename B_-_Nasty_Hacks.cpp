
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int r, e, c; 
        cin >> r >> e >> c; 

        int profit = e - c; 
        if(profit > r) 
            cout << "advertise" << endl;
        else if(profit == r) 
            cout << "does not matter" << endl;
        else 
            cout << "do not advertise" << endl;

    }

    return 0;
}