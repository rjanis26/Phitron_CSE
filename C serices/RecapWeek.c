
// find the first repated element from array.
/* 
#include<stdio.h>
#include<string.h>

void findFirstRepated(int arr[], int n) {
    int index=-1, elemnt;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                elemnt= arr[j];
                index = j;
                break;
            }
        }
        if(index!=-1) {
            break;
        }
    }

    if(index != -1) {
        printf("%d repted  at index %d\n", elemnt, index);
    }
    else {
        printf("There is no repated elements\n");
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n+3];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    findFirstRepated(arr,n);
    print_array(arr,n);

 
    return 0;
} */


// Sort the array..
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b; 
    *b = temp;
}

void sortArray(int arr[], int n ) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{   
    int n;  scanf("%d", &n);
    int arr[n+3];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr,n);
    print_array(arr,n);
 
    return 0;
}

 */
 
/* 
 #include<stdio.h>
 #include<string.h>
#define rep(i,n) for(int i=0; i<(n); i++)

int countOccu(int arr[], int n, int value) {
    int count =0;
    rep(i,n) 
    {
        if(arr[i] == value);
        count++;
    }
    return count;
}

void print_array(int arr[], int n) {
    rep(i,n) {
        printf("%d ", arr[i]);
    }
}

 int main()
 {
    int n; scanf("%d", &n);
    int arr[n];

    rep(i,n) {
        scanf("%d", &arr[i]);
    }

    int item; scanf("%d", &item);

    printf("Total Occu: %d\n", countOccu(arr,n,item));
     

     
    return 0;
 } */


/* 
#include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define repo(i,n) for(int i=0; i<=(n); i++)

void readArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    rep(i,n) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findElement(int arr[], int n, int item) {
    int index=-1;
    rep(i,n) {
        if(arr[i] == item) {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    readArray(arr,n);

    int find;  scanf("%d", &find);
    int index = findElement(arr,n,find);
    if(index==-1) {
        printf("%d not found\n", find);
    }
    else {
        printf("%d find at index:%d\n", find, index);
    }
 
    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>
#include<stdio.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)

void readArray(int arr[], int n) {
    rep(i,n) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    rep(i,n) {
        printf("%d ", arr[i]);
    }
    printf("\n");    
}

void replaceEvenOdd(int arr[], int n) {
    rep(i,n) {
        if(arr[i]%2==0) {
            arr[i] = 0;
        } 
        else {
            arr[i] = 1;
        }
    }
}


int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    readArray(arr,n);

    replaceEvenOdd(arr,n);
    printArray(arr,n);
 
    return 0;
}
 */
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

void findTowMin(int *a, int n) {
    int first = a[0], second = INT_MAX;

    for(int i=0; i<n; i++) {
        if(a[i] < first) {
            second = first;
            first =a[i];
        }
        else if(a[i] < second && a[i] != first) {
            second = a[i];
        }
    }
    if(second == INT_MAX) {
        printf("There is no smallest.\n");
    }
    else {
        printf("First smallest: %d\nSecond smallest:%d\n", first, second);
    }
}

int main()
{
    int n; scanf("%d", &n);
    int *a = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    findTowMin(a, n);
 
    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

int main()
{

    int n; scanf("%d",&n);
    int arr[n], arr2[n];
    int j, b; 
    scanf("%d", &b);

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i]%b==0) {
            arr2[j++] = arr[i]; 
        }
    }


    for(int i=0;  i<j; i++) {
        printf("%d ", arr2[i]);
    }


    return 0;
}
 */

/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int counter[11] = {0};
    for(int i=0; i<n; i++) {
        int x = arr[i];
        counter[x]++;
    }

    for(int i=0; i<10; i++){
        if(counter[i] >0) {
            printf("%d has %d times\n", i, counter[i]);
        }
    }


    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

void findTowMin(int *a, int n) {

    //int first = a[0], second = INT_MAX;
    int first, second;

    if(n < 2) {
        printf("Invalid size of array.");
        return;
    }

    first = second = INT_MAX;

    for(int i=0; i<n; i++) {
        if(a[i] < first) {
            second = first;
            first =a[i];
        }
        else if(a[i] < second && a[i] != first) {
            second = a[i];
        }
    }
    if(second == INT_MAX) {
        printf("There is no smallest.\n");
    }
    else {
        printf("First smallest: %d\nSecond smallest:%d\n", first, second);
    }
}

int main()
{
    int n; scanf("%d", &n);
    int *a = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    findTowMin(a, n);
 
    return 0;
}   */
/* 
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>

void findTwolargest(int *arr, int n) {
    int first, second;
    
    if(n < 2) {
        printf("Invalid size of array.");
        return;
    }

    first = second =INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        
        else if(arr[i]> second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second== INT_MIN) {
        printf("There is no second leargest.\n");
    }
    else {
        printf("Frist largest: %d\nSeond largest:%d\n", first,second);
    }
}

int main() 
{
    int n; scanf("%d", &n);
     
    int *arr = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    findTwolargest(arr,n);
 
    return 0;
} */
 

 /*
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#define rep(i,n) for(int i=0; i<n; i++) 

void printArray(int *ar, int n) {
    rep(i,n) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void readArray(int *ar, int n) {
    rep(i,n) {
        scanf("%d", &ar[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b; 
    *b = temp;
}

void swapElements(int *ar, int n) {
    rep(i,n/2) {
        swap(&ar[i], &ar[n-i-1]);
    }
}
  
int main()
{

    int n; scanf("%d", &n);
    int *ar = (int *)malloc(n*sizeof(int));

    readArray(ar,n);
    swapElements(ar,n);
    printArray(ar,n);


    return 0;
}
 */

/// zigzag array..

  /* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

void readArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b; 
    *b = temp;
}

void arlternativeSwap(int arr[], int n) {

    if(n < 2) {
        printf("Invalid size of array.");
        return;
    }

    for(int i=0; i<n; i+=2) {
        if(i+1 < n) {
            swap(&arr[i], &arr[i+1]);
        }
    }
}

int main()
{

    // int n; scanf("%d", &n);
    // int arr[n];
    // readArray(arr, n);

    int arr[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    arlternativeSwap(arr,n);
    printArray(arr,n);
 
    return 0;
}  */
/* 
#include<stdio.h>   
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

void readArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b; 
    *b = temp;
}


void zigzag(int arr[], int n) {

    bool ans = true;
    for(int i=0; i<n-1; i++) {
        if(ans) {
            if(arr[i] > arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
            }
        }
        else if(arr[i] < arr[i+1]) {
            swap(&arr[i], &arr[i+1]);
        }
        ans = !ans;
    }    
}

int main()
{
    int n; scanf("%d", &n);
    int *a =(int *)malloc(n*sizeof(int));

    readArray(a,n);

    zigzag(a,n);
    printArray(a,n);   
 
    return 0;
} */


/* 

Pratice:string.
RecapWeek with phitron..
 
 */
/* 
#include<stdio.h>
#include<string.h>

void printIndex(char str[], char c) {
    int index[10], j;
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == c) {
            index[j++] = i;
        }
    }
    printf("Index: \n");
    for(int i=0; i<j; i++) {
        printf("%c -> %d\n",c, index[i]);
    }
}

int main()
{

    char str[100], ch;
    int index[10], j;

    fgets(str, sizeof str, stdin);
    printf("Enter char: ");
    scanf("%c", &ch);

    // for(int i=0; str[i] != '\0'; i++) {
    //     if(str[i] == ch) {
    //         index[j++] = i;
    //     }
    // }
    
    printIndex(str,ch);
     
    return 0;
} */

 /* 
#include<stdio.h>
#include<string.h>

void firstLetterCapitalized(char str[]) {

    int i=0; 
    for(int i=0; str[i] != '\0'; i++) {
        if(i==0) {
            if(str[i]>='a' && str[i] <='z') {
                str[i] = str[i] - 32;
                continue;
            }
            if(str[i]==' ') 
            {
               ++i;
                if(str[i] >='a' && str[i]<='z') {
                    str[i] = str[i] - 32;
                    continue;
                }
            }
            else {
                if(str[i]>='A' && str[i] <= 'Z') {
                    str[i] =str[i] + 32;
                }

            }
        }
        
        
    }
      printf("%s", str);
}

int main()
{
    char str[100] = {0};
    fgets(str, sizeof str, stdin);

    firstLetterCapitalized(str);
 
    return 0;
} 
 */
/* 
#include<stdio.h>
#include<string.h>

int findFrequence(char str[], char c) {
    int count =0; 
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == c) {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100], ch;
    fgets(str, sizeof str, stdin);
    printf("Enter the char: ");
    scanf("%c",&ch);

    int res = findFrequence(str,ch);
    printf("'%c'-> %d times\n",ch, res);
 
    return 0;

} */


/// count the word from string.
/* #include<stdio.h> 
#include<string.h>

void print_even_position(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(i%2 ==0 ) 
            printf("%d ", arr[i]);
    }
}

int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    print_even_position(arr,n);

     
    return 0;
} */
/*  
#include<stdio.h>

void print_odd_index_elements(int arr[], int n) {
    for(int i=0; i<n; i++ ) {
        if(i%2 == 1 ) 
            printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    int n;  scanf("%d", &n);
    int arr[n];
    
    for (int i=0; i<n; i++ ) {
        scanf("%d", &arr[i] );
    }

    print_odd_index_elements(arr,n);
    
    return 0;
} */
 /* 
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{   
    int n; scanf("%d", &n);
    int arr[n], subst[n];

    for(int i=0; i<n; i++) 
        scanf("%d", &arr[i]);
  
    for(int i=0; i<n; i++) {
        subst[i] = abs(arr[n-i-1] - arr[i]);
    }

    for(int i=0; i<n; i++) {
        printf("%d ", subst[i]);
    }

     
    return 0;
}   */
/* #include<stdio.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0; i<n; i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)

void solve() {
    int n; scanf("%d", &n);
    int arr[n], subst[n];

    rep(i,n)
        scanf("%d", &arr[i]);

    rep(i,n) 
        subst[i] = abs(arr[n-i-1]-arr[i]);   

    rep(i,n) 
        printf("%d ", subst[i]); 
}

int main()
{

    solve();
    
    return 0;
} */
 
/* #include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{ 

    int index[10], j;

    
    j=0;
    // for(int i=0; str[i] !='\0'; i++) {
    //     if(islower(str[i])) {
    //         if(str[i]=='a' ||str[i] == 'e'|| str[i] =='i'||str[i]=='o' ||str[i] == 'u') {
    //             index[j++] =i;
    //         }
    //     }
        
    // }
    int count =0;

    for(int i=0; str[i] !='\0'; i++) {
        
            if(str[i]=='a' ||str[i] == 'e'|| str[i] =='i'||str[i]=='o' ||str[i] == 'u') {
                index[j++] =i;
                count++;
            }
 
    }
    printf("%d\n", count);

    for(int i=0; i<j; i++) {
        printf("%d ", index[i]);
    }


    return 0;
}
  */
/* 
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() 
{

    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    
    int index[100], j;

    j=0;
    for(int i=0; str[i]!='\0'; i++){
        if(islower(str[i])) {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u')
        {
            index[j++]=i;
        }

     }
 }

    printf("%s\n", str);
    for(int i=0; i<j; i++) {
        printf("%d ", index[i]);
    }


    return 0;

} */

/* #include <stdio.h>
#include <string.h>
int main() {
    char str[101];
    printf("enter string: ");
    gets(str);
    for(int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            printf("%c -> %d number index\n", str[i], i);
        } 
    }  
}*/
/* 
#include<stdio.h>
int main()
{

    // int arr[6]={1,2,3,4,5,6};
    // printf("%d %d",arr[arr[3]-1],arr[arr[3]+1]);

    // printf("\n");

     
    // int n= sizeof(arr)/sizeof(arr[0]);
    // printf("%d", n);

    // int arr[6]={1,2,3,4,5,6};
    //  long long x=&arr[0],y=&arr[4];
    //  printf("%lld\n", x);
    //  printf("%lld\n", y);
    //  printf("%lld",y-x);
     int arr[12];
    int res=sizeof(arr)/sizeof(arr[2]);
   printf("%d",res);

     
    return 0;
}
 */
/* 
arr[arr[3]+1]
arr[3+1] +1 // arr[3] +1
arr[4+1]
arr[5] = 6

and arr[arr[3]-1]
arr[5-1] -1
arr[4-1]
arr[3] = 4 */

/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_palindrome(char str[], int len) {
    int i=0;
    while(i < (len)/2) {
        if(str[i] != str[len-i-1]) {
            return 0;
        }
        i++;
    }
    return 1;

}

int main()
{
   char str[100];
   gets(str);

    int len = strlen(str);
    if(is_palindrome(str,len)) 
        printf("%s is palindrome.\n", str);
    else 
        printf("%s is not palindrome.\n", str);
     
     
    return 0;
} */
 

 //  check palindrome..

 /* #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<ctype.h>

 int main()
 {
     char a[100], b[100];
     scanf("%d", &a);

     strcpy(b,a);
     strrev(b);
     for(int i=0; i<strlen(a); i++) {
         if(a[i] != b[i]) {
             printf("NO\n");
             return 0;
         }
     }

    printf("Yes\n");
    return 0;


    return 0;
 }

   */

  
 /*  
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<ctype.h>

 int main()
 {
    char str[100];
    scanf("%s", &str);

    int i=0, j=strlen(str)-1;
    while(i<j) {
        if(str[i] != str[j]) {
            printf("NO\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("Yes\n");
    return 0;

    return 0;
 }
 */

  
/*    
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int count[26] = {0};
    for(int i=0; i<strlen(a); i++) {
        char value = a[i];
        count[value-'a']++;
    }
    for(char value='a'; value<='z'; value++) {
        if(count[value-'a']==0) {
            printf("No\n");
            return 0;
        }
    }
 
    printf("Yes\n");
    return 0;
 
 
    return 0;
} */
   
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int count_word(char *str) {
    int len = strlen(str);
    int count = 0;
    char nonwords[] = " .,;\n\t";
    
    int i=0;
    while(i < len) {
        if(strchr(nonwords, str[i] == NULL)) 
            break;
        i++;
    }
    for( ; i<len; i++) {
        while(i < len) {
            if(strchr(nonwords, str[i] != NULL)) 
                break;
            i++;
        }
        count++;
    }
    while(i < len) {
        if(strchr(nonwords, str[i] == NULL))
            break;
        i++;
    }
    return count;
}

int main()
{

    // char str[100];
    // fgets(str, sizeof str, stdin);
    
    char str[] = " i am reasy to study.";
    int count = count_word(str);
    printf("%d", count);

 
    return 0;

} */


/* 
#include <stdio.h>
#include <string.h>

int word_count(char *s);

int main()
{
  char s[100];
  fgets(s, sizeof s, stdin);
  
  int count = word_count(s);
  printf("%d\n", count);

  return 0;
}

int word_count(char *s)
{
  int len = strlen(s);
  int count = 0;

  char nonwords[] = " .,;\n\t";
  
  // skip though a possible nonword at the start of the string
  int i = 0;
  while (i < len)
  {
    if (strchr(nonwords, s[i]) == NULL)
      break;
    i++;
  }

  for ( ; i < len; i++)
  {
    while (i < len)
    {
      if (strchr(nonwords, s[i]) != NULL)
        break;
      i++;
    }
     
    count++;
    
    while (i < len)
    {
      if (strchr(nonwords, s[i]) == NULL)
        break;
      i++;
    }
  }
  return count;
} */

 
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// int count_vowels(char *s) { 
//     int count = 0;
//     for(int i=0; i<strlen(s); i++) {
//         switch(toupper(s[i])) {
//             case 'A':
//             case 'E':
//             case 'I':
//             case 'O':
//             case 'U':
//                 count++;
//         }
//     }
//     return count;
// }

// int main()
// {

//     char str[100];  
//     gets(str);

//     int count = count_vowels(str);
//     printf("Toatl vowels: %d\n", count);
 
//     return 0;
// }  


/// copya arry to another array 
/* 
#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void readArray(int arr[], int n)
 {
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
}

int *copy_array(int *arr, int n) 
{

    int *c=(int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        c[i] = arr[i];
    }
    return c;
}

void print_array(int arr[], int n ) 
{
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
  {
//     int n; scanf("%d", &n);
//     int arr[n];
//     int cp[n];

    int arr[] = {1, 2, 3, 5, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ar2[] = {1, 5, 6, 9, 10, 20, 50 , 30, 50};
    int n2 = sizeof(ar2)/sizeof(ar2[0]);

    int *a = copy_array(arr, n);
    int *b = copy_array(ar2, n2);

    print_array(a,n);
    print_array(b, n2);


    return 0;
} */
 
/* 
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool is_leap_year(int year) {

    if(year%4 != 0) return false;
    else if(year % 100 != 0) return true;
    else if(year % 400 != 0) return false;
    else return true;
}

int main()
{   
    // int year; 
    // printf("Enter the year: ");
    // scanf("%d", &year);

    // if(is_leap_year(year)) 
    //     printf("%d is leap year\n", year);
    // else
    //     printf("%d is not leap year\n", year);

    for(int y = 1990; y<= 2100; y++) {
        if(is_leap_year(y)) 
            printf("%d LEAP-YEAR\n", y);
        else 
            printf("%d\n", y);
    }


    return 0;
}  
 */

 
// max occurence in string.
/* 
#include<stdio.h>
#include<string.h>

void max_occur(char *str) {
    int max= 0;
    int count[256] = {0};

    for(int i=0; i<strlen(str); i++) {
        int val = (int)str[i];
        count[val]++;
    }
    for(int i=0; i<256; i++) {
        if(count[i] > count[max]) {
            max = i;
        }
    }
   // printf("%c maximum %d times", max, count[max]);
    printf("%c maximum %d times\n", max, count[max]);
}

int main()
{

    char str[100];
    gets(str);

    max_occur(str);
    
    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

int main()
{
    int n; scanf("%d", &n);

    while(n--) {
        int t; 
        int a[200001];
        int c=-1;
        int freeq[200001] = {0};

        scanf("%d", &t);

        for(int i=0; i<t; i++) {
            scanf("%d", &a[i]);
            int r = a[i];
            freeq[r]++;

            if(freeq[r] >= 3) {
                c=r;
            }
        }

        printf("%d\n", c);
    }

 
    return 0;


} */
/* 
#include<stdio.h>
#include<string.h>

int is_prime(int n) {
    int i=2;
    while(i<=n/2) {
        if(n%i ==0) 
            return 0;
        else 
            i++;
    }
    return 1;
}

int main()
{

    int n; 
    printf("Enter the positive num: ");
    scanf("%d", &n);

    int ans = is_prime(n);
    if(ans==1) 
        printf("%d is prime.\n",n);
    else 
        printf("%d is not prime\n", n);
 
    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>

int max_element(int arr[], int n) {
    
    int i=1;
    int max= arr[0];

    while(i<n) {
        if(arr[i] > max) {
            max = arr[i];
        }
        i++;
    }
    return max;
}

int main()
{

    int n; scanf("%d", &n);
    int arr[n+3];
    for(int i=0; i<n; i++) 
        scanf("%d", &arr[i]);

    int ans = max_element(arr,n);
    printf("%d", ans);
 
    return 0;
}

   */
  

//Question_1:
/* 
#include<stdio.h>
#include<string.h>

double make_sum(double a, double b) {
    return a+b;
}

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    int ans = make_sum(x, y);
    printf("%.3lf\n", ans);
 
    return 0;
} */

/* 

#include<stdio.h>
#include<string.h>

int make_average(int arr[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    return sum/n;
}

int main()
{ 
    int n; scanf("%d",&n);
    int arr[n+2];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = make_average(arr,n);
    printf("%d\n", ans);
    return 0;
} */


/* 
#include<stdio.h>
#include<string.h>

int count_zero(char *str) {
    
    int count=0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i] == '0') {
            count++;
        }
    }
    return count;
}

int main()
{ 
    char str[1001];
    scanf("%s", &str);

    int ans = count_zero(str);
    printf("Zeros are: %d\n", ans);
     
    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

void foo() {
    printf("foo\n");
    bar();
}

void bar() {
    printf("bar\n");
}

int main()
{   
    foo();
     
    return 0;
} */

// Question= 8:

/* 
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool is_check(int arr[], int n) {
    int count=0;
    for(int i=0; i<n; i++) {
        if(arr[i] == n) 
           count++;
    }

    if(count != (n+1)) {
        return false;
    }
    else {
        return true;
    }
        
} 

int main()
{   

    // int n; scanf("%d", &n);
    // int arr[n];
    // for(int i=0; i<n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    int arr[] = {1, 3, 5, 7, 9};
    int n= 5;
    if(is_check(arr,n)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
     
    return 0;
}  

  */


// question_6:

/*   
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{   
    int x= 10;
    int *p = &x;
    int **q = &p;
    int ***r= &q;

    ***r = 10000;
    printf("%d", x);
   
     
    return 0;
}  
 */

/*  
#include<stdio.h>
#include<string.h>
#include<stdbool.h>



// has return  + has parameter..
bool odd_even(int n) {
    if(n % 2==0) {
        return true;
    }
    else {
        return false;
    }
}


// not return + has parameter..
void odd_even(int n) {
    if(n % 2 == 0) 
        printf("Even\n");
    else 
        printf("Odd\n");
}


// has return + no parameter..

bool odd_even() {
    int n; scanf("%d", &n);
    if(n % 2 == 0) 
        return true;
    else return false;

}

// no return + no parameter..

void odd_even() {
     int n; scanf("%d", &n);
    if(n % 2 == 0) 
        printf("Even\n");
    else 
        printf("Odd\n");
}

int main()
{   
    int n; scanf("%d", &n);
    if(odd_even(n)) {
        printf("even\n");
    }
    else printf("odd\n");
 
     
    return 0;
}  
  */
 /* 
   
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int check_palindrome(char *str) {
    int n= strlen(str), count=0;

    for(int i=0; i<n/2; i++) {
        if(str[i] == str[n-i-1]) {
            continue;
        }
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    scanf("%s", &str);

    int ans = check_palindrome(str);
    printf("Minimum number of char change: %d", ans);

 
    return 0;
}  
  */

/* 
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void change_array(int arr[], int n, int rev[]) {

    int j=0;
    for(int i=n-1; i>=0; i--) {
        rev[j++] = arr[i];
    }
}


void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    int rev[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }  
 
    change_array(arr,n,rev);

    print_array(rev, n);
    
  
 
    return 0;
} */



 /* 
#include <stdio.h> 
#include<string.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int  selection_sort(int arr[], int n) {

    int i,j,min_index, count=0;

    for(int i=0; i<n-1; i++) {
        min_index=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index=j;
            }
        }

        if(min_index != i) {
            //count++;
            swap(&arr[i], &arr[min_index]);
            count++;
        }
    }
    return count;
}
 
int main() 
{ 

   int n; scanf("%d", &n);
   int arr[n];
   for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
   }
     
    int ans = selection_sort(arr,n);
    printf("Total number of swaps: %d\n", ans);
    
    return 0;

}
 */
  
 

/* 
#include<stdio.h>
#include<string.h>



int main()
{

    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }




    return 0;
} */
/* 

#include  <stdio.h>

int count (void)                 // no need for parameter if you're asking user for size
{
   int size = 0;                 //define size
   int ret = scanf("%d", &size); //read it

   if ( (ret != 1) || ( size < 1) ) return -1;      //error check

   int i = 0;                    //initialize local variables

   int array[size];              //note: this is VLA

   do
   {
       array[i] = i+1;           //start populating elements
       i++;
   }
   while (size > i);             //go on unless you've reached the given size

   puts ("Resulting array is");   // start printing ....

   for (i = 0; i < size; i++)
   {
       printf("%d ", array[i]);   //...them one by one
   }

   return 0;
}

int main(void)
{
    (void)count();  //call the function
} */

    

/* 
 #include<stdio.h>
#include<stdbool.h>
bool check_array(int *ar,int n)
{
    int check[50]={0};

    for(int i=0;i<n;i++)
    {
        int value = ar[i];
        check[value]++;
    }

    for(int value=1;value<=n;value++)
    {
        if(check[value]==0)
        {
             return false;
        }
    }
     return true;
}
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    bool ans = check_array(ar,n);
    if(ans)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
} */

   /* 
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check_array(int arr[], int n) {
    int count[10001] = {0};
    for(int i=0; i<n; i++) {
        int x = arr[i];
        count[x]++;
    }

    for(int i=1; i<=n; i++) {
        if(count[i] == 0) {
            return false;
        }
    }
    return true;
}

int main()
{

    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    bool ans = check_array(arr,n);
    if(ans)
        printf("Yes\n");
    else 
        printf("No\n");

      
    return 0;
} 
    */
 
/**
check_array([2,5,1,3,4],5) -> true

check_array([1,2,3,4,2],5) -> false
check_array([2,1,3,4,4,5],6) -> false

 **/


 