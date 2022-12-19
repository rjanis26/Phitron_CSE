/* #include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char binary[100];
    int decimal;

    printf("Enter the binary number: ");
    scanf("%s", binary);
    decimal=0;
    int len = strlen(binary);
    int power = len-1;

    for(int i=0; i<len; i++) {
        decimal += (binary[i]-'0')* pow(2, power);
        power--;
    }

    printf("Decimal value is:%d",decimal);

    return 0;
} */


/* #include<stdio.h>
#include<string.h>


int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

  if(n & 1) {
        printf("LSB of %d is set(1)", n);
    }
    else {
        printf("LSB of %d unset(1)", n);
    }


    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>


int main()
{
    int n, order=-1;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i=0; i <sizeof(int)*8; i++) {
        if((n>>i) & 1) {
            order=i;
        }
    }
    if(order != -1) {
        printf("Highest set bit in %d is %d", n, order);
    }
    else {
        printf("0 has no set bit");
    }
     
    return 0;
} */
 

/* #include<stdio.h>
#include<string.h>

int main()
{
    int n, x, m;
    while(1) {
        printf("Please enter your number: ");
        scanf("%d", &n);

        if(n==0) {
            break;
        }
        printf("How many bits want to shift left: ");
        scanf("%d", &x);

        m = n<<x;
        printf("%d\n", m);
    }

    return 0;
}
  */


/* #include<stdio.h>
#include<string.h>

int main()
{
    int n, x,m;
    while(1) 
    {
        printf("Enter the number: ");
        scanf("%d", &n);

        if(n==0) {
            break;
        }

        printf("How bits want to shift to right: ");
        scanf("%d", &x);
        m = n >> x;

        printf("%d\n", m);
    }

    return 0;
} */


/*   
#include<stdio.h>
#include<string.h>

int main()
{
    int n, count=0, i;
    scanf("%d", &n);

    while(n) {
        if(n & 1) 
            count++;
        n = n >> 1;
    }

    printf("Number of 1: %d\n", count);

    return 0;
} */
   

/* #include<stdio.h>
#include<string.h>

int main()
{
    int x=50, y = 5;
    
    printf("%d\n", (x & 0));
    printf("%d\n", (x & x));  

    printf("*****\n");

    printf("%d\n", (x ^ y ^ x));
    printf("%d\n", (x ^ y) | y);

    printf("%d\n", ~~x);

    return 0;
} */


/* #include<stdio.h>
#include<string.h>

int main()
{
    int n=10;
    int count=0;
    while(n !=0) {
        if((n & 1)!=0) {
            count++;
        }
        n = n>>1;
    }

    printf("%d\n", count);
    return 0;
} */
 

/// Decimal to binary...

/* 
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[100];
    int index =0;
    while(n>0) {
        int digit = n%2;
        n/=2;
        str[index] = digit+'0';
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
    
    // Binary to decimal...

    int sum=0, p=strlen(str)-1;
    for(i=0; i<strlen(str); i++) {
        char c=str[i];
        int digit = c-'0';
        sum += digit*pow(2,p);
        p--;
    }

    printf("%d\n", sum);

    return 0;
}  
 */

  /* 

 #include<stdio.h>
 #include<string.h>
 #include<math.h>

 int main()
 {
    char binary[100];
    int decimal=0;
    printf("Enter the binary: ");
    scanf("%s", binary);
    int p = strlen(binary)-1;

    for(int i=0; i<strlen(binary); i++) {
        decimal += (binary[i]-'0') *pow(2,p);
        p--;
    } 

    printf("%d\n",decimal);

     return 0;
 } */

// count 1 and 0  

 /* #include<stdio.h>
 #include<string.h>
 #include<math.h>
 
void countOnesAndzeros(unsigned int n) {
    int one=0, zero=0;
     for(int i=0; i<32; i++) {
        if(n&1) {
        one++;
        }
        else {
        zero++;
        }

        n >>=1;
     }
    printf("Output numbrs one: %d\n",one);
    printf("output number zero: %d\n", zero);
 }

 int main()
 {  
    unsigned int n;
    printf("Enter the number: ");    
    scanf("%d", &n);

     countOnesAndzeros(n);
 
     return 0;
 } */


  /* #include<stdio.h>
 #include<string.h>
#include<math.h>

void toBinary(unsigned int n, char str[]) {

    int index =0;
    while(n) {
        int digit=n%2;
        n/=2;
        str[index] = digit+'0';
        index++;
    }
    str[index] = '\0';
    int i=0, j=strlen(str)-1;
    while(i < j) {
        char temp =str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    for(int i=0; i<32; i++) {
        printf("%d", str[i]);
    }
}

int findLowestSetbitIndex(unsigned int n) {

    if(n&1)  // if odd return 1
        return 1;

    n = n ^ (n & (n-1));
    int pos=0;

    while(n) {
        n >>= 1;
        pos++;
    }
    return pos;
}

int main()
{

    unsigned int n; 
    scanf("%d",&n);
    char str[100];

    toBinary(n,str);
    printf("\n");
    int index = findLowestSetbitIndex(n);
    printf("Index: %d\n", index-1);         // pos start:1 and index start:1 so, index -1;

    return 0;
}  
 */
/*
  #include<stdio.h>
 #include<string.h>
#include<math.h>

// int findLowestSetbitIndex(unsigned int n) {

//     if(n&1) {
//         return 1;
//     }
//     else {
//         return log2(n & -n) +1;
//     }
     
// }

  int findLowestSetbitIndex(unsigned int n) {

    if(n & 1) 
        return 1;

    n=n^(n&(n-1));

    int pos=0;
    while(n) {
        pos++;
        n >>= 1;
    }

    return pos;
}


int main()
{

    unsigned int n; 
    scanf("%d",&n);

    int index = findLowestSetbitIndex(n);
    printf("Index: %d\n", index-1);  // pos start:1 and index start:1 so, index -1;

    return 0;
}   */


 /* #include<stdio.h>
 #include<string.h>
#include<math.h>

void toBinary(unsigned int n, char str[]) {

    int index =0;
    while(n) {
        int digit=n%2;
        n/=2;
        str[index] = digit+'0';
        index++;
    }
    str[index] = '\0';

    int i=0, j=strlen(str)-1;   /// for reverse the number...

    while(i < j) {
        
        char temp =str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }

      printf("%s", str);
     
}
 

int findLowestSetbitIndex(unsigned int n) {

    if(n&1)  // if odd return 1
        return 1;

    n = n ^ (n & (n-1));
    int pos=0;

    while(n) {
        n >>= 1;
        pos++;
    }
    return pos;
}

int main()
{

    unsigned int n; 
    char str[100];
    scanf("%d",&n);
    
    toBinary(n,str);
    printf("\n");
    int index = findLowestSetbitIndex(n);
    printf("Index: %d\n", index-1);         // pos start:1 and index start:1 so, index -1;

    return 0;
}  
 */
// binary additions...

/* 
 #include<stdio.h>
 #include<string.h>
 #include<math.h>

 int main()
 {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum[100];
    
    int index=0, remainder=0;

    while(a!=0 || b!=0) {
        sum[index] = (a%2);
         
    }
     
    return 0;
 } */


 #include<stdio.h>
 #include<string.h>
 #include<math.h>
 #define INT_SIZE sizeof(int)
 #define INT_BITS INT_SIZE *8-1
 
 int rotateLeft(int a, unsigned int rotate) {
    int msb;
    rotate%=INT_BITS;
    while(rotate--) {
        msb = (a>>INT_BITS) & 1;
        a = (a<<1) | msb;
    }
    return a;
 }

 int main()
 {
    int a, b, c; 
    scanf("%d %d", &a, &b);

    int x = rotateLeft(a, b);
    printf("%d\n")

     

     return 0;
 }