 #include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
   cin>>n;
   int arr[n];
   int f = 0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       
   }
   for(int i = 0;i<n;i++)
   {
       if(arr[i]!= arr[0])
       {
           cout<<"1\n";
           return;
       }
   }
   cout<<n<<"\n";
   return;
}
 
int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}