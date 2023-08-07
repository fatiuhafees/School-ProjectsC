#include <stdio.h>
main(){
    int N = 0;

    printf("\nEnter Month Number: ");
    scanf("%d",&N);
//*not all months last the same amount of days
    switch(N){
        case 1:
        case 2:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("\nMonth has 31 days\n");
        break;
        //i think you get the giss.....
    }

} 