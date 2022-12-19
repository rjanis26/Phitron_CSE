#include<stdio.h>
#include<string.h>

int main()
{
    int a, b, avg;
    scanf("%d %d %d", &a, &avg, &b);

    int age = (2* avg - a);
    printf("%d", age);


    return 0;
}