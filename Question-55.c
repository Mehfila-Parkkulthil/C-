/*Question 55
Write a program to enter price of 3 items ans print their final cost with gst using Arrays*/

#include <stdio.h>
int main(){
    float price[3];
    printf("Enter  prices\n");
    printf("Enter first price\n");
    scanf("%f",&price[0]);
    printf("Enter second price\n");
    scanf("%f",&price[1]);
    printf("Enter third price\n");
    scanf("%f",&price[2]);

    printf("total price of 1 : %f\n", price[0] + (0.18+price[0]));
    printf("total price of 2 : %f\n", price[1] + (0.18+price[1]));
    printf("total price of 3: %f\n", price[2] + (0.18+price[2]));
    return 0;
}