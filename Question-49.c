/*Question 49
Print the reverse of table of given by user , using do-while loop .*/

#include <stdio.h>
int main(){
    int n;
    printf("Lets print the tables of your number in reverse\n");
    printf("Enter n:\n");
    scanf("%d",&n);
    int i=10;
    do{
        printf("%d \n",n*i);
        i--;
    }while(i>=1);
}