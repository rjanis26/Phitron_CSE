#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int a, b, c, d;
        cin>> a >> b >> c >> d;
        cout<< (max(a, b) + max(c,d)) << endl;
    }

 
    return 0;
}