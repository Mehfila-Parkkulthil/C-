/*
Question 40
Print the sum of first n natural numbers 
*/

#include <stdio.h>
int main(){
    printf("Lets calculate the sum of first n natural numbers\n");
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    /*Can write like this too..

    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        }

    */
    int sum=1;
    for(int i=2;i<=n;i++){
        sum=sum+i;
        }
    printf("Sum of natural number till %d is %d" , n, sum); 
    return 0;

}