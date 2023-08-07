#include <stdio.h>
int main()
{ 
   int array[] = {7, 2, 6, 3, 5};
   int size = sizeof(array)/sizeof(array[0]);
   //order biggest to samllest, print values in array
   sort(array, size);
   printArray(array, size);
 
   return 0; 
}

void sort(int array[], int size)
{
// nested loop is used to scan through the array 
   for(int i = 0; i < size - 1; i++)
   {
      for(int j = 0; j < (size -i )- 1; j++)
      {
         //if number to the right is bigger switch places
         //array[j+1] lets us look at the number to the right of [J]
         if(array[j] < array[j+1]) 
         {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
         }
      }
   }
}

void printArray(int array[], int size)
{
   for(int i = 0; i < size; i++)
   {
      printf("%d ", array[i]);
   }
}
