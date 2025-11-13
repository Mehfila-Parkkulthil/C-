/*Question 50
Calculate the sum all number between 5 and 50 (including 5 and 50) using while loop*/

#include <stdio.h>
int main(){
    printf("Lets print sum of all numbers from 5 to 50\n");
    printf("Here it goes! \n");
    int i=5;
    int sum =0;
    while(i<=50){
        printf("%d \n",i);
        sum=sum+i;
        i++;
    }
    printf("Thank you , Sum is %d \n",sum);

}