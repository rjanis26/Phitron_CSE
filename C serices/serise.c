// Q.1: 1 + 2 + 3+ 4 ......
/* #include<stdio.h>
int main()
{
    int i, N,sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) sum += i;
    printf("Sum of the series: %d\n", sum);

    return 0;
} */
//Q.2: 1^2+ 2^2+ 3 ^2...
/* #include<stdio.h>
int main()
{
    int i, N;
    long long int sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) sum += i*i;
    printf("Sum of serise: %d\n", sum);

    return 0;
} */

// 1+ 1/3 + 1/4+ ...
/* #include<stdio.h>
int main()
{

    int i, N;
    double sum = 0.0;
    printf("Enter the limit(nvlaue): ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        sum += (1.0/i);
    }

    printf("Sum is:%.2lf", sum);


    return 0;
} */

/*#include<stdio.h>
int main()
{
    int N, i = 1;
    float sum = 0.0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    while(i <= N) {
        sum += (1.0/i);
        i++;
    }

    printf("Sum is: %.2f\n", sum);

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int i , N;
    float sum = 0.0;

    printf("Enter the vlaue of N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        sum += (1.0 / (i*i));
    }

    printf("sum is: %.2f", sum);

    return 0;
}
 */
/* #include<stdio.h>
#include<math.h>
int main()
{
    int i = 1, N;
    float sum = 0.0;
    scanf("%d", &N);

    while(i <= N) {
        sum += (1.0 / pow(i,2));
        i++;
    }
    printf("sum is: %.2f", sum);

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int number, lastDigit, reverse=0;

    printf("Enter a number: ");
    scanf("%d",&number);

    while( number!=0 )
    {
        lastDigit = number%10;
        reverse = (reverse*10) + lastDigit;
        number /= 10;
    }

    printf("Reverse Number = %d\n",reverse);

    return 0;
} */

/* #include<stdio.h>
#include<ctype.h>
int main()
{   
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    if(isupper(c))
        printf("it is UpperCase char!");
    else if(islower(c)) 
        printf("It is lowercase char!");
    else if(isdigit(c))
        printf("it is Digits char");
    else printf("It is Special char");
     
    return 0;
} */

/* #include<stdio.h>
int main()
{
    int a, b, c; 
    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);

   printf("max is: %d", (a > b? a > c? a: c: b > c? b : c));


    return 0;
} */

/* #include<stdio.h>
int main()
{
    int a, b, c; 
    printf("Enter the three number:");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c) printf("max is: %d\n", a);
    else if(b > c) printf("Max is: %d\n", b);
    else printf("Max is: %d\n", c);

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int count = 0;
    char name[10];
    printf("Enter a string: ");
    gets(name);
    while(name[count] != '\0') {
        count++;
    }

    printf("length: %d\n", count);

    return 0;
} */

/* #include<stdio.h>
int main()
{   
    int i, count = 0;
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++) {
        count++;
    }
    printf("Length of string: %d\n", count);
    
    return 0;
} */

/* #include<stdio.h>
int main() 
{
    int count = 0, i = 0;
    char name[100];
    printf("Enter a string: ");
    gets(name);
    while(name[i] != '\0') {
        count++;
        i++;
    }

    printf("Length: %d\n", count);

    return 0;
} */

/* #include<stdio.h>
int main()
{   
    int num, rev = 0;
    printf("Enter any number find reverse: ");
    scanf("%d", &num);

    while(num != 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    printf("Reverse: %d\n", rev);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int num_of_days, years, months, days;

    printf("Enter number of days: ");
    scanf("%d", &num_of_days);

    years = num_of_days/365;
    months = (num_of_days - years * 365) /30;
    days = (num_of_days - years * 365 - months * 30);

    printf("Years: %d\n", years);
    printf("Month: %d\n", months);
    printf("Days: %d\n", days);

    return 0;
} */

#include<stdio.h>
int main()
{   
    int arr[5];
    int sum = 0;
    for(int i =0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<5; i++) {
        sum += arr[i];
    }

    printf("%d", sum);
    return 0;
}