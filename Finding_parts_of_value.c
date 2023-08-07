#include <stdio.h>
void main(){
    float input = 0; //We must use float type as to hold the number as a decimal. Unfortunately we can not use double type.
                     //This is because double is too large which can be too accurate and we dont want that (try for your self) :).
    int temp = 0, fraction = 0;

    printf("\nEnter decimal #: ");
    scanf("%f", &input);
//exsample:
//1.input holds 1.45 while temp holds 1.
//2.1.45 - 1 = 0.23. Then * 100 gives us 23.
//3.input holds 1.45, temp holds 1 & fraction holds 23.
    temp = input; 
    fraction = (input - temp) * 100;

    printf("\n%0.2f is made up of  %d : %d \n\n",input ,temp ,fraction);
}
