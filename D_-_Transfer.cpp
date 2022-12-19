#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c; 
    cin >> a >> b >> c;
    
    if(b+c > a) {
        cout << (b+c) -a << endl;
    }
    else 
        cout << "0" << endl;

    return 0;
}