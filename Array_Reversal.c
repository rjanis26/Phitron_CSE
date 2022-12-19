#include<stdio.h>
#include<string.h>
#include<math.h>

void ReverseArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[size-i-1]);
    }
}

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int len;
    scanf("%d", &len);
    int arr[len];
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    ReverseArray(arr, len);

    return 0;
}