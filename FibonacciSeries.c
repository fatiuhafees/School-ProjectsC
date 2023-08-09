#include <stdio.h>
int main(){
    int n = 0, f0 = 1, f1 = 1, f2 = 0;
    printf("Enter a number: "); scanf("%d", &n);

    if(n > 0){ printf("f0-1\n");}
    if(n > 1){ printf("f1-1\n");}
//'i' keeps track of the order so f[i].
    for(int i = 2 ;i<=n ;i++){ 
//fibonacci says that we must add two numbers that come before as to find whats next.
        f2 = f0 + f1 ;
        printf("f%d-%d\n",i ,f2);
//updatind the series as to find the next f[].
        f0 = f1; f1 = f2; 
    }
 return 0;
}