// C++ program to find sum of
// digits of a number until
// sum becomes single digit.
/* #include<bits/stdc++.h>

using namespace std;

int digSum(int n)
{
	int sum = 0;
	
	// Loop to do sum while
	// sum is not less than
	// or equal to 9
	while(n > 0 || sum > 9)
	{
		if(n == 0)
		{
			n = sum;
			sum = 0;
		}
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

// Driver program to test the above function
int main()
{
	int n = 1234;
	cout << digSum(n);
	return 0;
}

 */



#include<stdio.h>
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
}