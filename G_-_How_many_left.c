#include<stdio.h>
#include<string.h>
int main()
{
    int a, b, x, y;
    scanf("%d  %d %d %d", &a, &b, &x, &y);

    int result = ((a-x) * (b - y));
    printf("%d", result);


    return 0;
}