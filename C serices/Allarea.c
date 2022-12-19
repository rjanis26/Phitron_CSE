// Area of  circle
/* #include<stdio.h>
#include<math.h>
int main()
{
    int radius;
    double pi = 3.1416;

    printf("Etner the radius of circle: ");
    scanf("%d", &radius);

    double area = pi * radius * radius;
    printf("Area of circle: %.2lf", area);

    return 0;
} */

// Area of Triangle
 /* #include<stdio.h>

int AreaOfTriangle(double b, double h) {
    double area = (b * h)/2;
    printf("AREAof : %lf\n", area);
}

int main()
{   
    double length, width;
    printf("Enter the vlaues of length width: ");
    scanf("%lf%lf", &length, &width);

    AreaOfTriangle(length, width);
     

    return 0;
} 
 */

/* #include<stdio.h>

int AreaOfRectangle(int a, int b) {
    int area = (a * b);
    printf(" Area of: %d\n", area);
}

int main()
{   
    int length, width;
    printf("Enter the length and width: ");
    scanf("%d%d", &length, &width);

    AreaOfRectangle(length, width);

    return 0;
} */

/* #include<stdio.h>
int AreaOfSquare(int a) {
    int area = a * a;
    printf("Area of: %d\n", area);
}

int main()
{
    int side, area;
    printf("Enter the side of square: ");
    scanf("%d", &side);

    // area = side * side;
    // printf("Area of square: %d\n", area);
    AreaOfSquare(side);
    return 0;
} */

// print number with using loop
/* #include<stdio.h>
int main()
{   
    int num, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    count:
    printf("%d\n", i);
    i += 2;
    if(i <= num)
    goto count;

    return 0;
} */

#include<stdio.h>
#include "my_header_fine.h"
int main()
{
    add(1, 3);

    return 0;
}