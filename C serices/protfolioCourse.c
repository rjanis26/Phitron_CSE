/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void letter_flip(char *str ) {
    int length = strlen(str);
    for(int i=0; i<length; i++) {
        if(isupper(str[i])) 
            str[i] = tolower(str[i]);
        else if(islower(str[i]))
            str[i] = toupper(str[i]);
    }
    printf("%s", str);
}

int main()  
{
    char str[100];
    fgets(str, sizeof str, stdin);

    letter_flip(str);
 
    return 0;
} */
/* 
#include<stdio.h>
#include <string.h>

int word_count(char *s);

int main()
{
  //char s[] = "   This is, the way. Another...";
  char str[100];
  gets(str);
  int count = word_count(str);
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
}   */
/* 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    int index=0;
    printf("Enter any string\n");
    while((ch=getchar())!='\n')
    {
        index++;
        switch(ch)
        {
        case 'a':
            printf("a is found at %d\n",index);
            break;
        case 'A':
            printf("A is found at %d\n",index);
            break;
        case 'e':
            printf("e is found at %d\n",index);
            break;
        case 'E':
            printf("E is found at %d\n",index);
            break;
        case 'i':
            printf("i is found at %d\n",index);
            break;
        case 'I':
            printf("I is found at %d\n",index);
            break;
        case 'o':
            printf("o is found at %d\n",index);
            break;
        case 'O':
            printf("O is found at %d\n",index);
            break;
        case 'u':
            printf("u is found at %d\n",index);
            break;
        case 'U':
            printf("U is found at %d\n",index);
            break;
        }
    }
    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b; 
  *b = temp;
}

// void reverseArray(int arr[], int n) {
//   for (int i=0; i<n/2; i++) {
//       swap(&arr[i], &arr[n-i-1]);
//   }
// }

void printArray(int arr[], int n ) {
  for(int i=0; i<n; i++) 
    printf("%d ", arr[i]);
  printf("\n");
}

void reverseArray(int arr[], int n ) {
  int low = 0, high = n-1;

  while(low < high) {
    swap(&arr[low++], &arr[high--]);
  }
}

int main()
{
  int n; scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++) 
    scanf("%d", &arr[i]);

  reverseArray(arr,n);
  printArray(arr,n);
  
  return 0;
}

  */

 