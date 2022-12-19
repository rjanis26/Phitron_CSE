/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


int main()
{
    int n;
    double a, b, sum = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%lf %lf", &a, &b);
        double value = a* b; 
        sum += value;
    }

    printf("%.3lf", sum);

    return 0;
} */

 /* #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

int main()
{
	int x,count=0;
	scanf("%d",&x);
	while(x>0)
	{
		if(x%2==0)
		{
			x /= 2;
		}
		else
		{
			x= x-1;
			count++;
		}
	}
	printf("%d",count);

	 
	return 0;
} */

 
/* 
#include<stdio.h>
#include<string.h>


int main()
{
	int n; scanf("%d", &n);

	char str[n][13];
	for(int i=0; i<n; i++) {
		scanf("%s", &str[i][0]);
	}	

	 int count=0;

	for(int i=0; i<n; i++) {

		 if (strcmp(str[i], "Tetrahedron") == 0)
        {
            count += 4;
        }

        if (strcmp(str[i], "Cube") == 0)
        {
            count += 6;
        }

        if (strcmp(str[i], "Octahedron") == 0)
        {
            count += 8;
        }

        if (strcmp(str[i], "Dodecahedron") == 0)
        {
            count += 12;
        }

        if (strcmp(str[i], "Icosahedron") == 0)
        {
            count += 20;
        }
		 
	}
		
	printf("%d", count);

	return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

int count_duplicate(int arr[], int n)  {

    int count =0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{

    int t; scanf("%d", &t);
    int n; 
    int arr[n];
    
    while(t--) {
        scanf("%d", &n);

        for(int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }
        int count = count_duplicate(arr,n);

        if(count==0) {
            printf("-1\n");
        }
        else {
            printf("%d\n", count);
        }
    }

    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

int main()
{
    int t,n, tag;
    scanf("%d", &t);

    while(t--) {

        tag = 0;
        char str[1000];
        gets(str);
        scanf("%d", &n);

        for(int i=0; i<n; i++) {
            if(str[i] == '8' && n-i>=11) {
                tag = 1;
                break;
            }
        }

        if(tag==1 && n >=11) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
 
    }
 
    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];
    gets(str);

    int count=0;
    for(int i=0; i<strlen(str); i++) {
        for(int j=i+1; j<strlen(str); j++) {
            if(str[i]== str[j]) {
                count++;
            }
        }
    }

    if(count == 7) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}

 */
 
/* 
 #include<stdio.h>
 
 int main()
{
    int size,i, j,count=0,maxCount=0,maxElement,occurrence;            //Array Size Declaration
    
    int t; scanf("%d", &t);
    while(t--) 
    {
     
        scanf("%d" , &size);
            
        int arr[size];
        for(i = 0; i < size; i++)
        {
            
            scanf("%d",&arr[i]);
        }
        for(i = 0; i< size; i++)
        {
             
            for(j = i+1; j < size; j++)
            {
                
                if(arr[j] == arr[i])
                {   
                     count++;
                    
                    if(count > maxCount)
                    {
                        maxElement = arr[j];
                        maxCount = count;
                         
                    }
                }
            }
        }
        if(maxCount >= 3) 
            printf("%d\n",maxElement);

        else 
            printf("-1\n");
    } 
    return 0;
} 
*/
  
#include<stdio.h>
#include<string.h>
#define ll long long int

int main()
{

    int t; scanf("%d", &t);
   while(t--) 
   {
        int n, ans = -1;
        int count[200001] = {0};
        scanf("%d", &n); 

        int arr[200001]; 

        for(int i=0; i<n; i++) {
            
             scanf("%d", &arr[i]);
             int val = arr[i];
             count[val]++;

             if(count[val] >= 3) {
                ans =  val;

             }
        }
        printf("%d\n", ans);
   }

    return 0;
}  



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
 
} 
  */

 

 