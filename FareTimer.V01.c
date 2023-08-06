#include <stdio.h> 
#include <math.h> 
#include <string.h>
#include <time.h> 
#include <stdlib.h> 
#include <ctype.h>


int main()
{
    double current_time = 0;
    double travelled = .0;
    double fare = 1.00;
    char option = ' ';

    while(option !='Y')
    {
    printf("\nEnter 'Y' to start the Fare [Y/N]: ");
    scanf("%s",&option);
    option=toupper(option);
    }

    do {
           
        for (int i = 0; i <= 60; i++)//makes sure the system count to 1 min
        {
            if(i == 60)//every 1 min fare increase
            {
                fare = fare + 0.25; 
                current_time = current_time + 1;
            }
        }
        
        printf("Would you like to continue the Fare [Y/N]: ");
        scanf("%s",&option);
        option=toupper(option);
        //print stats
        if (option !='Y')
        {
            printf ("\n****************************************\n");
            printf ("Travelled for:\t\t%.2lf minutes\n",current_time);
            travelled = current_time/10;
            printf ("Distance travelled:\t%.2lf miles\n",travelled);
            printf ("Fare:\t\t\t%.2lf",fare);
            printf ("\n****************************************\n");
        }
    } while(option =='Y');
   
      return 0; 
}
