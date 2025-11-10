// Question 12
// Analyse int a=1.99999 , will converting it into int results as 1 or 2.

#include <stdio.h>
int main(){
    int a =1.9999999;
    printf("%d",a);
    return 0;
}

// It should show error , becoz implicit conversion is not possible.
//Output 1