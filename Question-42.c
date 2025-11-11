/*Question 42
Keep taking input form user until user enters an odd number
*/

#include <stdio.h>
int main(){
    int n ;

    int i=1;
    do{

    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Your number is %d \n",n);

     if(n%2!=0){
         break;
    }

    } while(1);//shows 1 ie, infinite loop ..becoz it will run continuotuly since condition true always so to get out of this we can use break;
    
    printf(
        "Thank you"
    );
}