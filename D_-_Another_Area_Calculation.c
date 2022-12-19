#include<stdio.h>
#include<string.h>
#include<math.h>

int main() 
{   
    int a, b, h;
    scanf("%d %d %d", &a, &b, &h);
    int area = ((a + b) * h)/2;
    printf("%d", area);

    return 0;

}