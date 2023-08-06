#include <stdio.h> 
#include <math.h> 
#include <string.h>
#include <time.h> 
#include <stdlib.h> 
#include <ctype.h>
#include <unistd.h>
#include <sys/time.h>

void fareclock(int hours, int minutes, int seconds, char option1);

int main()
{
    char option1= ' ';
    int hours = 0, minutes = 0, seconds = 0;

    while(option1 !='Y')
    {
    printf("\nEnter 'Y' to start the Fare [Y/N]: ");
    scanf("\n");
    scanf("%c",&option1);
    option1 = toupper(option1);
    }
      
    fareclock(hours, minutes, seconds, option1);

    return 0; 
}

void fareclock(int hours, int minutes, int seconds, char option1){
    
    while (option1 = 'Y') 
    {
        // Print the current time at start allways(good practise)
        printf("%02d:%02d:%02d\r", hours, minutes, seconds);
        fflush(stdout); // Flush the output to show the time immediately

        seconds++;

        // Check for seconds
        if (seconds >= 60) {
            seconds = 0;
            minutes++;

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
        system("clear");
    }

}
//   Problem and solutions along the way:
//1. Clock was not printing. Due to the closing curly brace for 'fareclock function defintion' not been connected properly. 
