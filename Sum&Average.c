#include <stdio.h>
int main(){
    float n = 0 ,sum = 0 ,Avg = 0;
    printf("Enter #: ");
    scanf("%f",&n);

    for(int i = 0 ;i<=n  ;i++ ){//finds every sum of n
        sum = sum + i;
    }
    
    Avg = sum/n; //mean
    printf("Sum: %.2f, Average: %.2f",sum,Avg);

 return 0;
}
