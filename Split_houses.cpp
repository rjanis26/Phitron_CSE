  /* #include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n); i++) 
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    

    int n; cin>>n;

    char str[n];
    for(int i=0; i<n; i++) {
        cin>>str[i];
    }

    int flag=0;

    rep(i,n) {
        if(str[i]=='H' && str[i+1]=='H' || str[i]=='H' && str[i-1]=='H') {
            flag=1;
            break;
        }
        else {
            if(str[i]=='.'){
                str[i]='B';
            }
        }
    }
    if(flag==1) {
        cout<< "NO" << endl;
    }
    else {
        cout<< "YES" << endl;
    }

    rep(i,n){
        cout<< str[i] ;
    }

 
    return 0;
}  
   
 

  /* #include<bits/stdc++.h>

using namespace std;

int main(){

int n;cin>>n;

char str[n];

for(int i=0;i<n;i++){

cin>>str[i];

 

}

int flag=0;

for(int i=0;i<n;i++){

if(str[i]=='H'&&str[i+1]=='H'){

 flag=1;

 break;

}else{

 if(str[i]=='.'){

  str[i]='B';

 }

}

}

if(flag==1){

cout<<"NO";

}else{

cout<<"YES"<<endl;

for(int i=0;i<n;i++){

 cout<<str[i];

}

}

} */


 #include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n); i++) 
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    
    
    int n; cin>>n;
    int cnt =0;
    char str[n];
    rep(i,n) {
        cin>>str[i];

        if(str[i]=='H')  
            cnt+=1;
        
        else  
            cnt=0;
     
        if(cnt >1) {
            cout<< "NO" ;
            return 0;
        }
        if(str[i]=='.') {
            str[i]= 'B';
        }
        
    }
    cout<< "YES" << endl;
    rep(i,n) {
        cout<< str[i];
    }

    
    
 
    return 0;
}  

  
 