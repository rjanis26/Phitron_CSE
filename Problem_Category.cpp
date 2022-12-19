#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x , T;
    cin >> T;
    
    while(T--) {
            cin >> x;
            if(x >= 1 && x < 100 ) {
            cout << "Easy" << endl;
        }
        else if(x >= 100 && x < 200) {
            cout << "Medium" << endl;
        }
        else {
            cout << "Hard" << endl;
        }
    }
    return 0;
}

/* 
Easy if 1≤x<100

2) Medium if 100≤x<200

3) Hard if 200≤x≤300

 */