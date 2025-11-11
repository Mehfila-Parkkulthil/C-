/*Question 41
Print multiplication table of a number input by user
*/

#include <stdio.h>
int main(){
    int n;
    printf("MULTIPLICATION TABLE\n");
    printf("Enter the number :\n");
    scanf("%d", &n);

    int i =1;
    while(i<=20){
        printf("%d  X  %d =  %d \n" , n , i , (n*i) );
        i++;
    }
  
    printf("\n");
    printf("Thank you");
    return 0;
}