//Question 34
// Create a program to Assignment operator

#include <stdio.h>
int main(){
    int a =10;
    a+=5;
    printf("a+5 = %d \n",a);
    a-=5;
    printf("a-5 = %d \n",a);
    a*=5;
    printf("a*5 = %d \n",a);
    a/=5;
    printf("a/5 = %d \n",a);
    a%=5;
    printf("a %c 5 = %d \n",'%', a);
    return;
}