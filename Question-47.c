/*Question 47
Print all odd numbers from 5 to 50 */

#include <stdio.h>
int main(){
    printf("Lets print all odd numbers from 5 to 50 \n");
    for(int i =5 ; i<=50 ; i++){
        if(i%2!=0){
        printf("%d\n",i);
        }
    }
}

/* 
    for(int i =5 ; i<=50 ; i++){
        if(i%2==0){
        continue;
        }
        printf("%d\n",i);
        
    }

*/
   
    


