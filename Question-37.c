//Question 37
//Create a program to print from 300 - 1000

#include <stdio.h>
int main(){
    printf("Lets print from 300 -1000 using do-while loop \n");
    int i =300;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=1000);
    return 0;
}