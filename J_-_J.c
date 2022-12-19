/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h> 
int main()
{
    int x;
    scanf("%d",&x);

    if(x<1200){
        printf("ABC");
    }
    else{
        printf("ARC");
    }

    return 0;
} */
/* 
#include <stdio.h>
#include <string.h>
#include<ctype.h>
 
int main()
{
    char str[1000];
    gets(str);

    int i,count=0,j=strlen(str);

    for(i=0; i<j; i++)
    {
        if(str[i]==tolower(str[i]))
            count++;
    }

    if(count==0)
    {
        for(i=0; i<j; i++)
        {
            str[i]=tolower(str[i]);
        }
        puts(str);
    }

    else if(count==1 && str[0]==tolower(str[0]))
    {
        str[0]=toupper(str[0]);
        for(i=1; i<j; i++)
        {
            str[i]=tolower(str[i]);
        }
        puts(str);
    }
    else
    {
        puts(str);
    }

    return 0;
}



#include <stdio.h>
 #include<string.h>
 #include<stdlib.h>

int main () 
{
    int n;
    scanf("%d", &n);
    char s[100001];
    scanf("%s", &s);
    int ones = 0 , zeros = 0;
    for(int i =0 ; i< n ;i++)
    {
        if(s[i] == 'z') zeros++;
        else if (s[i]== 'n') ones++;
    }
    for(int i=0 ; i < ones ; i++){
        if(i== (ones-1) && zeros == 0){
            printf("1 ");
        } else printf("1 ");
    }
    for( int i= 0; i<zeros ;  i++){
        if( i == zeros-1) {
            printf("0 ");
        } else  {
           printf("0 ");
        }
    }
    return 0;
}



#include <stdio.h>
#include <string.h>
#include<ctype.h>
 
int main()
{
    char str[1000];
    gets(str);

    int i,count=0,j=strlen(str);

    for(i=0; i<j; i++)
    {
        if(str[i]==tolower(str[i]))
            count++;
    }

    if(count==0)
    {
        for(i=0; i<j; i++)
        {
            str[i]=tolower(str[i]);
        }
        puts(str);
    }

    else if(count==1 && str[0]==tolower(str[0]))
    {
        str[0]=toupper(str[0]);
        for(i=1; i<j; i++)
        {
            str[i]=tolower(str[i]);
        }
        puts(str);
    }
    else
    {
        puts(str);
    }

    return 0;
} */
/* 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){

    char s[1001];
    scanf("%s", &s);
    char str[] = "hiedi";
    bool fake = false;
    int ind = 0;
    for(int p = 0; p < strlen(str); p++){
        if(s[p] == str[ind]){
            ++ind;
        }
        if(ind == 5){
            fake = true;
            break;
        }
    }

    if (fake) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
} */


#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str[10001];
    gets(str);          

 
    bool convert = true;
   
    for(int i=1; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            convert = false;
            break;
        }
    }

     
    if(convert)  {
        for(int i=0; i<strlen(str); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
            }
            else {
                str[i] += 32;
            }
        }
    }

    puts(str);

     
    return 0;
}  

 

 