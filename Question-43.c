/*question 43
Keep taking numbers as input ,until user enter a number which is multiple of 7 */

#include <stdio.h>
int main(){
    printf("Lets start\n");
    int n;
    int i=1;
    do{
        printf("Enter n\n");
        scanf("%d",&n);
        printf("Your number is %d\n",n);  
        if(n%7==0){
            break;
        }
    }while(1);

    printf("\n");
    printf("Sorry you wrote a number which is a multiple of 7");
}