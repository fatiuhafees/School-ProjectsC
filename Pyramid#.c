#include <stdio.h>
int main(){
    int L = 0, N = 1; //pyramid will allows start at one

    printf("Enter a number: ");
    scanf("%d" , &L);

//nested loop
    for (int i = 1; i != L; i++){
        printf("\n");
        for(int j = 1; j != i ;j++){ //for loop we print length of line depeing on how large 'i' is
            printf("%d ", N);
            N = N + 1;

        }
    }
    return 0;
}