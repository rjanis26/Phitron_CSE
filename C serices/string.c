/* #include<stdio.h>
#include<string.h>

int main() 
{
    //char str[] = "Hello world";
    //printf("%s", str);

    printf("Enter your name: ");
    char name[10];
    //scanf("%s", name);
    //gets(name);
    fgets(name, 10, stdin);
    printf("Hello, %s\n", name);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{

    // printf("Enter the name: ");
    // char str[50];
    //  fgets(str, sizeof str, stdin);
    // //gets(str);
    // printf("%s", str);
    // int len=0;
    // while(str[len] != '\0') {
    //     len++;
    // }

    // printf("Lenth: %d\n", len-1);

    // printf("Enter your string: ");
    // char str[100];
    // fgets(str, sizeof str, stdin);

    // int i=0;
    // while(str[i] != '\0') {
    //     printf("%c ", str[i]);
    //     i++;
    // }

    // printf("\n");

    printf("Enter the string: ");
    char name[100]; 
    fgets(name, sizeof name, stdin);

    for(int i=strlen(name); i>=0; i--) {
        printf("%c", name[i]);
    }
    printf("\n");

    // printf("Enter the string: ");
    // char str[100];
    // fgets(str, sizeof str, stdin);

    // int i=0;
    // for(str[i] != '\0'; i>=0; i--) {
    //     printf("%c",str[i]);
        
    // }
    
    // printf("Enter the string: ");
    // char str[100];
    // fgets(str, sizeof str, stdin);

    // int i=0, word=1;
    // while(str[i] != '\0') {
    //     if(str[i]== ' ' || str[i] == '\n' || str[i] == '\t') {
    //         word++;
    //     }
    //     i++;
    // }

    // printf("%d", word-1);
 
    return 0;
} */

/* #include<stdio.h>
#include<string.h>

int main()
{

    printf("Enter the string: ");
    char str[100];

    int alp=0, digit=0, spacial_ch=0, i=0;

    fgets(str, sizeof str, stdin);

    while(str[i] != '\0') {
        
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            alp++;
        }
        else if(str[i]>='0' && str[i] <= '9') {
            digit++;
        }
        else {
            spacial_ch++;
        }
        i++;
    }

    printf(" Alphabat: %d\n", alp);
    printf(" Digits: %d\n", digit);
    printf("Spacial ch: %d\n",  spacial_ch);
    return 0;

} */

/* #include<stdio.h>
#include<string.h>

int main()
{

    printf("Enter the string: ");
    char str1[100], str2[100];
    fgets(str1, sizeof str1, stdin);

    int i=0;
 
    while(str1[i] != '\0') {
        str2[i]= str1[i];
        i++;
    }
    str2[i] = '\0';


    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("Number of the copied string:%d", i);

    return 0;
} */
/* #include<stdio.h>
#include<string.h>

int main() 
{

    printf("Enter the string: ");
    char str[100];
    fgets(str, sizeof str, stdin);

    int vowel=0, cons=0;

    for(int i=0; i<strlen(str); i++) {
        if(str[i]=='a'||str[i]=='e' || str[i]=='i' || str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            vowel++;
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') {
            cons++;
        }
    }

    printf("Vowels are: %d\n", vowel);
    printf("Consonant are: %d\n", cons);

    
    return 0;
} */

  
   
 /*  #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)
 
void findMaxElements(int arr[], int n) {
    int max=arr[0], count=1;
    rep(i,n) {
        if(arr[i] > max) {
            max = arr[i];
            count=1;
        }
        else if(arr[i]==max) {
            count++;
        }
    }
    printf("Max element: %d\n", max);
    printf("Max occourrce: %d", count);
}

int main()
{
    int n;sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }

    findMaxElements(arr, n);
    //printf("Max element: %d\n", max);
     
    return 0;
}    
   */


/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)

void insertElements(int arr[], int n, int element, int pos) {
   int i;
    if(pos > n+1 || pos <=0) {
        printf("Invalid position!");
    }
    else {
        /// make room for new element by shifting to right...
        for(int i=n; i>=pos; i--) {
            arr[i]=arr[i-1];
        }
        /// insert element at given position
        arr[pos-1]=element;
        n++;  // increment the array size.
    }
}

int main()
{
    int n; sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }
    
    int pos, element;
    printf("Input element to insert: ");
    sf(element);
    printf("Input position where to insert: ");
    sf(pos);

    insertElements(arr,n,element, pos);
    rep(i,n) {
        printf("%d ", arr[i]);
    }
 
    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)


void searchElements(int arr[], int n, int item) {
    int index = 0, found=0;
    
    rep(i,n) {
        index += 1;
        if(arr[i]==item) {
            found=1;
            break;
        }
    }

    if(found==1) {
        printf("Element is found at index: %d\n", index-1);
    }
    else {
        printf("Element is not found.\n");
    }
}

int main() 
{
    int n; sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }

    int item;
    printf("Element to search: ");
    sf(item);

    searchElements(arr, n, item);

    return 0;
} */

/* 
  
  

void reverse_string(char str[]) {
    srep(i) {
        printf("%c", str[strlen(str)-i-1]);
    }
}

int main() 
{

    char str[100];
    fgets(str, sizeof str, stdin);
    
    // for(int i=strlen(str); i>=0; i--) {
    //     printf("%c", str[i]);
    // }

    reverse_string(str);

    return 0;
}    */

/* #include<stdio.h>
#include<string.h>
#define srep(i) for(int i=0; i<strlen(str); i++) 

int main()
{

    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);

    int i=0, vowel=0, cons=0;
    srep(i) {
        if(str[i]>= 'a' && str[i]<='z' || str[i] >= 'A' && str[i]<='Z') {
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'||str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) {
                vowel++;
            }
            else {
                cons++;
            }
        }
    }

    printf("vowels are: %d\n", vowel);
    printf("Consonants are: %d\n", cons);
    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    char string1[255];
    int  i;
   printf("Input a sentence: ");
   gets(string1);
   printf("The original string:\n");
   puts(string1);
   i=0;
    while(string1[i]!='\0')
    {
        if(string1[i]=='a' ||string1[i]=='e' ||string1[i]=='i' ||string1[i]=='o' ||string1[i]=='u')
            string1[i]= toupper(string1[i]) ;
        i++;
    }
    printf("After converting vowels into upper case the sentence becomes:\n");
    puts(string1);
}
 */

  
/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define srep(i) for(int i=0; i<strlen(str); i++)

int countOccurence(char str[], char ch) {
    int count=0;

    srep(i) {
        if(str[i]==ch) {
            count++;
        }
    }
    return count;
}

int main()
{

    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);

    char ch;
    printf("Enter the character want to find: ");
    scanf("%c", &ch);

    int res = countOccurence(str, ch);
    printf("Total occurrence: %d", res);

    // int count=0;
    // // srep(i) {
    // //     if(str[i]==ch) {
    // //         count++;
    // //     }
    // // }

    // int i=0;
    // while(str[i] != '\0') {
    //     if(str[i]== ch) {
    //         count++;
    //     }
    //     i++;
    // }

    // printf("toatal: %d", count);

    return 0;
}   */

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)
 

int main() 
{   
    printf("Enter the size of the array: ");
    int n; sf(n);
    int arr[n+3];

    printf("Enter the elements of the aray: ");
    rep(i,n) {
        sf(arr[i]);
    }

    int item;
    printf("Element to search: ");
    sf(item);

    int index = 0, found=0;
    
    rep(i,n) {
        index += 1;
        if(arr[i]==item) {
            found=1;
            break;
        }
    }

    if(found==1) {
        printf("Element is found at index: %d\n", index-1);
    }
    else {
        printf("Element is not found.\n");
    }
     
    return 0;

} */


/* #include <stdio.h>
#include <string.h>

int main() {
   char str[5][50], temp[50];
   printf("Enter 5 words: ");

   // Getting strings input
   for (int i = 0; i < 5; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   // storing strings in the lexicographical order
   for (int i = 0; i < 5; ++i) {
      for (int j = i + 1; j < 5; ++j) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
} */
 /*  #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define ch 256
#define srep(i) for(int i=0; i<strlen(str); i++)

int findMaxOccurrence(char str[]) {
     
    int count[ch];
    for(int i=0; i<ch; i++) {
        count[i]=0;
    }

    int i=0;
    while(str[i] != '\0') {
        int vals = (int)str[i];
        count[vals]++;
        i++;
    }

    int max=0;
    for(int i=0; i<ch; i++) {
        if(count[i] > count[max]) {
            max=i;
        }
    }

    return max;
}

int main()
{
    char str[100];
    int ch_freq[ch];
    printf("Enter the string: \n");
    fgets(str, sizeof str, stdin);

    int occu = findMaxOccurrence(str);
    printf("Max occurrence:%d",occu);
      
    return 0;
}    */


 

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

 
/// substring in c ...

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0;i<=(n); i++) 
#define sf(x) scanf("%d", &x)
#define ssf(x,y) scanf("%d%d", &x, &y)

void strcate(char a[], char b[], char result[]) {
    int i=0, j=0;
    while(a[i] !='\0') {
        result[j++]=a[i++];
         
    }

    i=0;
    while(b[i] !='\0') {
        result[j++] = b[i++];
        
    }
    result[j]= '\0';
}

int main()
{
    char a[256], b[256], result[256];
     
     gets(a);
     gets(b);

    strcate(a, b, result);

    printf("%s", result);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int main()
{   
    char s[256];
    gets(s);
    int up=0, low=0;

    int n= strlen(s);
    for(int i=0; i<n; i++) {
        if(isupper(s[i])) {
            up++;
        }
        else {
            low++;
        }
    }
    if(up > low) {
        char ch;
        for(int i=0; i<n; i++) {
            ch = toupper(s[i]);
            printf("%c", ch);
        }
    }
    else {
        char ch;
        for(int i=0;i<n; i++) {
            ch = tolower(s[i]);
            printf("%c",ch);
        }
    }

    return 0;
} */


/* #include<stdio.h>
#include<string.h>

void stringCat(char a[], char b[], char out[]) {
    int i=0,j=0, k=0;
    while(a[i] != '\0') {
        out[k++] = a[i++];
    }
  
    while(b[j] != '\0') {
        out[k++] = b[j++];
    }
    out[k] = '\0';
}

int main()
{
    char str[256];
    char str2[256]; 
    gets(str);
    gets(str2);

    int size = strlen(str) + strlen(str2);
    char out[size+1];

    stringCat(str, str2, out);
    printf("%s", out);

    return 0;
} */

#include<stdio.h>
#include<string.h>

void stringCate(char a[], char b[], char out[]) {
    
    char *ptr1 =a, *ptr2=b, *ptr=out;

    while(*ptr1 != '\0') {
        *ptr = *ptr1;
        ptr++;
        ptr1++;
    }

    while(*ptr2 != '\0') {
        *ptr = *ptr2;
        ptr++;
        ptr2++;
    }
    *ptr = '\0';
}

int main()
{
    char str[256];
    char str2[256];

    gets(str);
    gets(str2);

    int len=strlen(str)+strlen(str2);
    char out[len+1];

    stringCate(str,str2, out);
    printf("%s", out);



    return 0;
}