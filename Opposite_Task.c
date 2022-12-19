/* #include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i,array[23]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int b;
        scanf("%d",&b);
        if(b==0)
            printf("0 0\n");
        else if(b==20)
            printf("10 10\n");
        else if(b<11)
            printf("%d %d\n",array[b],abs(b-array[b]));
        else
        {  int p=10-array[b];
        printf("%d %d\n",p,abs(b-p));
         
        }
        array[b]++;
         
    }
    return 0;
} */

#include<stdio.h>
int main()
{
    int T, num, m, d, sum;
    scanf("%d", &T);
    if(T <= 125) {
        while(T != 0) {
            scanf("%d", &num);
            if(num >= 0 && num <= 20) {
                m = num % 2;
                d = num/2;
                sum = m + d;
                printf("%d %d\n", d, sum);
            }
            T--;
        }
    }

    return 0;
}

