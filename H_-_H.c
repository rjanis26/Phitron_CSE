/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h> 
int main()
{
    int a, b; 
    scanf("%d %d", &a, &b);

    if(a + b >= 10) {
        printf("error\n");
    }
    else {
        printf("%d", a+b);
    }

    return 0;
} */


 /* 
 #include<stdio.h>
 #include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int count =0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i] = str[i+1]) {
            count++;
        }
    }

    
     
     
     if(count >7) {
         printf("YES\n");
     }
     else {

           printf("NO\n");
     }
      

 
    return 0;
}  
  */
 /* 
 #include<stdio.h>
 #include<string.h>

 int main()
 {
    char temp[] = "heidi";
    char str[1000];
    gets(str);

    int count=0;
    
    for(int i=0; i<strlen(str); i++) {
        if(str[i] == temp[count]) {
            count++;
        }

        if(count==5) {
            printf("YES\n");
            return 0;
        }
    }
    
    printf("NO\n");

    return 0;
 }
 
  */

 
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    gets(str);
    int on=0, off=0;

    for(int i=0; i<strlen(str); i++) {
        if(str[i] == '0') {
            off++;
            on =0;
            if(off==7) {
                printf("YES\n");
                return 0;
            }
            
        }

        if(str[i] == '1') {
            on++;
            off=0;
            if(on==7) {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");

    return 0;
}  






/* 

#include<stdio.h>
#include<string.h>

int main(){
   char str[100];
   gets(str);
   int count=0,count1=0;
   
   for(int i=0; i<strlen(str); i++){
       if(str[i]=='0'){
           count1++;
           count = 0;
           if (count1==7){
               printf("YES\n");
               return 0;
           }
       }
       if(str[i] == '1'){
           count++;
           count1=0;
           if(count==7){
               printf("YES\n");
               return 0;
           }
       }
   }
   printf("NO\n");
   return 0;
}





 #include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    scanf("%s",&arr);
    int zero=0;
    int one=0;
    for(int i=0; i<strlen(arr); i++)
    {
        if(arr[i]=='0')
        {
            zero++;
            one=0;
            if(zero==7)
            {
                printf("YES\n");
                return 0;
            }

        }
        if(arr[i]=='1')
        {
            one++;
            zero=0;
            if(one==7)
            {
                printf("YES\n");
                return 0;
            }
        }


    }
    printf("NO\n");

} */