#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int SumOfArray(int arr[], int size) {
    int arr_sum = 0;
    for(int i = 0; i < size; i++) {
        arr_sum += arr[i];
    }

    return arr_sum;
}

int main()
{
    int len;
    scanf("%d", &len);
    int arr[len];
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = SumOfArray(arr, len);
    printf("%d", sum);

    return 0;
}