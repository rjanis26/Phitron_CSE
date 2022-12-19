#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char str[21];
    cin.getline(str,21);

    int z=0, o=0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i]=='z') {
            z++;
        }
        if(str[i]=='o') {
            o++;
        }
    }
     
     if(2*z== o) {
        cout<< "Yes" << endl;
     }
     else {
         cout << "No" << endl;
     }

    return 0;
}