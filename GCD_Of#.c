#include <stdio.h>  

int main()  
{  
    int A ,B ,T;
    printf("\nEnter numbers A and B:");
    scanf("%d %d",&A ,&B);

    if(A<B){
        T = B;
        B = A;
        A = T;
    }
    do{
        T = B;
        B = (A % B);
        A = T;
    }while(B > 0);

    printf("GCD: %d\n",T);

    return 0;

}  