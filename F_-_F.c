/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a == 5 && b ==5 && c ==7){
          printf("YES\n");
    }
    else{
          printf("NO\n");
    }
    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
     
     int n; scanf("%d", &n);
      int arr[n], arr2[n];

      int m = 0, c= 0;

      for(int i=0; i<n; i++) {
            scanf("%d %d", &arr[i], &arr2[i]);
            if(arr[i] > arr2[i]) {
                  m++;
            }
                 
            if(arr[i] < arr2[i]) {
                  c++;
            }
                  
      }

      if(m < c) 
            printf("Mishka\n");

      if(m==c) 
            printf("Friendship is magic!^^");
      
      else if(m < c) 
            printf("Chris\n");;


    return 0;
} */


/*  
#include<stdio.h>
#include<string.h>

int main()
{
    int t,n, flag;
    scanf("%d", &t);

    while(t--) {

        flag = 0;
        char str[1000];
        scanf("%d %s", &n, str);
        

        for(int i=0; i<n; i++) {
            if(str[i] == '8' && n-i>=11) {
                flag = 1;
                break;
            }
        }

        if(flag==1 && n >=11) {  

            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
 
    }
 
    return 0;
}
 */

#include<stdio.h>
#include<string.h>
#define ll long long int

int main()
{
      int t, n; 
      scanf("%d", &t);
      char str[100];

      while(t--) 
      {     
            ll ans=0, count=0;
            scanf("%d %s", &n, str);

            for(int i=0; i<strlen(str); i++) {
                  if(str[i] == '8') 
                        break;
                  else 
                        count++;
                  
            }

            ans= n-count;

                  if(ans >= 11) 
                        printf("YES\n");
                  else 
                        printf("NO\n");
      }
 

      return 0;
}

/* 
 #include<stdio.h>
 #include<string.h>
  
 int main()
 {   
    char str[1001];
    scanf("%s",  str);
    int count[11] = {0};
    
    for(int i=0; i<strlen(str); i++) {
        if(str[i]>='0' && str[i] <= '9') {
            int val = str[i];
            count[val-'0']++;
        }
    }

    for(int i=0; i<10; i++) {
        printf("%d ", count[i]);
    }
     
    return 0;
 } */