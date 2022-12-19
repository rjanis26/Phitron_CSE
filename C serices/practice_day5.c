// Question Number_2:
/* #include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    // int sum = 0;
    // while(num != 0) {
    //     int rem = num%10;
    //     num/= 10;
    //     sum += rem;
    // }
    // printf("%d", sum);

    int rev = 0;
    while(num != 0) {
        int rem = num % 10;
        rev = rev*10 + rem;
        num/= 10;
    }

    printf("%d", rev);
    return 0;
} */

/* #include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sum = 0;
    while(n != 0) {
        int rem = n%10;
        n/=10;
        sum += rem;
    }

    printf("%d\n", sum);

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int rev =0;
    while(n !=0) {
        int rem = n%10;
        n/=10;
        rev = rev*10 +rem;
    }

    printf("%d\n", rev);
    return 0;
} */

#/* include<stdio.h>
int fact(int n) {
    if(n==0 || n==1) return 1;
    else return n*fact(n-1);
}
int main()
{
    printf("Enter any numbe: ");
    int n;
    scanf("%d", &n);

    int ans = fact(n);
    printf("Factorial of %d is %d\n",n,ans);
    return 0;
} */

/* #include<stdio.h>
int main()
{
    int n, fact = 1;
    scanf("%d", &n);

    // for(int i=1; i<=n; i++) {
    //     fact *= i;
    // }

    int i = 1;
    while(i <=n ) {
        fact = fact*i;
        i++;
    }
    printf("%d", fact);
    return 0;
} */


#/* include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int rem, rev=0, temp = n;
    while(temp>0) {
        rem = temp%10;
        temp/=10;
        rev = rev*10 + rem;
    }

    // if(rev==n) 
    //     printf("%d is palindrome\n", n);
    // else
    //   printf("%d is not palindrome\n", n);

    (rev == n) ? printf("%d is palindrome\n", n) :  printf("%d is not palindrome\n", n);

    return 0;
} */

#include<stdio.h>
int main()
{
    int min, max, n;
    printf("Enter the min number: ");
    scanf("%d", &min);
    printf("Enter the max number: ");
    scanf("%d", &max);

    for(int i=min; i<=max; i++) {
        int temp = i, rem, rev = 0;
        while(temp >0) {
            rem = temp%10;
            temp/= 10;
            rev = rev*10 + rem;
        }
        if(rev == i) 
            printf("%d ", i);
    }

    




    return 0;
}
















