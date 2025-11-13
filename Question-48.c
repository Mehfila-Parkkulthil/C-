/*Question 48
Calculate the factorial number*/

#include <stdio.h>
int main(){
    int n;
    printf("lets calculate the factorial \n");
    printf("Enter n:\n");
    scanf("%d",&n);
    long fact = 1;
    int i=1;
    //factorial can long numbers , so int wont be able to store
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("The factorial of %d is %ld",n , fact);
    return 0;
}