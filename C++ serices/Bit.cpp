
/* https://www.techiedelight.com/bit-hacks-part-2-playing-kth-bit/ */
// check even/ odd...

/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    unsigned int n; cin>>n;

    if(n&1) {
        cout<< n<<" is odd"<< endl;
    }
    else cout<< n<< " is even"<< endl;


    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    int x = 4;
    int y = -8;

    cout << x << " in binary is " << bitset<32>(x) << endl;
    cout<< y << " in binary is " << bitset<32>(y) << endl;

    bool isOpposite = ((x^y) <0);

    if(isOpposite) 
        cout << x<< " and " << y << " have oppostie sign" << endl;
    else 
        cout<< x << " and " << y << " don't have opposite site." << endl;
    return 0;
}   */


// swap two numbers without usign third varriable..
/* 
  #include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y) {
    if(x != y) {
        x = x^y;
        y = x^y;
        x = x^y;
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    
    int x, y; cin>>x>>y;
    cout << "x = " << x << " , y = "<< y<<endl;
    swap(x,y);
    cout << "x = " << x << " , y = "<< y<<endl;


     
    return 0;
}  
 */
// Kth bit off...

/* #include<bits/stdc++.h>
using namespace std;

int turnOffKth_bit(int n, int k) {
    return n & ~(1 <<(k-1));
}

int main()
{
    int n=7;
    int k =2;

    cout << n<< " in binary is "<< bitset<8>(n) << endl;
    cout <<"turning Kth bit off"<< endl;

    n = turnOffKth_bit(n,k);
    cout<< n << " in binary is "<< bitset<8>(n) << endl;


    return 0;
} */

// Kth bit onn...
/* #include<bits/stdc++.h>
using namespace std;

int turnOnKth_bit(int n, int k) {
    return n|(1<<(k-1));            
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    // int n=20;
    // int k= 4;

    int n, k; cin>>n >>k; 

    cout << n << " in binary is " << bitset<8>(n) << endl;
    cout << "turing on" <<endl;
    n = turnOnKth_bit(n,k);
    cout<< n << " in binary is " << bitset<8>(n) << endl;

    return 0;
}   */

//Kth bit set or not...

/* #include<bits/stdc++.h>
using namespace std;

bool isKthBitSet(int n, int k) {
    return (n&(1<<(k-1))) !=0;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    
    // int n=20;
    // int k=3;

    int n, k; cin>>n>>k;

    cout<< n << " is binary is: " << bitset<8>(n) << endl;
    
    if(isKthBitSet(n,k)) 
        cout<<"Kth bit is set" <<endl;
    else 
        cout<< k <<" Kth bit is not set" << endl;
    return 0;
} 
 */

// check power of two..

/* #include<bits/stdc++.h>
using namespace std;

// bool isPowerOfTwo(int n) {
//     // if(n<=0) 
//     //     return false;
//     // if((n&(n-1))==0) 
//     //     return true;
//     // else return false;
    
//     return !(n&(n-1));
// }

// another approch..

bool isPowerOfTwo(int n) {
    if(n<=0) {
        return false;
    }
    int count =0;

    while(n) {
        if((n&1)!=0) {
            count++;
        }
        n = (n>>1);
    }
    if(count==1) 
        return true;
    else return false;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    unsigned int n; cin>>n;
    if(isPowerOfTwo(n))
        cout<<"True" <<endl;
    else 
        cout<<"False" << endl;

    return 0;
}   */

// find the most right set bit...

/*  #include<bits/stdc++.h>
using namespace std;

// int positionOfRightmostSetBit(int n)
// {
//     // if the number is odd, return 1
//     if (n & 1) {
//         return 1;
//     }
 
//     // unset rightmost bit and xor with the number itself
//     n = n ^ (n & (n - 1));
 
//     // find the position of the only set bit in the result;
//     // we can directly return `log2(n) + 1` from the function
//     int pos = 0;
//     while (n)
//     {
//         n = n >> 1;
//         pos++;
//     }
//     return pos;
// }
 

int positionMostRightsetBit(int n) {
    if(n&1)
        return 1;
    return log2(n&-n)+1;
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    
    unsigned int n; cin>>n;
    cout<< n << " Binary: " << bitset<8>(n) << endl;
    //cout<< "Position right most bit: " << positonOfRightmostSetbit(n) << endl;

    cout<<"Position: " << positionMostRightsetBit(n) <<endl;


    return 0;
}   */

/* #include<bits/stdc++.h>
using namespace std;

int countSetBit(int n) {
    int count =0;
    while(n!=0) {
        if((n&1)!=0) {
            count++;
        }
        n = (n>>1);
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    unsigned int n;
    cin>>n;

    cout<<n << "Binary: "<< bitset<8>(n)<<endl;
    cout<< "Total: "<< countSetBit(n) <<endl;


    return 0;
} */


// alternative answer..

/* #include<bits/stdc++.h>
using namespace std;

int countSetBit(int n) {
    int count=0;
    while(n) {
        count+=(n&1);
        n>>=1;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    unsigned int n;
    cin>>n;

    cout<<n << " Binary: "<< bitset<8>(n)<<endl;
    cout<<"Total: "<< countSetBit(n) <<endl;    


    return 0;
} */

// Using Brian Kernighan's algorithm

/* #include<bits/stdc++.h>
using namespace std;

 int countSetBits(int n) {
    int count =0;
    while(n) {
        n = n & (n-1);
        count++;
    }
    return count;
 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    unsigned int n; cin>>n;
    
    cout<< n <<" Binary: " << bitset<8>(n) <<endl;
    cout<< "Total: " << countSetBits(n) << endl;
 
    return 0;
}

 */
/* 
#include<bits/stdc++.h>
using namespace std;

bool isPowerOf4( unsigned int n) {
    return !(n&(n-1) && (n%3==1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    unsigned int n; cin>>n;

    if(isPowerOf4(n)) 
        cout<<n << " is power of 4.";
    else 
        cout<< n<<" is not power of 4.";



    return 0;
} */

/// Print Binary representtation of a number..
/* 
  #include<bits/stdc++.h>
using namespace std;

 string toBinary(int n, int len) {
    string binary;
    for(unsigned int i=(1<<len-1); i>0; i/=2) {
        binary += (n&i) ? "1" : "0";
    }
    return binary;
 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    
    int n; cin>>n;
    int len;  cin>>len;

    cout<<n << " Binary form: "<<toBinary(n, len) <<endl;
    

    return 0;
}
 */
  
/* #include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) {
    int miss=0;
    for(int i=0; i<n; i++) {
        miss= miss^arr[i];
    }

    for(int i=0; i<=n+1; i++) {
        miss=miss^i;
    }
    return miss;
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    int arr[] = {1, 2 , 3, 5, 6, 7};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout << "Missing number: "<<findMissing(arr,n) << endl;
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"       
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(nullptr);
 
bool isPalindrome(unsigned n) {
    unsigned rev=0;

    unsigned k=n;

    while(k) {
        rev = (rev << 1) | (k&1);
        k = k>>1;
    }
    return n==rev;
}

int main()
{
    fast;

    int n; cin>>n;
    if(isPalindrome(n))
        cout<< n<<" binary " << bitset<8>(n) <<" is palndrome" << endl;
    else 
        cout<<n <<" Binary " << bitset<8>(n)<< " is not palindrome" << endl;
 
    return 0;
}
 */
  
 /* 
#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
#define endl "\n"

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b; cin>> a >> b;
    ll ans = abs(a-b);
    cout<< ans << endl;
 
    return 0;
}

  */
 