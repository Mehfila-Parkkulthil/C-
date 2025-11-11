// Question 15
// Analyse int a=1.99999 , will explicit converting it into int results as 1 or 2.

#include <stdio.h>
int main(){
    int a =(int)1.9999999;
    printf("%d",a);
    return 0;
}

//Output 1