/* #include<stdio.h>
#include<string.h>

struct Distance{
    int feet;
    float inches;
};

int main()
{
    struct Distance d1;
    d1.feet = 13;
    d1.inches = 9.4;

    printf("\nFeet : %d", d1.feet);
    printf("\ninches: %f", d1.inches);
    
    return 0;
} */

/* #include<stdio.h>
#include<string.h>

struct Date {
    int day; 
    int month;
    int year;
};
 
int main()  
{   
    struct Date today = {23, 5, 2022};
    today =(struct Date ) {12, 12, 2012};

    printf("%d-%d-%d\n", today.day, today.month, today.year);
     
     return 0;
} */


/* #include<stdio.h>
#include<stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

bool isFirstDay(struct Date date) {
    return date.day ==1 && date.month==1;
}

int main() 
{
    struct Date date = {1, 1, 2022};
    if(isFirstDay(date)) {
        printf("Happy New year");
    }

#include<stdio.h>

struct site

{

    char name[] = "Hello";

    int no_of_pages = 200;

};

int main()

{

    struct site ptr;

    printf("%d ", ptr.no_of_pages);

    printf("%s", ptr.name);

    return 0;

}

    return 0;
}

  */
 

 /* #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

struct Point {
    int x, y;
};

 int main()
 {
    struct Point p1 = {1, 3};
     
    struct Point *p2 = &p1;


    printf("%d %d", p2->x, p2->y);

     return 0;
 } */
  

/* #include<stdio.h>
#include<string.h>

struct Book {
    int id, price;
    char name[100];

} b;

void inputInfo(struct Book b) {

    printf("Enter the id: ");
    scanf("%d", &b.id);
    printf("Enter the name: ");
    scanf("%s", &b.name);
    printf("Enter the price: ");
    scanf("%d", &b.price);

}

void PrintBookIfo(struct Book b) {
    printf("Book id:%d\n",b.id);
    printf("Book Name:%s\n", b.name);
    printf("Book Price:%d Tk.\n",b.price);
}

int main()
{   
    
    inputInfo(b);
    PrintBookIfo(b);

    return 0;
} */

/* #include<stdio.h>
#include<string.h>

struct Distance {
    int feet;
    float inches;
};


int main()
{   
    struct Distance d1,d2 = {15, 6.5};
    d1.feet = 15;
    d1.inches=6.5;
    if((d1.feet == d2.feet) && (d1.inches == d2.inches)) {
        printf("same\n");
    }
    else {
        printf("Not same\n");
    }
    
    
    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>

struct Distance {
    int feet;
    float inches;
};


int main()
{
    struct Distance d[5];

    for(int i=0; i<5; i++) {
        printf("Enter feet & inches: ");
        scanf("%d %f", &d[i].feet, &d[i].inches);
    }

    printf("values are:\n");

    for(int i=0; i<5; i++) {
        printf("%d %.2f\n",d[i].feet, d[i].inches);
    }

    return 0;
} */


/* #include<stdio.h>
#include<string.h>

struct Student {
    int roll_no;
    char name[25];
    float marks[5];
};

int main()
{
  struct Student s;
  printf("Enter the roll number: "); 
  scanf("%d", &s.roll_no);

  printf("Enter name: ");
   
  gets( s.name);

  for(int i=0; i<5; i++) {
      printf("Enter Marks:%d:", i+1);
      scanf("%d", &s.marks[i]);
  }

    printf("Roll: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    
    for(int i=0; i<5; i++) {
        printf("Marks:%d:%.2f\n", (i+1), s.marks[i]);
    }

    return 0;
}
 */

/* #include<stdio.h>
#include<string.h>

struct Student {
    int roll_no;
    char name[100];
    int age;
    int marks;

};

int main()
{
  struct Student s = {10, "Brown", 15, 50};

  printf("%d %s %d %d\n", s.roll_no, s.name, s.age, s.marks);
 
    return 0;
} */

/* #include<stdio.h>
#include<string.h>

struct Student {
    int roll_no;
    char name[30];
    int age;
    char dept[100];
};

int main()
{
    struct Student s[3];

    for(int i=0; i<3; i++) {

        printf("Student %d\n", i+1);
        s[i].roll_no = i+1;
        printf("Enter name:\n");
        scanf("%s", s[i].name);
        printf("Enter age:\n");
        scanf("%d", &s[i].age);
        printf("Enter Deptmnt:\n");
        scanf("%s", s[i].dept);
    }

    for(int i=0;i<3; i++) {

        if(s[i].roll_no==2) {
            printf("\n\n");
            printf("Student %d\n", i+1);
            printf("Roll NO: %d\n", s[i].roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Age:%d\n", s[i].age);
            printf("Depertment: %s\n", s[i].dept);
        }
    }

    return 0;
} */

   
/* https://www.demo2s.com/c/c-structure-review-question-2.html */



/* #include<stdio.h>
#include<string.h>

struct nametype {
    char first[20];
    char second [20];
};

struct student {
    int id;
    struct nametype name;
};

int main()
{
    struct student one;

    scanf("%d", &one.id);
    scanf("%s", one.name.first);
    scanf("%s", one.name.second);

    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.second);


    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

struct nametype {
    char first[20];
    char second[20];
};

struct studenttype {
    int id;
    struct nametype name;
};


int main()
{
    struct studenttype student[5];
    
    for(int i=0; i<5; i++) {
        printf("Enter Id for student %d: ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter the first name for student %d: ", i+1);
        scanf("%s", student[i].name.first);
        printf("Enter the second name for student %d: ", i+1);
        scanf("%s", student[i].name.second);
    }

    printf("Output:\n\n");

    for(int i=0; i<5; i++) {
        printf("ID: %d\n", student[i].id);
        printf("Name: %s %s\n",student[i].name.first, student[i].name.second);
    } 

    return 0;
} */


/* #include<stdio.h>
#include<string.h>

struct Result {
    int first; 
    int second;
};

struct Result divide (int x, int y) {
    return (struct Result) {x/y, x%y};
}

int main()
{
    int a=10, b=3;

    struct Result result = divide(a,b);
    printf("%d %d\n", result.first, result.second);


    return 0;
} */

/* #include<stdio.h>
#include<string.h>

struct ArrayHolder {
    int arr[100];
};

struct ArrayHolder makeNarray(int n) {
    struct ArrayHolder ans;
    for (int i=0; i<n; i++) {
        ans.arr[i] = i+1;
    }
    return ans;
}

int main()
{   
    int n=5;
    struct ArrayHolder ans= makeNarray(n);
    for(int i=0; i<n; i++) {
        printf("%d ", ans.arr[i]);
    }

    return 0;
} */


#include<stdio.h>
#include<string.h>



int main()
{

    
     
    


    return 0;
}