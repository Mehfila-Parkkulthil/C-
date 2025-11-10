// Question 6
// Create a program to calculate the area and perimeter of square

#include <stdio.h>
int main(){
    int side;
    printf("Lets calculate the area and perimeter of square \n");
    printf("Pls enter your side:");
    scanf("%d",&side);
    printf("So area of your square is %d \n" , side*side);
    printf("And perimeter of your square is %d \n", 4*side);
    return 0;

}