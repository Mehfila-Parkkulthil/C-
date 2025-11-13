//Question 53
//Using library functions to calculate the square of a number

#include<stdio.h>
#include<math.h>
int printSquare();
int main(){
    printf("Find square of a number \n");
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int square = printSquare(n);
    printf("Square of %d is %d",n,square);
}

int printSquare(int n){
    return pow(n,2);
}

/*

pow(n, 2) comes from the math library (#include <math.h>).
Its return type is double — not int.
That means it gives a floating-point (decimal) value, even if the result looks like a whole number.
Some compilers (like GCC with warnings off) let you print a double using %d without error,
but it’s technically wrong — because %d expects an int, while pow() returns a double.
That’s undefined behavior — it might work sometimes, but it’s not guaranteed on all systems or compilers
printf("%d", (int)pow(n, 2));
Here (int) converts the double result to an integer before printing.

*/
