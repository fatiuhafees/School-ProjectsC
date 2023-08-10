// The program is based of real income ranges and tax deduction data.
#include <stdio.h>
int main(){
    
    float income, Tax;
    int Type;
    printf("\nEnter income: "); scanf("%f",&income);

    //finding tax type based on income 
    if (income <= 18000 )     {Type = 1;}
    else if(income <= 25000 ) {Type = 2;}
    else if(income <= 50000 ) {Type = 3;}
    else if(income <= 100000 ){Type = 4;}
    else if(income >  100000 ){Type = 5;}
    else {
       printf("invalid input");
    }

    switch(Type)
    {
    case 1: Tax = 0; break;
    case 2: 
        Tax = (income - 18001) * 0.2; break;
    case 3: 
        Tax = ( (income - 25001) * 0.3 ) + 1400; break;
    case 4: 
        Tax = ( (income - 50001) * 0.4 ) + 8900; break;
    case 5: 
        Tax = ( (income - 100001) * 0.5 ) + 28900; break;    
    default:
        break;
    }
    
    //results
    printf("******************************************************\n");
    printf("Income\t\tTax Deduction\tAfter Tax\n");
    float temp = income - Tax;
    printf("£%.2f\t£%.2f\t£%.2f",income ,Tax ,temp);
    printf("\n******************************************************\n");


    return 0;
}