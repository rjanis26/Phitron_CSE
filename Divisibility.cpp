
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
   long arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

     
      if(arr[n-1]%10==0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
 
    
    return 0;
}

/*  if(arr[n-1]%10==0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
  */