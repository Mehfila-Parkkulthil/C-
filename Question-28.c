//Question 28
//Check if you are adult or child

#include <stdio.h>
int main(){
    int age;
    printf("Enter age : \n");
    scanf("%d",&age);
    if(age>18){
        printf("ADULT");
        printf("YOU CAN VOTE & DRIVE. \n");
    }else{
        printf("CHILD \n") ; 
    }
    return 0;
}