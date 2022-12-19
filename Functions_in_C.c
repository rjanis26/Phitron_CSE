#include<stdio.h>

int sum_of_four(int a, int b, int c, int d) {
    int max = 0;
    max = a;
    if(b > max) 
        max = b;
    if(c > max)
        max = c;
    if(d > max)
        max = d;
    
    return max;
}
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int ans = sum_of_four(a, b, c, d);
    printf("%d", ans);


    return 0;
}