#include <stdio.h>
int main(){
    int N = 0,j;

    printf(" \nEnter total number of times: ");
    scanf("%d", &j);
    printf(" Only enter numbers between 1 - 99 \n");

    for(int i = 0; i < j; i++){
        printf("\n");
        scanf("%d", &N);
        printf("%d = ", N);

        if (N > 9 && N < 20){
            switch (N)
            {
            case 10: printf("TEN");break;
            case 11: printf("ELEVEN");break;
            case 12: printf("TWELVE");break;
            case 13: printf("THIRTEEN");break;
            case 14: printf("FOURTEEN");break;
            case 15: printf("FIFTEEN");break;
            case 16: printf("SIXTEEN");break;
            case 17: printf("SEVENTEEN");break;
            case 18: printf("EIGHTEEN");break;
            case 19: printf("NINETEEN");break;
            default: break;
            }
        }

        if ( (N/10) > 0 ){ //Tens
            switch (N/10)
            {
            case 0: printf(" ");break;
            case 2: printf("ELEVEN");break;
            case 3: printf("THIRTY");break;
            case 4: printf("FOURTY");break;
            case 5: printf("FIFTY");break;
            case 6: printf("SIXTY");break;
            case 7: printf("SEVENTY");break;
            case 8: printf("EIGHTY");break;
            case 9: printf("NINETY");break;
            default: break;
            }
        }

        if ( (N % 10) > 0 ){ //Ones
            switch (N%10)
            {
            case 0: printf(" ");break;
            case 1: printf("ONE");break;
            case 2: printf("TWO");break;
            case 3: printf("THREE");break;
            case 4: printf("FOUR");break;
            case 5: printf("FIVE");break;
            case 6: printf("SIX");break;
            case 7: printf("SEVEN");break;
            case 8: printf("EIGHT");break;
            case 9: printf("NINE");break;
            default: break;
            }
        }        
    }
    return 0;
}