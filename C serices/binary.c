/* #include<stdio.h>
#include<string.h>

 int calculateXor(unsigned int n) {
    if(n%4 ==0) 
        return n;

    if(n%4==1)  
        return 1;
    
    if(n%4==2) 
        return n+1;
    return 0;
}

int main()
{
     while(1) {

         int n;
        scanf("%d", &n);

        if(n==0) {
            break; 
        }
        printf("Xor is: %d\n", calculateXor(n));
     }
    return 0;
} */


/* #include<stdio.h>
#include<string.h>

int calcualteXor(unsigned int n) {
    if(n==0)  
        return 0;
    int  ans =0;
    for(int i=1; i<=n; i++) {
        int ans = ans^i;
    }

    return ans;
}

int main()
{

    int n; scanf("%d", &n);
    printf("Xor is: %d\n", calcualteXor(n));
 
    return 0;
} */


/* int countBit(int);
int main()
{
   int num;
   printf("Enter an integer number :");
   scanf("%d",&num);

   printf("Total number of bits required = %d\n",countBit(num));
   return 0;
}

int countBit(int n)
{
   int count=0,i;
   if(n==0) return 0;
   for(i=0; i< 32; i++)
   {    
      if( (1 << i) & n)
         count=i;
   }

   return ++count;
} */


// using right shift..... 
/* #include<stdio.h>

int countBit(int n) {
    int count=0;
    while(n) {
        n = n >> 1;
        count++;
    }
    return count;
}

int main()
{

    int num;
   printf("Enter an integer number :");
   scanf("%d",&num);

   printf("Total number of bits required = %d\n",countBit(num));
   return 0;


    return 0;
} */

/* #include<stdio.h>
#include<string.h>
 
int main() 
{ 
    int n=7;

    int count =0;
    while(n) {
        if((n&1)!=0) {
            count++;
        }
        n = n >> 1;
    }

    printf("%d\n", count);

    return 0;
} */

/*  
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h> 

struct Time{
    int hour;
    int minute;
    int second;
};
 
struct Interval{
    struct Time start;
    struct Time end;
};
 
struct Interval inputTime() {
    struct Interval time;
    printf("Input the start time: ");
    scanf("%d %d", &time.start.hour, &time.start.minute);
    printf("Input the end time: ");
    scanf("%d %d", &time.end.hour, &time.end.minute);
    return time;
}
 
void printInfo(struct Interval time) {
    printf("%d:%d\n", time.start.hour, time.start.minute);
    printf("%d:%d\n", time.end.hour, time.end.minute);
}


 struct Interval  timeDifference (struct Interval t) {
    struct Interval ans;
    if(ans.start > ans.end) {
        ans = ans.start - ans.end;
    }
    else {
        ans = and.end - and.start;
    }

    return ans;
};
 
int main() {
    struct Interval time = inputTime();
   
    printInfo(time);

    printf("%d", timeDifference(time));

    return 0;

}   */

/// for the name of the role and model is the class
//int the in the formula ... 

/* 
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0;i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)

struct Time{
    int hour;
    int minute;
    int second;
};
 
struct Time inputTime() {
    struct Time time;
    printf("Enter hour: ");
    scanf("%d", &time.hour);
    printf("Enter minute: ");
    scanf("%d", &time.minute);
    printf("Enter second: ");
    scanf("%d", &time.second);
    return time;
}

void printTime(struct Time time) {
    if (time.hour < 24 && time.hour != 0 && time.minute < 60 && time.second < 60) {
    if (time.hour < 12) {
    printf("%d:%d AM", time.hour, time.minute);
   } 
   else  {
        printf("%d:%d PM\n", time.hour, time.minute);
    } 
} 

}
 

int main() {
    struct Time time = inputTime();
    printTime(time);
    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

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

int clearBit(unsigned int n, int k) {
    return n & ~(1<<k);
}
 
int main()
{
    int n; scanf("%d", &n);
    toBinary(n);
    printf("\n");
    int res = clearBit(n, 8);
    toBinary(res);
    return 0;
} */
 

 