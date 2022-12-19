/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int freq[2001];
int main()
{   
    int n,num, c; 
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &num);
        freq[num]++;
    }

    // for(int i=0; i<10; i++) { 
    //     printf("%d %d\n", i, freq[i]);
    // }

    for(int i=0; i<=2000; i++) {
        if(freq[i]==0) {
            printf("%d", i);
            break;
        }
    }


    return 0;

} */

 
/* #include<stdio.h>
#include<string.h>

int main()
{
    int n, num;
    scanf("%d", &n);
    int freq[2001]={0};  

    for(int i=0; i<n; i++) {
        scanf("%d", &num);
        freq[num]++;
    }
    for(int i=0; i<=200; i++) {
        if(freq[i]==0) {
            printf("%d", i);
            break;
        }
    }

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{   
    
    int n, count=0;
    scanf("%d",&n);
    int arr[1001], perm[1001]={0};
     
    for(int i=0;i<n; i++) {
        scanf("%d",&arr[i]);
         int x=arr[i];
         perm[x]++;
    }

    for(int i=1; i<=n; i++) {
        if(perm[i]==0) {
            printf("No\n");
            count++;
            break;
        }
    }
    
    if(count==0) {
        printf("Yes\n");
    }


    return 0;
} */

#include<stdio.h>
#include<string.h>

int main()
{

    int n; scanf("%d", &n);
    int freq[1000] = {0};
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for(int i=0; i<1000; i++) {
        if(freq[i] != 0) {
            for(int j=1; j<=freq[i]; j++) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");


    return 0;
}
