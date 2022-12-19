#include<stdio.h>
int main()
{ 
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d ", a+b);
    printf("%d\n", a - b);

    float x, y;
    scanf("%f %f", &x, &y);
    printf("%.1f ", x + y);
    printf("%.1f\n", x - y);

    return 0;
}