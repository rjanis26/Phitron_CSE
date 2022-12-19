/* #include<stdio.h>
int main()
{
    int rank;
    printf("Please enter your rank: ");
    scanf("%d", &rank);

    if(rank == 1) printf("Your salary: 2,50,000 BDT\n");
    else if(rank == 2) printf("Your salary: 2,10,000 BDT\n");
    else if(rank == 3) printf("Your salary: 1,50,000 BDT\n");
    else if(rank == 4) printf("Your salary: 80,000 BDT\n");
    else if(rank >= 5) printf("Your salary: 50,000 BDT\n");


    return 0;
}
 */

/* #include<stdio.h>
int main()
{
    int rank;
    printf("Please enter your rank: ");
    scanf("%d", &rank);

    switch (rank)
    {
    case 1:
        printf("Your salary: 2,50,000 BDT");
        break;
    case 2:
        printf("Your salary: 2,10,000 BDT");break;
    case 3:
        printf("Your salary: 1,50,000 BDT"); break;
    case 4:
        printf("Your salray: 80,000 BDT"); break;

    default:
        printf("Your Rank is not match at this moment!");
        break;
    }

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the vlue or x and y coordinte: ");
    scanf("%d%d", &x, &y);

    if(x > 0 && y > 0) printf("First Quadrant\n");
    else if(x < 0 &&  y > 0) printf("Second Quadrant\n");
    else if(x < 0 && y < 0) printf("Third Quadrant\n");
    else printf("Fourth Quadrant\n");

    return 0;
} */
/* #include<stdio.h>
int main()
{
    // int i;
    // for(int i = 1; i <= 100; ++i) {
    //     if(i % 2 == 0) printf("%d\n", i);
    // }

    int i, j;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
} */

/* #include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("******Multiplication Table******\n");
    int i;
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
} */
// Sum of series
/* #include<stdio.h>
int main()
{
    int i, sum = 0;
    for(int i = 101; i >= 1; i -= 2) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
} */

/* #include<stdio.h>
int main()
{
    int i;
    for(int i = 1; i <= 7; i++) {
        if(i % 2 == 0) printf("Blank Line\n");
        else printf("*\n");
    }   


    return 0;
} */
/* #include<stdio.h>
int main()
{
    int i, j;
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            //printf("%d ", i);
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} */

/* #include<stdio.h>
int main() {
    char var;
    for(var = 'A'; var <= 'Z'; var++) {
        printf("%c ", var);
    }

    return 0;
} */

/* #include<stdio.h>
int main() {

    int i;
    for(i = 10; i < 20; i++) {
        if(i % 2 == 0) continue;
        printf("%d\n", i);
        if(i > 16) break;
    }

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int i, sum = 0, count = 0;
    double avg;

    for(i = 10; i <= 500; i++) {
        if(i % 3 == 0 && i % 5 == 0 && i % 12 == 0) {
            sum += i;
            count++;
        }
             
    }
    avg = sum/count;
    printf("Average is: %.2lf\n", avg);
    printf("%d\n", count);

    return 0;
} */

/* #include<stdio.h>
int main() {
    int i, j, count = 0, N;
    printf("Enter th value of N:");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }
        if(count == 2) printf("%d ", i);
        count = 0;
    }

    return 0;
} */
/* #include<stdio.h>

void PrintArray(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10], i, sum = 0;
    printf("Enter the elements of array: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    PrintArray(arr, 10);

    for(i = 0; i < 10; i++) {
        sum += arr[i];
    }

    printf("Sum is: %d\n", sum);
    return 0;
} */
/* #include<stdio.h>

void PrintArrray(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int FindMax(int arr[], int size) {
    int i, max = arr[0];
    for(i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int arr[] = {-99, 45, 100, 37, 89, -327, 256};
    int len = sizeof(arr)/sizeof(arr[0]);

    PrintArrray(arr, len);
    int result = FindMax(arr, len);
    printf("Max value of array: %d\n", result);

    return 0;
} */

/* #include<stdio.h>
int main()
{
    int arr[5], i, sum = 0, count = 0;
    for(i = 0; i < 5; i++) scanf("%d", &arr[i]); // input the array element

    for(i = 0; i < 5; i++) {
        if(arr[i] > 100) {
            sum += arr[i];
            count++;
        }
    }

    double avg = sum/count;
    printf("Average of array: %.2lf", avg);


    return 0;
} */

/* #include<stdio.h>
int main() {

    int arr[] = {10, 25, 20, 15, 30};
    int len = sizeof(arr)/sizeof(arr[0]);

    int i, even_sum = 0, odd_sum = 0;
    for(i = 0; i < len; i++) {
        if(arr[i] % 2 == 0) {
            even_sum += arr[i];
        }
        else {
            odd_sum += arr[i];
        }
    }
    printf("Even sum of array: %d\n", even_sum);
    printf("Odd sum of array: %d\n", odd_sum);

    return 0;
} */

/* #include<stdio.h>

void IsPrime(int arr[], int size) {
    int i, j, count = 0;
    for(i = 0; i < size; i++) {
        for(j = 1; j <= arr[i]; j++) {
            if(arr[i]% j == 0) {
                count++;
            }
        }
        if(count == 2) 
            printf("%d is prime, inde: %d\n", arr[i], i);
        count = 0;
    }
}

void PrintArray(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[] = {1, 23, 10, 15, 17, 21, 44, 43, 53};
    int len = sizeof(arr)/sizeof(arr[0]);

    PrintArray(arr, len);
    IsPrime(arr,len);

    // int i, j, count = 0;
    // for(i = 0; i < len; i++) {
    //     for(j = 1; j <= arr[i]; j++) {
    //         if(arr[i] % j == 0) {
    //             count++;
    //         }
    //     }
    //     if(count == 2) printf("%d is prime, index: %d\n", arr[i], i);
    //     count = 0;
    // }
    return 0;
} */

/* #include<stdio.h>

int CountDigits(long long num) {
    int count=0;
    while(num != 0) {
        num /= 10;
        count++;
    }

    return count;
}
int main() 
{   
    long long num = 1341493557;
    int res = CountDigits(num);
    printf("Total: %d\n", res);

    return 0;
}
 */

/* #include<stdio.h>
#define ll long long
int main()
{
    
    ll num = 123405678910;
    int i, count = 0;
    for(i = 0; num != 0; i++) {
        num /= 10;
        count++;
    }
    printf("total: %d\n", count);

    return 0;
} */
/* #include<stdio.h>

int DigitSum(int n) {
    int sum = 0;
    while(n > 0 || sum > 9) {
        if(n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int main()
{ 
    int n = 1234;
    printf("sum: %d", DigitSum(n));

    return 0;
} */

// Header files and #define...
 
