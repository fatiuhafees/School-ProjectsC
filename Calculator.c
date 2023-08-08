#include <stdio.h>
#include <ctype.h> //allows us to use toupper() function
#include <stdlib.h> //allows us to use exit() function

int main(){
    int n1 = 0;
    int n2 = 0;
    char response = ' ';
    top:
    printf(" \nEnter two integers[n,n]: ");
    scanf("%d,%d",&n1,&n2);

    up:
    menu();
    response = toupper(getchar());//getchar only works for characters
    if(response == 'A'){
        printf("Addition = %d\n", (n1 + n2));
        goto top;
        
    }
    else if(response == 'S'){
        printf("Subtraction = %d\n", (n1 - n2));
        goto top;
    }
    else if(response == 'E'){
        exit(0); 
    }
    else{ //if dont enter a valid option
        
        goto up;
    }
    

 return 0;
}
int menu(){
    printf("\nAdd [A]\t");
    printf("Subtract [S]\t");
    printf("Exit [E]:");
    return 0;
}