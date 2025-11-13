/*Question 52
Check if the given number is prime or not */

#include <stdio.h>
int main(){
    printf("PRIME OR NOT\n");
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);

    if(n==1 || n<1){
        // invalid if equal to 1 or less than 1
        printf("Invalid");
    }
    else if((n==2)||(n==3)||(n==5)||(n==7)){
        //prime if n is 2,3,5,7
        printf("PRIME");

    }else if ((n%2!=0) && (n%3!=0 )&& (n%5!=0) && (n%7!=0)){
        //prime if not divisibe by 2,3,5,7
        printf("PRIME");

    }else{
        printf("Sorry NOT prime");
    }
}