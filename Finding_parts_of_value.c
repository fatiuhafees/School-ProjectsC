#include <stdio.h>
void main(){
    float input = 0; //must use float as double will not work. "dont ask why" :).
    int temp = 0, fraction = 0;

    printf("\nEnter decimal #: ");
    scanf("%f", &input);

//1.input = '1.45' while temp = '1'.
//2.By 1.45 - 1 we get 0.23. Then * 100 gives us 23.
//3.temp firt part of the #(1), fraction second part of the #(23).
    temp = input; 
    fraction = (input - temp) * 100;

    printf("\n%0.2f is made up of  %d : %d \n\n",input ,temp ,fraction);
}