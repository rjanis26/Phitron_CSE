
 /* 
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    string s;
    cin>>n>>s;
     ll cnt=0,zro=0;

    fr(i, l(s))
    {
        if(s[i]=='z')zro++;
        else if(s[i]=='n')cnt++;
    }
    fr(i, cnt)cout<<1<<" ";
    fr(i, zro)cout<<0<<" ";

return 0;
} */


#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    string str;
    cin>> n >> str;

    ll one(0), zero(0);

    for(int i=0; i<str.size(); i++) {
        if(str[i] == 'z') 
            zero++;
        else if(str[i] =='n') one++;
    }

    while(one--) cout<< 1 <<" ";
    while(zero--) cout<< 0 <<" ";


    return 0;

}