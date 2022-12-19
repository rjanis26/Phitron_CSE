// Using  Euclid Algorithm

/* #include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int a, b; 
        cin>>a>> b; 
        int ans = gcd(a, b);
        cout << ans << endl;
    }

    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b; 
    cin >> a>>b; 

    int gcd = 1;
    for(int i=1; i<= a and i<=b; i++) {
        if(a%i==0 and b%i==0) {
            gcd= i;
        }
    }

    cout << gcd << endl;

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {   // Uclid algorithm...
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main()
{   
    int a, b; 
    cin>>a>>b; 

    int ans = gcd(a, b);
    cout << ans<< endl;

    return 0;
} */

// GCD find using array...  
  #include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {   // Uclid algorithm...
    if(b==0) return a;
    else return gcd(b, a%b);
}

int findGcd(int arr[], int n) {
    int ans = arr[0];
    for(int i=1; i<n; i++) {
        ans = gcd(arr[i], ans);

        if(ans == 1) return 1;
    }
    return ans;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[] = {2, 4, 6, 8, 16};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << findGcd(arr, len) << endl;

    return 0;
}
  



/* #include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b) {    // this function return gcd of two nums..
    if(b==0) return a;
    else return gcd(b, a%b);
}

ll lcm(int a, int b) {   // this function return lcm of two nums.
    return (a/gcd(a,b))*b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b; 
    cin >> a >> b;
    cout << "Lcm: " << lcm(a, b) << endl;

    return 0;
}
 */


// lcm arrray element..
/* #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(int a, int b) {
    // return b==0 ? a : gcd(b,a%b);
    if(b==0) return a;
    else return gcd(b, a%b);
}

ll findLcm(int arr[], int n) {
    ll ans = arr[0];
    for(int i=1; i<n; i++) {
        ans = (arr[i] *ans)/(gcd(arr[i], ans));
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // int arr[] = {2, 7, 3, 9, 4};
    // int len = sizeof(arr)/sizeof(arr[0]);
    int len;
    cin >> len;
    int arr[len];
    for(int i=0; i<len; i++) cin>> arr[i];

    cout << findLcm(arr, len);

    return 0;
}
 */


/* #include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b==0 ? a : gcd(b,a%b);
}

int main()
{

    int x, y =- 1;
    cout << "Enter numbers. To exit enter 0: ";

    while(1)    // infinite loop to take input
    {
        cin >> x;
        if(x < 1)
            break;
        else if(y ==- 1)    // only 1 number entered, its GCD is itself
            y = x;
        else if(x < y)
            y = gcd(x, y);
        else
            y = gcd(y, x);
    }
    cout << "Gcd of all enters numbers: " << y << endl;

    return 0;
} */



















