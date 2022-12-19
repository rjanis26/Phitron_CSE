/* #include<stdio.h>
#include<string.h>

int main()
{
    int P, T;
    double R;
    printf("Enter principal: ");
    scanf("%d", &P);
    printf("Enter time: ");
    scanf("%d", &T);
    printf("Enter the rate: ");
    scanf("%lf", &R);

    double simeple_interest = ((P * T * R) / 100);
    double result = simeple_interest + P;

    printf("Simple Interest: %lf\n", simeple_interest);
    printf("Principal + Interest: %.1lf\n", result);


     return 0;
}
 */

/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float a;
    printf("Enter Number: ");
    scanf("%f", &a);

    float integer = (a - (int)(a));
    int real = a;
    printf("Integer part: %d\n",real);
    printf("Real part: %.3f", integer);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    double celcius;
    printf("Enter temperature in Celcius: ");
    scanf("%lf", &celcius);

    double fahrenheit = (celcius *(9.0/5.0) + 32);
    printf("Temperature in Fahrenheit = %.1lf F", fahrenheit);

    return 0;
} */

/* #include<stdio.h>
int main()
{
    double fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celcius = (fahrenheit - 32) * 5/9;
    printf("Temperature in celcius: %.2lf C\n", celcius);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int days;
    printf("Input no of days: ");
    scanf("%d",&days);

    int years = (days / 365);
    int weeks = (days % 365) / 7;
    days  = (days % 365) % 7;

    printf("Year: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Day: %d\n", days);


    return 0;
} */

// Year, Month, weeks, Days..
/* #include<stdio.h>
int main()
{
    int number_of_days, years, months, days;

     Reading number of days from user 
    printf("Enter number of days: ");
    scanf("%d", &number_of_days);

     Calculating years 
    years = number_of_days / 365;
    months = (number_of_days - years *365) / 30;
    int weeks = (number_of_days - years * 365 - months * 30) /7;
    days = (number_of_days - years * 365 - months*30);

    // Displaying results
    printf("Years = %d", years);
    //printf("\nMonths = %d", months);
    printf("\nweeks = %d", weeks);
    printf("\nDays = %d", days);

    return 0;
}
 */

/*#include<stdio.h>
#include<string.h>

int main()
{

    int number_of_days, years, weeks, days;
    printf("Enter the number of days: ");
    scanf("%d", &number_of_days);

    years = number_of_days/365;
    weeks = (number_of_days - years * 365) /7;
    days = (number_of_days - years * 365 - weeks * 7);

    printf("Year: %d\n", years);
    printf("Week: %d\n", weeks);
    printf("Day: %d\n", days);

    return 0;
}
 */
/* #include <stdio.h>
int main ()
{
    float f=56.75005;
    int a=(int)f;
    int result=(f-a)*10000;
    printf ("integer = %d\n decimal part to integer =.%d\n",a, result);

} */

/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{   
    int len = 0, k = 0;
    char str[100],d, store[100];

    printf("Enter the orginal string: ");
    gets(str);

    while(str[len] != '\0') {
        len++;
    }

    printf("Enter the character to delete: ");
    scanf("%c", &d);
    for(int i = 0; i < len; i++) {
        if(str[i] != d) {
            store[k++] = str[i];
        }
    }
    puts(store);
    return 0;
} */

#include<stdio.h>
#include<string.h>

int main()
{
    int len = 0, k =0;
    char name[100], d, stroe[100];
    gets(name);
    
    while(name[len] != '\0') {
        len++;
    }
    
    scanf("%c", &d);
    for(int i = 0; i < len; i++) {
        if(name[i] != d) {
            stroe[k++] = name[i];
        }
    }

    puts(stroe);

    return 0;
}























