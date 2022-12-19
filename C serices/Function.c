/* #include<stdio.h>

int sum(int a, int b) {
    int total = a + b; 
    return total;
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    int res = sum(num1, num2);
    printf("Sum is: %d\n", res);


    return 0;
} */

/* #include<stdio.h>

void EvenOdd(int a) {
    if(a % 2 == 0) 
        printf("Yes\n");
    else 
        printf("No\n");
}

int main() 
{
    int  num;
    scanf("%d", &num);

    EvenOdd(num);

    return 0;
} */

/* #include<stdio.h>

void divisor(int x) {
    int i, count = 0;
    for(i = 1; i <= x; i++) {
        if(x % i == 0)
            printf("%d ", i);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    
    divisor(num);

    return 0;
} */

/* #include<stdio.h>

void add(int a, int b) {
    int sum = a + b; 
    printf("Addition is: %d\n", sum);
}

void subt(int a, int b) {
    int sub;
    if(a > b) {
        sub = a - b; 
    } 
    else {
        sub = b - a;
    }
    printf("Subtraction is: %d\n", sub);
}

void mul(int a, int b) {
    int multi = a * b; 
    printf("Multiplication is: %d\n", multi);
}

void div(float a, float b) {
    float divs = a/b; 
    printf("Division is: %.2f\n", divs);
}

int main()
{
    int num1, num2;
    printf("Enter the two integer num:");
    scanf("%d%d", &num1, &num2);

    add(num1, num2);
    subt(num1, num2);
    mul(num1, num2);
    div(num1, num2);

    return 0;
}
 */

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
    int term, subject, marks, point;
    bool fail = false;
    float grade = 0;
    float cgpa;

    printf("Enter the number of terms: ");
    scanf("%d", &term);

    for(int i = 0; i < term; i++) {
        printf("Term %d:\n", i+1);
        printf("Enter the number of subjects: ");
        scanf("%d", &subject);
        
        int sum = 0;
        for(int i = 0; i < subject; i++) {
            printf("Enter the marks subjecet %d :", i+1);
            scanf("%d", &marks);

            if(marks >= 80 && marks <= 100) 
                point = 5;
            else if(marks >= 70 && marks <= 80) 
                point = 4;
            else if(marks >= 60 && marks <= 70)
                point = 3;
            else if(marks >= 50 && marks <= 60)
                point = 2;
            else if(marks >= 40 && marks < 50) 
                point = 1;
            else {
                fail = true;
                point = 0;
            }
            sum += point;
        }
        if(fail) {
            printf("fail\n");
            grade = 0;
        }
        else {
            //printf("sum %d, subjcet %d\n", sum, subject);
            grade += (float)sum/(float)subject;
            printf("Term GPA: %.2f\n", grade);
        }

        printf("\n");

        if(fail) {
            cgpa = 0;
        }
        else {
            cgpa = grade/term;
        }
    }  
 
    printf("Overall cgpa is: %.2f", cgpa);

    return 0;
}




















