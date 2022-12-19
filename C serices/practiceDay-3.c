/* #include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{

    int a = 6, b = 10, c = 6;
    int x = (a * b)% 5;
    printf("%d\n", x);

    bool y = a >= c; 
    printf("%d\n", y);


    return 0;
} */

/* #include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{

    int num;
    scanf("%d", &num);

    // if(num % 2 == 0) 
    //     printf("%d is even", num);
    // else 
    //     printf("%d is odd", num);

    (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd\n", num);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{   
    int a, b;     
    char op;

    scanf("%d %c %d", &a, &op, &b);
    

    switch (op)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    case '%':
         if(b == 0)
             printf(" opps! Your can not divide by %d", b);
         else 
            printf("%d", a % b);
        break;
    default:
        printf("opps! Invalid input");
        break;
    }


    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num > 0) 
        printf("1");
    else if(num == 0) 
        printf("0");
    else 
        printf("-1");


    return 0;
} */

#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int it = 1;
    for(int i = 1; i<= row; i++) {
        for(int j = 1; j <= col; j++) {
            if(j <= i) {
                printf("%d ", it);
                 it++;
            }
        }
        printf("\n");
    }


    return 0;
}