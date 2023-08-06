//implemented 24hr clock, fixed some bugs, implemented user inteface
//Action points: fixes more bugs, complete user interface, implement a system for tracking number of trips 
#include <stdio.h> 
#include <math.h> 
#include <string.h>
#include <time.h> 
#include <stdlib.h> 
#include <ctype.h>
#include <unistd.h>
#include <sys/time.h>

char fareclock(int hours, int minutes, int seconds, char option1);
char printsheet(double current_time,double travelled,double fare, char option2);

int main()
{
    char option1= ' ';
    int hours = 0, minutes = 0, seconds = 0;

    do{
    printf("\nEnter 'Y' to start the Fare [Y/N]: ");
    scanf("\n");
    scanf("%c",&option1);
    option1 = toupper(option1);
    }while(option1 !='Y');
      
    fareclock(hours, minutes, seconds, option1);

    return 0; 
}

char fareclock(int hours, int minutes, int seconds, char option1){
    
    char option2 = ' ';
    double current_time = 0, travelled = 0, fare = 0;
 
    do{
        // Print the current time at start
        printf("%02d:%02d:%02d\r", hours, minutes, seconds);
        fflush(stdout); // Flush the output to show the time immediately
        double temp = (seconds /60)  + (hours * 60) + minutes;
        current_time = temp; //Total minutes

        seconds++;

        // Check for seconds
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            fare = fare + 0.25; //every minute fare increase by 25pens
            for (int i = 0; i <= minutes; i=i+5){//stats shown every 5 minutes 
                if (minutes == i){
                    if (minutes >= 4){ //solution to a bug(ignore)
                        current_time = current_time + 1;
                    }
                    printsheet(current_time,travelled,fare,option2);     
                              
                }
            }

            // Check for minutes
            if (minutes >= 60) {
                minutes = 0;
                hours++;

                // Check for hours
                if (hours >= 24) {
                    hours = 0;
                }
            }
        }
        usleep(1000);
        if (option2 == 'E')
        {
            break;
        }
        system("clear");

    }while (option1 == 'Y');

    return option2;

}

char printsheet(double current_time,double travelled,double fare, char option2){
    if (option2 != 'C' || option2 != 'R' || option2 != 'E'){
        do{
            printf ("\n*****************************************************\n");
            printf ("Travelled for:\t\t%.2lf minutes\n",current_time);
            travelled = current_time/10;
            printf ("Distance travelled:\t%.2lf miles\n",travelled);
            printf ("Fare:\t\t\t%.2lf",fare);
            printf ("\n*****************************************************\n");
            printf("Continue Fare [C] / Restart fare [R] / End fare [E]\n");
            scanf("%c",&option2);
            option2 = toupper(option2);
            system ("clear");        
            if (option2 == 'C' ||option2 == 'R' || option2 == 'E'){
                break;
            }

        }while (option2 != 'C' || option2 != 'R' || option2 != 'E');
        
        return option2;
    }
}
