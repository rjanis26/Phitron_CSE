/* #include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>
#define srep(i,s) for(int i=0; i<strlen(s); i++)
 

 int main() 
{
      char s[105],s1[105];
     scanf("%s%s", s, s1);
    for(int i=0;i<strlen(s);i++)
        s[i] = tolower(s[i]) , s1[i] = tolower(s1[i]);
    
    int ret = strcmp(s,s1);

    if(ret<0) {
        printf("Yes\n");
    }
    else if(ret >0) {
        printf("No\n" );
    }
    return 0;  
    
} */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<ctype.h>


int main()
{
    char s[100], s2[100];
    scanf("%s%s", s, s2);

    for(int i=0; i<strlen(s); i++) {
        s[i] = tolower(s[i]), s2[i]= tolower(s2[i]);
    }

    int ret = strcmp(s, s2);
    
    if(ret<0) {
        printf("Yes");
    }
    else if(ret > 0) {
        printf("No");
    }
    return 0;
}