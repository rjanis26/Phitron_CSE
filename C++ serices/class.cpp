/* #include<bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int count (char *str1, char *str2) {
    int c, k, max = 0, n1 = strlen(str1), n2 = strlen(str2);

    FOR(i, n1) 

    {
        FOR(j, n2)

        {
            if (str1[i] == str2[j]) {

                c = 0;
                for (k = 0; (k + j) < n2; k++) 
                {
                    if (str1[k+i] != str2[k+j])

                        break;

                    c++;

                }

                if (c > max)

                    max = c;

            }

        }

    }

    return max;

}

 

int main(int argc, char const *argv[])

{

    char str1[101], str2[101];

 

    while (cin.getline(str1, 101)) 

    {

        cin.getline(str2, 101);

        cout << count(str1, str2) << '\n';

    }

  return 0;

}
 */

/* #include<iostream>
using namespace std;

int reverse(int arr[], int start, int end);
int main(void){
    int n;
    cout << "\nEnter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the Element of array: ";
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    cout << "\nOrginal array: ";
    for(int i = 0; i < n; i ++){
        cout <<  arr[i] << " ";
    }

    reverse(arr, 0, n-1);
    cout <<"\n\nReversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
 
}

int reverse(int arr[], int start, int end){
    int temp;
    if(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        reverse(arr, start+1, end-1);
    }
    return 0;
} 
  */
/* 
  #include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

void count_freequency(int arr[], int n) {
    vector<bool> visited(n, false);

    rep(i,n) {
        if(visited[i] == true) 
            continue;

        int count=1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]== arr[j]) {
                visited[j]==true;
                count++;
            }
        }
        cout << arr[i] << " " <<count << endl;
    }
}

int main() 
{
    ios_base::sync_with_stdio(false); // using for input and output .....
    cin.tie(0);
    cout.tie(0);

    int arr[] = {10, 5, 10, 15, 10, 5}; // array size of the number of operator is calld
    int len= sizeof(arr)/sizeof(arr[0]);

    count_freequency(arr, len);
 
    return 0;
}   */
/* 
#include<iostream>

using namespace std;

int main(){

int t;

cin>>t;


 

while(t--)

{

int n,m; // rows, cols

cin>>n>>m;


 

char arr[n][m];

// taking 2d char array input

for(int i=0; i<n; i++){

for(int j=0; j<m; j++){

cin>>arr[i][j];

}

}


 

int ans=0; // to store final result

for(int i=0; i<n; i++){

int count = 0;

for(int j=0; j<m; j++){


 

if(arr[i][j] == '#') count++;

else continue;

}

// update ans for that row if, current row

// has count of '#' more than previous row;

if(count > ans) ans = count;


 

}

cout<<ans<<endl; //print maximum #

}

    

}

 */ 


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