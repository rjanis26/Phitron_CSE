/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sumOfDigit(int n) {
    if(n == 0) return 0;
    else return (n%10) + sumOfDigit(n/10);
}

int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);

    int sum = sumOfDigit(num);
    printf("%d", sum);


    return 0;
} */

// using while loop
/*#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{   
    int num, sum = 0, rem;
    scanf("%d", &num);

    while(num > 0) {
        rem = num%10;
        sum += rem;
        num = num/10;

    }

    printf("%d", sum);
    return 0;
} */






