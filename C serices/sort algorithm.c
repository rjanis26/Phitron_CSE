 #include<stdio.h>
//Linear search using function...
int linear_search(int arr[], int size, int value);
int main()
{
	int arr[4] = {2, 4, 6, 8};
	int index = linear_search(arr, 4, 9);
	//printf(" item is found at the index = %d\n", index);
	if (index == -1){
		printf("item is not found at index:%d", index);
	}else{
		prinf("item is found :%d", index);
	}
	return 0;
}

int linear_search(int arr[], int size, int value){
	int i;
	for(i = 0; i < size; i++){
		if (arr[i] == value){
			return i;  // item is found...
 		}
	}
	//item is not found...
 	return -1;
 }



#include<stdio.h>
#include<limits.h>
void two_largest(int arr[], int length, int * first_largest, int * second_largest);
int main(void)
{
	int arr[] = {3, 1, 2, 3, 6, 2, 8, 0, 0, 0}; 
	int len = (int)sizeof(arr)/sizeof(int);
	int i;
	printf("Orginal array:");
	for(i = 0; i <len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int first_largest, second_largest;
	two_largest(arr, len, &first_largest, &second_largest);
	printf("First largest:%d \nSecond largest:%d", first_largest, second_largest);
}


void two_largest(int arr[], int length, int * first_largest, int * second_largest)

{
	int max, smax, i;
	max = smax = INT_MIN;
	for(i = 0; i < length; i++){
		if (arr[i] > max)
		{
			smax = max;
			max = arr[i];
		} 
		else if(arr[i] > smax && arr[i] < max)
		{
			smax = arr[i];
		}
	}
	*first_largest = max;
	*second_largest = smax;
}


#include<stdio.h>
#define size 5
int main()
{
    int arr[] = {-8, 4, 11, 3, 19};
    int i, value, hole;

    for(i = 1; i < size; i++){
        value = arr[i];
        hole = i;

        while (hole > 0 && arr[hole - 1] > value){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }

    printf("Sorted Arryay: \n");
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
         
    return 0;
}


#include<stdio.h>
#define size 10
int Binary_search(int arr[], int length, int value);

int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100};
	int index = Binary_search(arr, size, 3);
	printf("item is found at index: %d\n", index);
	return 0;
}

int Binary_search(int arr[], int length, int value){
	int left, right, mid;
	left = 0;
	right = size - 1;
	
	while (left <= right){
		mid = (left + right)/2;
		if (arr[mid] == value){
			return mid;
		}
		if (arr[mid] < value){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
}


#include<stdio.h>
#define size 5
int main(){
    int arr[] = {12, 2, 5, 3, 10};
    int i, j;

    for(i = 0; i < size -1; i++){
        for(j = 0; j < size -i -1; j++){
            if(arr[j] > arr[j+1]){
                //swap the to values...
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("After sorting :\n");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;

}


// selection sort...

#include<stdio.h>
#define size 10
int main(){
    int arr[] = {1, 3, 23, 22, 54, 56, 98, 90, 100, -1 };
    int i, j, min_index;
    for(i = 0; i < size; i++){
        min_index = i;
        
        for(j = i + 1; j < size; j++){
            if(arr[j] < arr[min_index]){
                min_index = arr[j];
            }
        }
        // swap two numbers...(i, min_index)...
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;

    }
    // print sorted array...
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }


    return 0;

}

 