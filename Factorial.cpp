/* #include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n; i++) 
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int fact=1;

    for(int i=1; i<=n; i++) {
        fact= fact*i;
    }
    cout << fact << endl;
    
    return 0;

} */


  #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t; cin>>t;
    while(t--) {
        int n; 
        cin>>n;

        int count=0;
        while(n) {
            if((n&1)!=0) {
                count++;
            }
            n = n>>1;
        }
        cout<<count << endl;
    }
 
    return 0;
}  


/* #include<bits/stdc++.h>
using namespace std;

int countSetBit(unsigned int n) {
    int count =0;
    while(n) {
        n = n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int t; cin>>t;
    while(t--)  {
        unsigned int n; cin>>n;
        cout<< countSetBit(n)<<endl;
    }

} */