//Question 54
//Pointers

#include <stdio.h>
int main(){
    float price =100.0;
    float *ptr =&price;
    float **pptr =&ptr;
      
    printf("-------------\n");
    printf("   POINTERS\n");
    printf("-------------\n");
    printf("\nPrinting VALUES\n");
    //value of price
    printf("price is %f \n" , price);
    //value inside ptr
    printf("value at *ptr is %f \n" , *ptr);
    //value inside pptr
    printf("value at *pptr is %f \n" , *pptr);
    //value inside pptr
    printf("value at **pptr is %f \n" , **pptr);

    printf("\n");

    printf("ADDRESS OF\n");
    //address of price
    printf("address of price is %p \n" , &price);
    //address of ptr
    printf("address of ptr is %p \n" , &ptr);
    //address of pptr
    printf("address of pptr is %p \n" , &pptr);

    printf("\n");

    printf("ADDRESS AT\n");
    //address at ptr
    printf("address at ptr  is %p \n" , ptr);
    //address at pptr
    printf("address at pptr  is %p \n" , pptr);

    printf("\n");

    //address just for study purpose in unsigned int it might show warning
 
    printf("ADDRESS OF in Unsigned int\n");
    //address of price
    printf("address of price is %u\n" , &price);
    //address of ptr
    printf("address of ptr is %u \n" , &ptr);
    //address of pptr
    printf("address of pptr is %u \n" , &pptr);

    printf("\n");
     printf("ADDRESS AT in Unsigned int\n");
    //address at ptr
    printf("address at ptr  is %u \n" , ptr);
    //address at pptr
    printf("address at pptr  is %u \n" , pptr);

    printf("\n");
}

