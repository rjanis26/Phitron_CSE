#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++) {
        int a, b; 
        cin >> a >> b; 
        
        cout << "Case " << i << ": " << a+b << endl;
    }

    return 0;
}