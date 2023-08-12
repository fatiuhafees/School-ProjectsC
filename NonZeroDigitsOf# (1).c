#include <stdio.h>
int main(){
    int N = 0, I = 0;

    printf("\nEnter a number: ");
    scanf("%d",&N);

    do{
        if( (N % 10) != 0){//if there is a remainder then there is a non-zero digit
            I = I + 1;//tracks number of non-zero digits
        }
    //allows us to check each digit of the number by making the number smaller with each loop
        N = N / 10;

    }while(N > 0);

    printf("Non-zero digits: %d\n",I);

    return 0;
}