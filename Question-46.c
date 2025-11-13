/*Question 46
Print all numbers from 1 -50 except 16, 23, 45
*/

#include <stdio.h>
int main(){
    printf("Lets print all numbers from 1-50 , except 16,23,45 \n");
   for(int i =1;i<=50;i++){
    if(i==16 || i==23 || i==45){
        continue;
    }
    printf("%d \n",i);
   }
    printf("Thank you");
    return 0;
}