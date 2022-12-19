#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#define srep(i,s) for(int i=0; i<strlen(s); i++)
#define sf(x) scanf("%d", &x)
#define ssf(c) scanf("%c", &c)

int main() 
{
      char s[105],s1[105];
     //scanf("%s%s", s, s1);
    gets(s);
    
    int re = strcmp(s,"Hello,World!");
    if(re==0) {
        printf("AC\n");
    }
    else {
        printf("WA\n");
    }

     
    return 0;  
    
}