
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#define ll long long int
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define srep(i,s) for(int i=0; i<strlen(s); i++)
#define sf(x) scanf("%d", &x)
#define ssf(c) scanf("%c", &c)

void solve() {
    ll n; 
    scanf("%lld", &n);
    char s[105];
    gets(s);
    
    ll a[26] = {0}, j=0;
    fr(i,0,n) {
        a[s[i] - 'A']++;
        if(a[s[i] - 'A'] > 1 && s[i-1] != s[i]) {
            j=1;
            break;
        }
    }
    if(j==0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}

int main() 
{
    ll t;  
    scanf("%lld", &t);
    while(t--) {
        solve();
    }
 
    return 0;  
    
}


/* #include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define F first
#define S second
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
void solve()
{
    ll n;
    std::cin >> n;
    string s;
    cin >> s;
    ll a[26] = {0}, j = 0;
    fr(i, 0, n)
    {
        a[s[i] - 'A']++;
        if (a[s[i] - 'A'] > 1 && s[i - 1] != s[i])
        {
            j = 1;
            break;
        }
    }
    if (j == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    fast;
    ll t = 1;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
} */