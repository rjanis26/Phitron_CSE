#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, time, days_st, days_end;
    cin >> t;
    
    while(t--) {
        cin >> time >> days_st >> days_end;

        if(time < days_st) 
            cout << "Too Early" << "\n";
        else if(time >= days_st && time <= days_end )
            cout << "Take second dose now" << "\n";
        else 
            cout << "Too Late" << "\n";
    }




    return 0;
}