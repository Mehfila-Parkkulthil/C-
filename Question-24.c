//Question 24
//Print 1(true) or 0(false ) for following statements
//If a number is greator than 9 and less than 100 -true

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number between 1 to 100:\n");
    scanf("%d",&n);
    printf("\n");
    printf("If your number is greator than 9 and less than 100\nit would you output as 1\n");
    printf("\n");
    printf("\n");
    printf("So your output is %d", ((n>9)&&(n<100)) );

}