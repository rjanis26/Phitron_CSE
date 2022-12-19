#include<stdio.h>
#include<string.h>
int main()
{
    int T, x;
    scanf("%d %d", &T, &x);
    double ans = (double)(T) /(double)(x);
    printf("%.10lf",ans);

    return 0;
}

