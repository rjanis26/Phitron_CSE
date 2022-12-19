#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // string str;
    // cin>> str;

    // for(int i=0; i<str.size(); i++) {
    //     if(str[i]>='a' && str[i]<='z') {
    //         str[i] = toupper(str[i]);
    //     }
    //     else {
    //         str[i] = tolower(str[i]);
    //     }
    // }  

    // for(int i=0; i<str.size(); i++) {
    //     if(islower(str[i])) {
    //         str[i] = toupper(str[i]);
    //     }
    //     else {
    //         str[i] = tolower(str[i]);
    //     }
    // }

    string str;
    cin>> str;

    for(int i=0; i<str.size(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') 
            str[i] -= 32;
        else  
            str[i] += 32;
    }
 
    for(int i=0; i<str.size(); i++) 
        cout<< str[i];



   return 0;
}