#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>

 

 int main() 
{
      char s[105],s1[105];
     scanf("%s%s", s, s1);
    for(int i=0;i<strlen(s);i++)
        s[i] = tolower(s[i]) , s1[i] = tolower(s1[i]);
    
    int ret = strcmp(s,s1);

    if(ret<0) {
        printf("%d",-1);
    }
    else if(ret >0) {
        printf("%d", 1);
    }
    else {
        printf("%d",0);
    }
    return 0;  
    
}





 
/* #include <stdio.h>
#include<string.h>
#include<stdlib.h>


void compare(int a, int b, int &add_great, int &add_small)
{
	if (a > b) {
		add_great = a;
		add_small = b;
	}
	else {
		add_great = b;
		add_small = a;
	}
}

 
int main()
{
	int great, small, x, y;
	scanf("%d%d", &x, &y);

	 
	compare(x, y, great, &small);
	printf(great, small);

	return 0;
}
 */


 #include <iostream>

using namespace std;

int main() {

    int n; cin>>n; char v[n]; int h=0;

for (int i = 0; i < n; i++){

cin>>v[i];

if( v[i]=='H') 
h+=1; 
else h=0; 
if(h>1) {
     cout<<"NO"; return 0; 
     }

if(v[i]=='.') 
v[i]='B';

}

cout<<"YES"<<endl;

for (int i = 0; i < n; i++)

{

    cout<<v[i];

}

}