/* #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h> 
int main()
{
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);

    if(c< a || c > b)
        printf("No\n");
    
    else    
        printf("Yes\n");


    return 0;
} */


/* 
#include<stdio.h>
#include<string.h>
 
void solve() {
    int n, i;  
     while(scanf("%d", &n)) {

         int a[n+2];
    
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int left =0, right = n, sum1=0, sum2=0;
    i=1;
    while(left <= right) {
         if(i%2==1)
            {
                if(a[left]>=a[right])
                    sum1+=a[left++];
                else
                    sum1+=a[right--];
            }
            else
            {
                if(a[left]>=a[right])
                    sum2+=a[left++];
                else
                    sum2+=a[right--];
            }
            i++;
            
        }
         printf("%d %d", sum1, sum2);
    }
    
}
 

int main()
{
    solve();

    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>

int main(){
	int nOfCard, pointOfSereja, pointOfDima;
	bool isSerejaTurn = true;
	pointOfSereja = pointOfDima = 0;
	scanf("%d", &nOfCard);
	int cards[nOfCard];

	for(int i = 0; i < nOfCard; i++){
		scanf("%d", &cards[i]);
	}

	for(int i = 0; i < nOfCard;){
		if(cards[i] > cards[nOfCard - 1]){
			if(isSerejaTurn){
				pointOfSereja += cards[i];
				isSerejaTurn = false;
			}else{
				pointOfDima += cards[i];
				isSerejaTurn = true;
			}
			i++;
		}else{
			if(isSerejaTurn){
				pointOfSereja += cards[nOfCard - 1];
				isSerejaTurn = false;
			}else{
				pointOfDima += cards[nOfCard - 1];
				isSerejaTurn = true;
			}
			nOfCard--;
		}
	}

	printf("%d %d\n", pointOfSereja, pointOfDima);
	return 0;
}
 */
 

/*  
#include <stdio.h>
 #include<string.h>
 #include<stdlib.h>

int main () 
{   
    char str[1000], str2[] = "heidi";
    gets(str);
    int j=0;
    
    for(int i=0; i<strlen(str); i++) {
        if(str[i] == str2[j]) {
            j++;
        }

        if(j==5) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
} */

/* 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){

    char s[1001];
    scanf("%s", &s);
    char str[] = "heidi";
    
    int ind = 0;
    for(int p = 0; p < strlen(s); p++){
        if(s[p] == str[ind]){
            ind++;
        }
        if(ind == 5){
            printf("YES");
            return 0;
        
        }
    }
    
    printf("NO");

    return 0;
} */
/* 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){

    char s[1001];
    scanf("%s", &s);
    char str[] = "heidi";
    bool fake = false;
    int ind = 0;
    for(int p = 0; p < strlen(s); p++){
        if(s[p] == str[ind]){
            ++ind;
        }
        if(ind ==  strlen(str)) {
            fake = true;
            break;
        }
    }

    if (fake) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
} */

/* 
 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    char s[1001];
    scanf("%s", &s);
    char str[] = "heidi";
    bool fake = false;
    int ind = 0;

    for(int p = 0; p < strlen(s); p++){
        if(s[p] == str[ind]){
            ++ind;
        }
        if(ind == strlen(str)){
            fake = true;
            break;
        }
    }

    if (fake) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}  


 */
 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    char s[1001];
    scanf("%s", &s);
    char str[] = "heidi";
    
    int ind = 0;
    for(int p = 0; p < strlen(s); p++){
        if(s[p] == str[ind]){
            ++ind;
        }
        if(ind == strlen(s)){
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
 
}
 