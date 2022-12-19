/* #include<stdio.h>
#include<string.h>

int  getOddOcurrence(int arr[], int n) {
    int ans=0;
    for(int i=0; i<n; i++) {
        ans =ans^arr[i];
    }
    return ans;
}

int main()
{
     int arr[] = { 2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2 };
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("%d", getOddOcurrence(arr,len));
  
    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{
    int arr[10];
    printf("Enter the elements of array: ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(int i=0; i<10; i++) {
        printf("elements- %d: %d\n", i, arr[i]);
    }

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{

    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("elements- %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Reverse array: \n");
    for(int i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }

 
    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<n; i++)
int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    rep(i,n) {
        scanf("%d", &arr[i]);
    }
    
    int count=0;
    rep(i,n) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    
    printf("Duplicate elements are: %d\n", count);


    return 0;
} */

/* #include <stdio.h>
 
int main()
{
	int arr[10], i, j, Size, Count = 0;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);
	     
 	return 0;
} */


/* #include<stdio.h>
int main()
{

    int n, k; scanf("%d", &n); 
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        int count=0;
        for(int j=0, k=n; j<k+1; j++) {
            if(i!=j) {
                if(arr[i] == arr[j]) 
                    count++;
            }
        }
        if(count==0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");




    return 0;
} */

/* #include<stdio.h>

void unique(int arr[], int n) {
    int i, j;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(arr[i] == arr[j]) 
                break;
        }
        if(i==j) {
            printf("%d", arr[i]);
        }
    }
     
}
int main()
{

    int n; scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    unique(arr, n);

    return 0;
} */

/* #include<stdio.h>
#include<conio.h>
 
int main() {
 int array[100], size, i, j;
  
 printf("Enter number of elements in array\n");
 scanf("%d", &size);
 printf("Enter %d numbers\n", size);
  
 for(i = 0; i < size; i++){
  scanf("%d", &array[i]);
 }
  
 printf("Unique Elements\n");
 for(i = 0; i < size; i++) {
  for (j=0; j<i; j++){
      if (array[i] == array[j])
       break;
       }
      
     if (i == j){
       
      printf("%d ", array[i]);
  }
 }
   
  
 return 0;
} */

 
  /* #include<stdio.h>
#include<string.h>

void print_duplicate_elements(int arr[], int ln) {
    int i, j;

    for(int i=0; i<ln; i++) {
        for(j=0; j<i; j++ ) {
            if(arr[i]== arr[j]) {
                break;
            }
        }
        if(i != j) {
            printf("%d ", arr[i]);
        }
    }
}

 int main() 
{
    int n; scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    print_duplicate_elements(arr, n);

    return 0;  
    
}
  */
/* https://btechgeeks.com/ */

/* #include<stdio.h>

int main() 
{
    
    int arr[] = {1,2, 3 ,4 , 5, 1, 2, 3, 4, 5};
    int ln = sizeof(arr)/sizeof(arr[0]);

    int  marks[6] = {0};

    for(int i=0; i<ln; i++) {
        int x=  arr[i];
        marks[x]++;
    }

    for(int i=1; i<=5; i++) {
        printf("%d -> %d\n", i, marks[i]);
    }


    return 0;
} */

/* #include<stdio.h>
#define rep(i,n) for(int i=0; i<n; i++)

void min_max(int arr[], int n) {
    int min= arr[0], max = arr[0];
    rep(i, n) {
        if(arr[i]> max) {
            max= arr[i];
        }
        if(arr[i] <min) {
            min = arr[i];
        }
    }
    printf("%d, %d", min, max);
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n]; 

    rep(i,n) {
         scanf("%d", &arr[i]);
    }

    min_max(arr, n);
    return 0;
} */


/* #include<stdio.h>
#define rep(i,n) for(int i=0; i<(n); i++) 

int main()
{
    int n; scanf("%d", &n);
     int even[n], odd[n];
    int j=0, k=0;

    int arr[n];
    rep(i,n) {
        scanf("%d", &arr[i]);
    }

   
    rep(i,n) {
        if(arr[i]%2==0) {
            even[j] = arr[i];
            j++;
        }
        else {
            odd[k]== arr[i];
            k++;
        }
    }

    rep(i,n) {
        printf("%d ", arr[i]);
    }

    for(int i=0; i<j; j++) {
        printf("%d ", even[i]);
    }

    for(int i=0; i<k; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;

} */

/* #include <stdio.h>

void main()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,k=0,n;
	
	
       printf("\n\nSeparate odd and even integers in separate arrays:\n");
       printf("------------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0;i<n;i++)
    {
	if (arr1[i]%2 == 0)
	{
	   arr2[j] = arr1[i];
	   j++;
	}
	else
	{
	   arr3[k] = arr1[i];
	   k++;
	}
    }

    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr3[i]);
    }
    printf("\n\n");	
 }
 */


/* #include<stdio.h>
int main() 
{
    int n; scanf("%d", &n);
    int arr[n], even[n], odd[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int j=0, k=0;
    for(int i=0; i<n; i++) {
        if(arr[i]%2==0) {
            even[j]=arr[i];
            j++;
        }
        else {
            odd[k] = arr[i];
            k++;
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0; i<j; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    for(int i=0; i<k; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
} */


/* #include<stdio.h>
#define rep(i,n) for(int i=0; i<n; i++) 

int main()
{
    int n; scanf("%d", &n);
    int arr[n+4];
    
    for(int i=0;i<n; i++)  {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j= i+1; j<n; j++) {
            if(arr[i] > arr[j]) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]== temp;
            }
        }
    }

    rep(i,n) {
        printf("%d ", arr[i]);
    }

    return 0;
} */

/* #include<stdio.h>
#define rep(i,n) for(int i=0;i<n; i++) 
int main() 
{
    int n, temp;
    scanf("%d",&n);

    int arr[n+3];   
    rep(i,n) {
        scanf("%d", &arr[i]);
    }

    rep(i,n) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    rep(i,n) {
        printf("%d ", arr[i]);
    }

    return 0;
} */

// Delete pacefic position from array...
/* #include<stdio.h>
#define rep(i,n) for(int i=0; i<n; i++) 

int main() 
{
    int n, position;
    scanf("%d", &n);
    int arr[n+4];

    rep(i,n) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the delete position: ");
    scanf("%d", &position);

    if(position >= n+1) 
        printf("Delete not possible");

    else {
        for(int i= position-1; i <n-1; i++) {
            arr[i]= arr[i+1];
        }

        printf("New elements:\n");
        for(int i=0; i<n-1; i++) {
            printf("%d ", arr[i]);
        }
    }


    return 0;
} */


/* #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<n; i++) 

int deleteElement(int arr[], int n, int target) {
    int i;
    rep(i,n) {
        if(arr[i]==target) 
            break;
    }

    if(i < n) {
        n=n-1;
        for(int j= i; j<n ; j++) {
            arr[j] == arr[j+1];
        }
        return n;
    }
}

 
  #include<stdio.h>
#include<string.h>
#include<limits.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)

void secondLargest(int arr[], int n) {
    int first, second;
    if(n <2) {
        printf("Invalid size of the array!");
        return;
    }

    first=second=INT_MIN;  
    rep(i,n) {
        if(arr[i]> first) { 
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first) {
            second=arr[i];
        }
        
    }
    if(second==INT_MIN) 
            printf("There is no second largest\n");
        else 
            printf("the second largest is: %d\n", second);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+3];
    rep(i,n) {
        scanf("%d", &arr[i]);
    }

    secondLargest(arr, n);

    return 0;
}
       


/* #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); i++)

void print_arry(int arr[], int n) {
    rep(i,n) {
        printf("%d ", arr[i]);
    }
}

void print_allNegative(int arr[], int n) {
    int neg_count=0;

    rep(i,n) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
            neg_count++;
        }
    }
    puts("\n");
    printf("total negative value: %d\n", neg_count);
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n+3];

    rep(i,n) {
        scanf("%d", &arr[i]);
    }

    print_allNegative(arr,n);
    return 0;

/* } */

 /*  #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); i++)

void deleteElement(int arr[], int n, int pos) {
     
     if(pos <= 0 || pos > n) {
        printf("opps! Invalid pos.");
    }
    else {
        for(int i=pos-1; i<n; i++) {
            arr[i]=arr[i+1];
        }
        n--;
    }
}

void print_arary(int arr[], int n) {
    rep(i,n) {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int n; scanf("%d", &n);
    int arr[n+3];
    rep(i,n) {
        scanf("%d",&arr[i]);
    }
    
    int pos;
    printf("Enter the position to delete:");
    scanf("%d", &pos);
    
    deleteElement(arr, n, pos);
      for(int i=0; i<n-1; i++) {
        printf("%d ", arr[i]);
     }

    return 0;
}  */
 
/* 
  #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n); i++) 

int count_duplicate(int arr[], int n) {

    int count=0;
    rep(i,n) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]== arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n+3];
    rep(i,n) {
        scanf("%d", &arr[i]);
    }

    int res=count_duplicate(arr,n);
    printf("total: %d\n", res);
    rep(i,n) {
        printf("%d ", arr[i]);
    }
 

    return 0;
}
   */

/*  #include<stdio.h>
#include<string.h>

void print_duplicate_elements(int arr[], int ln) {
    int i, j;

    for(int i=0; i<ln; i++) {
        for(j=0; j<i; j++ ) {
            if(arr[i]== arr[j]) {
                break;
            }
        }
        if(i != j) {
            printf("%d ", arr[i]);
        }
    }
}

 int main() 
{
    int n; scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    print_duplicate_elements(arr, n);

    return 0;  

} 
 */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define srep(i) for(int i=0; i<strlen(str); i++)

int main()
{
    int n;
    printf("Enter the how many word: ");
    scanf("%d",&n);
    char str[n+3][100], temp[100];

    for(int i=0; i<n; i++) {
        fgets(str[i], sizeof str[i], stdin);
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("In the lexicographical order: \n");
    for(int i=0; i<n; i++) {
        fputs(str[i], stdout);
    }

    return 0;
}
 */


/* #include<stdio.h>
#include<string.h>

int main()
{
    char str[100][100], temp[100];
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
    scanf("%s", str[i]);
    }

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(strcmp(str[j], str[j+1])>0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }

    printf("String is alphabetical order: \n");
    for(int i=0; i<n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
} */

// find max occurrence in string

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define ch_no 256
#define srep(i) for(int i=0; i<strlen(str); i++)

int main()
{

    char str[100];
    int ch_freq[ch_no] ;
    int max;
    printf("Enter the string: \n");
    fgets(str, sizeof str, stdin);

    for(int i=0; i<ch_no; i++) {
        ch_freq[i]=0;
    }

    int i=0; 
    while(str[i] != '\0') {
        int vals= (int)str[i];
        ch_freq[vals]++;
        i++;
    }

    max=0;
    for(int i=0; i<ch_no; i++) {
        if(ch_freq[i] > ch_freq[max]) {
            max=i;
        }
    }

    printf("Maximum occurence char: %d  ", max ); 

    return 0;
}
 */

 /*  #include <stdio.h>
 
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n-1] = temp;
}

void leftRotate(int arr[], int k, int n)
{
    for (int i = 0; i < k; i++)
        leftRotatebyOne(arr, n);
}
 
  //Driver program to test above functions  
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    leftRotate(arr, 3, n);
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
} */  


/* //copy array to another array..
#include<stdio.h>
#include<string.h>

void arrayCopy(int arr[], int arr2[],  int n) {
    for(int i=0; i<n; i++) {
        arr2[i] = arr[i];
    }
}

int main()
{
    int n; scanf("%d", &n);
    int arr[100],c[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

   

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
     arrayCopy(arr, c, n);
    printf("After coping the array:\n");

    for(int i=0; i<n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
 
 */
 
/* #include<stdio.h>
#include<string.h>

void pairSum(int arr[], int n, int add) {
    int flag=0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j]==add) {
                flag=1;
                printf("(%d,%d) found at index: [%d,%d]\n", arr[i], arr[j], i, j);
            }
        }
    }
    if(flag==0) {
        printf("Not found.\n");
    }
}


int main()
{
    int n; scanf("%d", &n);
    int arr[n+3];

    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    int add;  scanf("%d",&add);

    pairSum(arr, n, add);

    return 0;
}
   */

// find the max diff from the arry..

/* #include<stdio.h>
#include<string.h>

int maxDifference(int arr[], int n) {
    int max_diff=0;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j]-arr[i] > max_diff) {
                max_diff = arr[j]-arr[i];
            }
        }
    }
    return max_diff;
}


int main() 
{
    int n;  scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Max diff: %d", maxDifference(arr,n));
    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define rep(i,n)  for(int i=0; i<n; i++) 

void solve() {
    int n, i,j; scanf("%d", &n);
    int arr[n+3];
   rep(i,n) {
    scanf("%d", &arr[i]);
   }
   int minSum=0, midfirst,minSecond, sum=0;
   minSum = arr[0]+arr[1];
   rep(i,n) {
       for(int j=i+1; j<n; j++) {
           sum=arr[i]+arr[j];
           if(abs(minSum) > abs(sum)) {
               minSum =sum;
               midfirst = i;
               minSecond=j;
           }
       }
       
   }
    
    printf("Sum of (%d,%d) are nearest 0\n", arr[midfirst], arr[minSecond] );


}

int main()
{
    solve();

    return 0; */
 
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void findRepeated(char str[], char ch) {
    int cont=0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i]==ch) {
            cont++;
        }
    }
    printf("Letter %c occurence %d times\n", ch, cont);
}

int main()
{   
    char str[256];
    gets(str);
    char ch;
    scanf("%c", &ch);

    findRepeated(str,ch);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[100];
    gets(str);

    for(int i=0; i<strlen(str); i++) {
        if(str[i] >='a' && str[i] <='z') {
            str[i] = str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z') {
            str[i] = str[i] +32;
        }
    }

    printf("New sentense: %s", str);


} */

/* #include<stdio.h>
#include<string.h>

int findSpaces( char str[]) {
    int cont=0;
    for(int i=0;i<strlen(str); i++) {
        if(str[i] == ' ') {
            cont++;
        }
    }
    return cont++;
}

int main()
{
    char str[100];
    gets(str);

    printf("Total spaces: %d", findSpaces(str));
 
    return 0;
} */


/* #include<stdio.h>   
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void findFirstCapital(char str[], char c) {
    for(int i=0; i<strlen(str); i++) {
        if(isupper(str[i])) {
            c=str[i];
            break;
        }
        else {
            continue;
        }
    }
    printf("First capital: %s of %c", str, c);
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    char c; // store output first capital .. 
    findFirstCapital(str, c);
    
    
    return 0;
} */

 
/* #include<stdio.h>
#include<string.h>
#include<ctype.h>

void findFirstSmallest(char str[]) {
    int flag=0;
    for(int i=0; i<strlen(str); i++) {
        if(islower(str[i])) {
            printf("First smallest: %c",str[i]);
            flag=1;
            break;
        }
    }
    if(flag==0) {
        printf("There is no smallest.\n");
    }
}

int main()
{
    char str[100];
    gets(str);

    findFirstSmallest(str);
    return 0;
} */


/* #include<stdio.h>
#include<string.h>
#include<ctype.h>

void findFirstCapital(char str[]) {
    int flag=0, count=0;
    for(int i=0; i<strlen(str); i++) {
        if(isupper(str[i])) {
            count++;
        }
    }
     
    printf("%d", count);
}
 
int main()
{
    char str[100];
    gets(str);

    findFirstCapital(str);
     
    return 0;
} */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], str2[100], temp[100] = {0};
    printf("Enter the string1:");
    gets(str);
    printf("Enter the string2: ");
    gets(str2);

    int i=0, j=0,k=0;
    for(int i=0; i<strlen(str2); i++) {
        int flag=0;
        for(int j=0; j<strlen(str); j++) {
            if(str2[i]==str[j]) {
                flag=1;
            }
        }
        if(flag==0) {
            temp[k]=str2[i];
            k++;
        }
    }
    temp[i]='\0';

    printf("After remove common alpht: %s", temp);
    return 0;
}


 