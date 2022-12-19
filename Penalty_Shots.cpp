#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>> t;
    while(t--) {
        int score = 0;
        int team1 = 0, team2 = 0;

        for(int i = 1; i <= 10; i++) {
            cin >> score ;
            if(i % 2 == 0) 
                team2 += score;
            else 
                team1 += score;
        }
        if(team1 == team2) 
            cout << 0 << "\n";
        else if(team1 > team2) 
            cout << 1 << "\n";
        else 
            cout << 2 << "\n";
    }

    return 0;
}