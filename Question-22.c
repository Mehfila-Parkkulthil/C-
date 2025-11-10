//Question 22
//Write a program to check if a number is divisible by 2 or not

#include <stdio.h>
int main(){
    int x;
    printf("Lets check if your number is even or not\n");
    scanf("%d",&x);
   
    printf("If the output is 1 means its even\nif 0 its odd\n");
    printf("___________________________________\n");
    printf("So output is %d", x%2==0);
    return 0;
}