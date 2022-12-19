/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
   int height, width;
   scanf("%d %d", &height, &width);

   for(int i = 0; i < width; i++) {
       printf("*");
   }
    printf("\n");

    for(int i = 0; i < height -2; i++) {
        printf("*");
        for(int j = 0; j < width -2; j++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int i = 0; i < width; i++) {
        printf("*");
    }
    return 0;
}

 */

/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;

    for(int i = 0; i <= n; i++) {
        if(n%i == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("Number of divisor: %d\n", count);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{   
    int row;
    scanf("%d", &row);

    for(int i = 0; i < row; i++) {
        for(int j =0; j < row; j++) {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}
 */

/* #include<stdio.h>
#include<string.h>

int main() 
{
    int row, col;
    scanf("%d %d", &row, &col);

    for(int i = 0 ; i<row; i++) {
        for(int j = 0; j < col; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

 */


#include<stdio.h>

int main()
{   
    int row;
    scanf("%d", &row);

    for(int i = 1; i <= row; i++) {
        for(int j = i; j <= row; j++) {
            printf(" ");
        }
        for(int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/* #include<stdio.h>
#include<string.h>

int main()
{   
    int row, col;
    scanf("%d %d", &row, &col);


    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++) {
            if(j <= i) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    for(int i = 1; i <= row ; i++) {
        for(int j = 1; j <= col; j++) {
            if(j <=  i) {
                printf("%c ", 64+j);
            }
        
        }
        printf("\n");
    }

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    for(int i = 1; i <= row; i++) {
        for(int j = 0; j <i; j++) {
            if(j <= i) {
                printf("%d ", i% 2);
            }
        }
        printf("\n");
    }

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    for(int i = row; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("%d ", j%2);
        }
        printf("\n");
    }

    return 0;
} */


/* #include<stdio.h>
#include<string.h>

int main()
{   
    // int row, col;
    // scanf("%d %d", &row , &col);

    // for(int i = 1; i <= row; i++) {
    //     for(int j = row; j >= 1; j--) {
    //         if(j <=  i) {
    //             printf("%d ", j*j);
    //         }
    //     }
    //     printf("\n");
    // }
    
    return 0;

} */

/* #include<stdio.h>
int main()
{   
    int n;
    printf("input: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0) 
            printf("FizzBuzz\n");
        else if(i % 3 == 0) 
            printf("Fizz\n");
        else if(i % 5 == 0)
            printf("Buzz\n");
        else 
            printf("%d\n", i);
    }

    return 0;
}  */

/* #include<stdio.h>
int main()
{
    int n;
    printf("input numbers of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Number is: %d and cube of the %d is : %d\n", i, i, i*i*i);
    }
    printf("\n");
    return 0;
}
 */

/* #include<stdio.h>
int main()
{   
    printf("Enter n: ");
    int n;
    scanf("%d", &n);
    int sum = 0;

    printf("Input 5 integer: ");
    for(int i = 1; i <= n; i++) {
        int a;
        scanf("%d", &a);
        if(a % 2 == 0) {
            sum += a;
        }
    }

    printf("Sum of even integers: %d\n", sum);

    return 0;
}
 */

/* #include<stdio.h>
int main()
{   
    printf("Test Data: ");
    int temp;
    scanf("%d", &temp);

    if(temp < 0)
        printf("Freezing weather\n");
    else if(temp >= 0 && temp <= 10) 
        printf("Very cold weather\n");
    else if(temp > 10 && temp <= 20) 
        printf("cold weather\n");
    else if(temp > 20 && temp <= 30)
        printf("Normal in temp\n");
    else if(temp > 30 && temp < 40) 
        printf("Hot temp\n");
    else if(temp >= 40) 
        printf("Its very Hot\n");


    return 0;
} */

/* #include<stdio.h>
#include<string.h>
int main()
{
    
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("vowel\n");
        break;
    default:
        printf("consonant\n");
        break;
    }

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

     
    if(num % 3 == 0 && num % 7 == 0)
        printf("no\n");
    else if(num % 3 == 0 ) 
        printf("yes\n");
    else if(num % 7 == 0) 
        printf("yes\n");


    return 0;
}

 */

/* #include<stdio.h>
int main()
{
    long long n, rem, rev, x;
    printf("Enter any number: ");
    scanf("%d", &n);
    x = n;
    rev = 0;
    while(n != 0) {
        rem = n%10;
        rev = (rev * 10) + rem;
        n = n/10;
    }

    if(rev == x)
        printf("it is a palindrome number.\n");
    else 
        printf("it is not a palindrome number\n");

    return 0;
}
 */

 
/* #include<stdio.h>
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
} */

// C++ program to check if three sides form a triangle or not
 
/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool check_validity(int a, int b, int c) {
    if(a+b <= c || a+c <= b || b+c <= a) 
        return false;
    else 
        return true;
}

int main()
{   
    int x, y, z;
    printf("Input first side: ");
    scanf("%d", &x);
    printf("Input second side: ");
    scanf("%d", &y);
    printf("Input third side: ");
    scanf("%d", &z);

    if(check_validity(x, y, z)) 
        printf("Triangle is valid");
    else 
        printf("Triangle is not valid");

    return 0;
}

 */

/* #include<stdio.h>
#include<string.h>

int main()
{   


    int a, b, c; 
    printf("Test Data: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c) 
        printf("This is Equilateral\n");
    else if(a ==b || a == c || b == c) 
        printf("This is iossceles\n");
    else 
        printf(" This is Scalence\n");



    return 0;

}
 */

/* #include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main()
{

    int a, b; 
    scanf("%d %d", &a, &b);

    int count = 0;

    while(true) {
        if(a > b) {
            break;
        }
        count++;
        a = a*3;
        b = b*2;
    }

    printf("%d\n", count);
    return 0;
} */


/* #include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char str[100];

    while(t--) {
        scanf("%s", &str);
        int len = strlen(str);
        if(len <= 10) {
            printf("%s\n", str);
        }
        else {
            printf("%c%d%c\n",str[0], len-2,str[len-1] );
        }
    }


    return 0;
}
 */
/* while loop in c */

/* #include<stdio.h>
#include<stdbool.h>
int main()
{
    // int money = 0;
    // int target = 100;   

    // while(money < target) {
    //     printf("Need more money.Enter Amount: ");
    //     int given;
    //     scanf("%d", &given);
    //     money += given;

    //     printf("Current money = %d\n", money);
    // }

    // int x;
    // scanf("%d", &x);

    // int sum = 0;
    // while(x > 0) {
    //     int digit = x % 10;
    //     x/=10;
    //     sum += digit;
    //     // printf("digit = %d, x = %d\n", digit, x);
    // }   

    // printf("Sum = %d\n", sum);


    int n;
    scanf("%d", &n);

    int reverse = 0;
    while(n > 0) {
        int digit = n%10;
        n/=10;
        reverse = reverse *10 + digit;

    }
    printf("Reversed = %d\n", reverse);
    
    return 0;
}
 */

/* #include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int a, b; 
    scanf("%d %d", &a, &b);

    for(int g=1; g <= a && g <= b; g++) {
        printf("%d\n",)
    }




    return 0;
}
 */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{   
    srand(time(0));
    int hidden =  rand()%100 +1;
    printf("%d", hidden);   

    int number_of_guess = 0;

    while(number_of_guess <       10) {
        int guess;
        scanf("%d", &guess);

        if(guess == hidden) {
            printf("You are right\n");
            break;
            return;
        }
        else if(guess < hidden) {
            printf("Guess smaller\n");
        }
        else {
            printf("Guess larger\n");
        }

        number_of_guess++;
    }
    if(number_of_guess == 10) {
        printf("You failed");
    }


    return 0;
}
 */

/* #include<stdio.h>
int main()
{   
    int sum = 20;
    do {
        sum += 2;
    } while(sum <= 10);

    printf("%d %d", sum, sum);
    return 0;
} */


/* #include<stdio.h>
#include<math.h>

int sum(int n) {
    if(n == 0) return 0;
    else return n + sum(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",sum(n));

    return 0;
} */

/* #include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 || i % 5== 0) {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}
 */

/* #include<stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        int count = 0;
        for(int j = 1; j <= i; j++) {
            if(i%j == 0) {
                count++;
            }
        }
        if(count == 2) {
            printf("%d ", i);
        }
    }


    return 0;
}
 */





/* #include<stdio.h>
int main()
{
   int choice;
   long num1, num2, x;
   printf("Please choose your option:"
          "\n1 = Addition"
          "\n2 = Subtraction"
          "\n3 = Multiplication"
          "\n4 = Division"
          "\n5 = Squares"
          "\n6 = exit"
          "\n\nChoice: ");
   scanf("%d", &choice);
   //while loop check whether the choice is in the given range
   while(choice < 1 || choice > 6)
   {
      printf("\nPlease choose the above mentioned option."
             "\nChoice: ");
      scanf("%d", &choice);
   }
   switch (choice)
   {
   case 1:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 + num2;
      printf("Sum = %ld", x);
      break;
   case 2:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 - num2;
      printf("Subtraction = %ld", x);
      break;
   case 3:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 * num2;
      printf("Product = %ld", x);
      break;
   case 4:
      printf("Enter Dividend: ");
      scanf("%d", &num1);
      printf("Enter Divisor: ");
      scanf("%d", &num2);
     //while loop checks for divisor whether it is zero or not
     while(num2 == 0)
     {
        printf("\nDivisor cannot be zero."
               "\nEnter divisor once again: ");
        scanf("%d", &num2);
     }
     x = num1 / num2;
     printf("\nQuotient = %ld", x);
     break;
   case 5:
      printf("Enter any number: \n");
      scanf("%ld", &num1);
      x = num1 * num1;
      printf("Square = %ld", x);
      break;
   case 6:
   return;
   default: printf("\nError");
   }
}

 */

/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Leap years between 2022 and 2042 are\n");
    for(int i=2022;i<=2042;i++)
    {
        if(((i%4==0)&&(i%100!=0))||(i%400==0))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
 */

/* #include<stdio.h>
int main()
{   
    int year_start, year_end;
    printf("Enter the year between year_start and year_end: ");
    scanf("%d %d", &year_start, &year_end);
    
    for(int i = year_start; i <= year_end; i++) {
        
        if(((i%4==0)&&(i%100!=0))||(i%400==0)){
            printf("%d ",i);
        }
    }


    return 0;
}

 */




























































































