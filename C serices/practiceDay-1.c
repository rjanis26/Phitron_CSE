
/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double num;
    printf("Enter the number: ");
    scanf("%lf", &num);

    int real_part = num;
    printf("Integer Part: %d\n", real_part);
    double fraction_part = num - floor(real_part);
    printf("Fraction Part: %lf\n", fraction_part);

    return 0;
}  
  */

/* #include<stdio.h>
int main()
{
    double num;
    printf("Enter the number: ");
    scanf("%lf", &num);

    int integer_part = (int)num;
    printf("%d\n", integer_part);

    
    return 0;
} */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  int t, arr[7];
  scanf("%d", &t);

  while(t--) {
    int sun_days = 0,  rain_days = 0;
    for(int i = 0; i < 7; i++) {
      scanf("%d", &arr[i]);
      if(arr[i] == 1) {
        sun_days++;
      }
      else if(arr[i] == 0) {
        rain_days++;
      }
    }
    if(sun_days > rain_days) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }

  return 0;
}