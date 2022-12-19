/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 0) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
} */

  /* 
#include<stdio.h>
#include<string.h>

int main()
{   
    int n; scanf("%d", &n);
    char str[100];
    
    int i,value[26]={0},count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if('a'<=str[i] && str[i]<='z')
		{
			count+=!value[str[i]-'a'];
			value[str[i]-'a']=1;
		}
		else if('A'<=str[i] && str[i]<='Z')
		{
			count+=!value[str[i]-'A'];
			value[str[i]-'A']=1;
		}
	}

    if(count==26) 
        printf("YES");
    else 
        printf("NO");


    return 0;
} */ 
 
 
 #include<stdio.h>
 #include<string.h>
 

 int main()
 {  

    char str[1001];
    scanf("%s",  str);
    int count[11] = {0};
    
    for(int i=0; i<strlen(str); i++) {
        if(str[i]>='0' && str[i] <= '9') {
            int val = str[i];
            count[val-'0']++;
        }
    }

    for(int i=0; i<10; i++) {
        printf("%d ", count[i]);
    }
     
    return 0;
 }  
 
 
/* 
 #include<stdio.h>
 #include<string.h>
#include<stdlib.h>

int marksSum(int *marks, int n, char gen) {
    int sum =0; 
    for(int i=(gen=='b'? 0 : 1); i<n;  i= i+2) {
        sum += *(marks+i);
    }
    return sum;
}

 int main()
 {

    int n; scanf("%d", &n);
    char gen;
    int sum;
    
    int *marks = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d", (marks+i));
    }
    
    scanf(" %c",&gen);

     sum = marksSum(marks, n, gen);
     printf("%d", sum);
     free(marks);

     return 0;
 }
 */

/* 
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2) 
        sum += *(marks + i);
    
    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
} */

 