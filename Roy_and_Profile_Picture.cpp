#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n); i++) 
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    

    
   int n, len; cin>> n >> len;
    int arr[1000], arr2[1000];

    rep(i,len) {
        cin>> arr[i] >> arr2[i];
    }

    rep(i,len) {
        if(arr[i] < n or arr2[i] <n) {
            cout<<"UPLOAD ANOTHER" << endl;
        }
        else if(arr[i] == arr2[i]) {
            cout <<"ACCEPTED" << endl;
        }

        else {
            cout<<"CROP IT"<< endl;
        }
    }
  
    return 0;
}

