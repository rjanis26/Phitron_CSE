/* #include<stdio.h>
#include<string.h>

int main()
{

    char a[500];
    char b[500];
    int c=0;
    gets(a);
    int d=strlen(a);
    for(int i=0,j=0;i<d;i++){
        if(a[i]<=90){
            a[i]=a[i]+32;
        }
        if(a[i]=='a' || a[i]=='e' || a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'){
            continue;
        }
        b[j]=46;
        j++;
        b[j]=a[i];
         
        printf("%c%c", b[j-1], b[j]);


    }

    return 0;
} */

/* 

 #include<stdio.h>
 #include<string.h>

long long int sum_of_array(int arr[], int n) {
    long long int sum=0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

 int main()
 {
    int n; scanf("%d", &n);
    int arr[n+2];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = sum_of_array(arr,n);
    printf("%d", ans);

 
    return 0;
 } */



#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    char s[1001];
    scanf("%s", &s);
    char str[] = "hiedi";
    bool fake = false;
    int ind = 0;
    for(int p = 0; p < strlen(str); p++){
        if(s[p] == str[ind]){
            ++ind;
        }
        if(ind >= strlen(s)){
            fake = true;
            break;
        }
    }

    if (fake) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}