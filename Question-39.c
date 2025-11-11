/*
Question 39
Print from 0 to n , if n is given by user
*/

#include <stdio.h>
int main(){
    printf("Lets print form 0 to n:\n");
    printf("Enter n :");
    int n;
    scanf("%d",&n);
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    
    printf("Thank you");
    return 0;
}

