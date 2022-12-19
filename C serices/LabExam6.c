

/* 6.Find the binary representation of the number 23. 
 */
/* 
 #include<stdio.h>
#include<string.h>
#include<math.h>

void toBinary(unsigned int n, char str[]) {

    int index=0;
    while(n) {
        int digit = n%2;
        n/=2;
        str[index]=digit+'0';
        index++;
    }
    str[index] = '\0';
    int i=0, j=strlen(str)-1;
    while(i<j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", str);
}

int main()
{ 
    unsigned int n; 
    char str[100];
    scanf("%d",&n);
    
    toBinary(n,str);
 
    return 0;
}   */

/* #include<stdio.h>
#include<string.h>
#include<math.h>

int findXorBetweenTwo(unsigned int n) {
     
    switch(n & 3) {
        case 0:
            return n;

        case 1: 

            return 1;
        case 2:

            return n+1;
        case 3:
            return 0;
         
    }
}

int main()
{
    unsigned int l, r;
    scanf("%d %d", &l, &r);

    int result = findXorBetweenTwo(r) ^ findXorBetweenTwo(l-1);
    printf("%d\n", result);
 
    return 0;

} */

// Question-8:
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int findXorBetweenTwoNum(unsigned int n) {

    int ans = n%4;
    if(ans == 0) {
        return n;
    }
    else if(ans == 1) {
        return 1;
    }
    else if(ans == 2) {
        return n+1;
    }
    else if(ans == 3) {
        return 0;
    }
}

int findXor(unsigned int l, unsigned int r) {
    return (findXorBetweenTwoNum(l-1) ^ findXorBetweenTwoNum(r));
}

int main()
{   
    unsigned int l,r;
    scanf("%d %d", &l, &r);

    int ans = findXor(l,r);
    printf("XOR between l and r: %d\n", ans);


    return 0;
} */

 // Question 6:
// how to return multiple value from a structur in c...

 /*  #include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Tuple {
    int a, b;
    char c;
};

struct Tuple initialize () {
    struct Tuple tuple = {10, 50, 'A'};
    return tuple;
}

int main()
{
    int a, b; 
    char c;
    struct Tuple tuple = initialize();
    a=tuple.a;
    b= tuple.b; 
    c = tuple.c;

    printf("a = %d, b = %d, c = %c", a, b, c);
 
    return 0;
}  */
 

/*  
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct greaterSmaller {
	int greater, smaller;
};

typedef  struct greaterSmaller Struct;

Struct findGreaterSmaller(int a, int b)
{
	Struct s;
	if (a > b) {
		s.greater = a;
		s.smaller = b;
	}
	else {
		s.greater = b;
		s.smaller = a;
	}

	return s;
}

 
int main()
{
	int x, y;
	Struct result;

	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y);
 
	result = findGreaterSmaller(x, y);
	printf("greater number is: %d\nsmaller number is: %d",result.greater, result.smaller);

	return 0;
}
 */



 /* #include<stdio.h>
 #include<string.h>

 struct Result {
    int sum;
    int multiplication;
 };

 struct Result answer(int x, int y, int z) {
     struct Result ans;
     ans.sum = x + y+ z;
     ans.multiplication = x * y* z;
     return ans;
 }


 int main()
 {
    int a=10, b=5, c= 8;
    struct Result result = answer(a,b,c);
    printf("%d %d\n", result.sum, result.multiplication);
     
 } */

 /* 
#include<stdio.h>
#include<string.h>

struct greaterSmaller {
    int greater;
    int smaller;
};

struct greaterSmaller findAns(int a, int b) {
    struct greaterSmaller s;
    if(a > b) {
        s.greater = a;
        s.smaller = b;
    }
    else {
        s.greater = b; 
        s.smaller = a;
    }
    
    return s;
}

int main()
{

    int x, y; 
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    struct greaterSmaller ans = findAns(x,y);
    printf("Grater: %d\nSmaller: %d", ans.greater, ans.smaller);


    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int findXor(int l, int r) {
    int ans=0;
    for(int i=l; i<=r; i++) {
        ans = ans^i;
    }
    return ans;
}

int main()
{
    int m,n;
    scanf("%d %d", &m, &n);

    int res = findXor(m,n);
    printf("%d\n", res);
 
    return 0;
} */

// Binary conversion...

 /*  #include<stdio.h>
#include<string.h>

void toBinary(long long int n) {

    long long int i;
    printf("%c",'0');
    for(i = 1<<30; i>0; i=i/2) {
        if((n & i) != 0) {
            printf("%c", '1');
        }
        else {
            printf("%c", '0');
        }
    }
}

int main()
{ 
    toBinary(150);
    printf("\n");
    toBinary(3);
 
    return 0;
}  
 */

/*
#include<stdio.h>
#include<string.h>

void toBinary(unsigned n) {
    if(n > 1) {
        toBinary(n /2);
    }
    printf("%d", n%2);
    
}

int main()
{ 
    toBinary(7);
    printf("\n");
    toBinary(3);
 
    return 0;
}   */

/* 
#include<stdio.h>
#include<string.h>
  
#include<stdio.h>
#include<string.h>

 void toBinary(long long int n) {

    long long int i;
    printf("%c",'0');
    for(i = 1<<6; i>0; i=i/2) {
        if((n & i) != 0) {
            printf("%c", '1');
        }
        else {
            printf("%c", '0');
        }
    }
}

 

int main()
{
    unsigned int n;
    scanf("%d", &n);
    toBinary(n);
    printf("\n");

    for(int i=0; i<8; i++) {
        printf("%c", (n & 8) ? '1': '0');
        
        n >>= 1;
    }

    return 0;
 
} 
   


void toBinary(unsigned n) {
    if(n > 1) {
        toBinary(n>>1);
    }
    printf("%d", n &1);
    
}

int main()
{ 
    toBinary(7);
    printf("\n");
    toBinary(3);
 
    return 0;
}   */

 ///Question_5:
/* 
 #include<stdio.h>
 #include<string.h>

struct Student {
    char* name[100];
    int class;
    int roll;
     
};

void printStdentInfo(struct Student st) {
    printf("Name: %s\n", st.name);
    printf("Roll: %d\n", st.roll);
}

int main()
{
    struct Student std;

    printf("Enter the name: ");
    //scanf("%s", std.name);
    gets(std.name);
    printf("Enter the roll: ");
    scanf("%d", &std.roll);

    printStdentInfo(std);

    return 0;
} */
 /*  
#include<stdio.h>
#include<string.h>

struct Fraction {
    int num;
    int denom;
};

struct Fraction inputFraction() {
     struct Fraction f;
     scanf("%d %d", &f.num, &f.denom);
     return f;
} 

struct Fraction inverse(struct Fraction a) {
    struct Fraction ans;
    ans.num = a.denom*1;
    ans.denom = a.num*1;

    // ans.num = ((a.denom + a.num) - a.num);
    // ans.denom = a.num;
    return ans;
}

void printFraction(struct Fraction f) {
    printf("%d/%d", f.num, f.denom);
}

int main()
{   
    struct Fraction a;
    a = inputFraction();
    

    printf("Fraction: ");
    printFraction(a);
    printf("\n");
    printf("Inverse: ");
    printFraction(inverse(a));
     
    return 0;
}  

 */
// Question 3...

/*  Yes, A structure contains an array as its member variable.
 An array in which each element is of type structure,
  Access: Can be accessed using the dot operator just as we access other elements of the structure: 
  Can be accessed by indexing just as we access an array 
  
  Example: 

  struct Student {
    int arr[10];
  } arr1, arr2, arr3;
   
  */
 

 
/* 
 #include<stdio.h>
 #include<string.h>
 #include<math.h>

  void toBinary(long long int n) {

    long long int i;
    printf("%c",'0');
    for(i = 1<<6; i>0; i=i/2) {
        if((n & i) != 0) {
            printf("%c", '1');
        }
        else {
            printf("%c", '0');
        }
    }
}

 

 void findPosition(unsigned int n) {
     
     if(n<=0) {
         return;
     }
    
    int r = n;
    r = r | (r >> 1);
	r = r | (r >> 2);
	r = r | (r >> 4);
	r = r | (r >> 8);
	r = r | (r >> 16);
    r = r^(r >> 1);
    int res = (int) (log(r & -r) / log(2)+1);
    printf("pos: %d\n", res);

    int flip = ~res;
    printf("%d\n", flip);

 }

 int main()
 {

    unsigned int n; 
    scanf("%d", &n);

    toBinary(n);
    printf("\n");
    findPosition(n);
    toBinary(n);


    return 0;
 } */

/* 
 #include<stdio.h>
 #include<string.h>
 #include<math.h>
  
void toBinary(long long int n) {

    long long int i;
    printf("%c",'0');
    for(i = 1<<6; i>0; i=i/2) {  // for 8 bit representaion..
        if((n & i) != 0) {
            printf("%c", '1');
        }
        else {
            printf("%c", '0');
        }
    }
}


 int main()
 {
    int n; scanf("%d", &n);

    toBinary(n);    // t0 convert binary..

    n = n >> 4;     // right shift..

    n = n<< 4;      // left shift to make last 4  bits 0...
    printf("\n");
    toBinary(n);

     
     return 0;
 } */


