/*
Write a program that prompts the user to enter three sets of five double numbers each.
(You may assume the user responds correctly and doesn’t enter non-numeric data.) The
program should accomplish all of the following:
a. Store the information in a 3×5 array.
b. Compute the average of each set of five values.
c. Compute the average of all the values.
d. Determine the largest value of the 15 values.
e. Report the results.
Each major task should be handled by a separate function using the traditional C
approach to handling arrays. Accomplish task “b” by using a function that computes
and returns the average of a one-dimensional array; use a loop to call this function three
times. The other tasks should take the entire array as an argument, and the functions
performing tasks “c” and “d” should return the answer to the calling program.
*/


#include<stdio.h>

#define ROWS 3
#define COLS 5

void enterData( int rows, int cols, int ar[rows][cols]);
float Average1d( int ar[], int size );
float AverageAll( int rows, int cols, int ar[rows][cols] );
int Largest( int rows, int cols, int ar[rows][cols] );

int main(void)
{ 
  int array[ROWS][COLS];
  int r,c;
  
  float average_1d;
  
  //enter data into array 
  enterData(ROWS,COLS, array);
  
  //compute each data set's average 
  for(r=0; r<ROWS; r++)
  { 
    for(c=0; c<COLS; c++)
    {
       average_1d = Average1d( *(array + r), COLS );

    }
    
    printf("Average of data set %d = %.2f\n", r+1, Average1d( *(array + r), COLS) );   
    
    printf("\n");
  }  
    
  //compute average of all elements
  printf("Average of the entire data set = %.2f\n", AverageAll( ROWS, COLS, array) );
  
  //get the largest value 
  printf("The largest value in the data set is %d\n", Largest( ROWS, COLS, array) );
  /*
  printf("\nEntered array:\n");
  //display data
  for(r=0; r<ROWS; r++)
  { 
    for(c=0; c<COLS; c++)
    {
       printf("%d ", array[r][c] );
    }
    
    printf("\n");
  }
  return 0;
  */
}

//Part d
int Largest( int rows, int cols, int ar[rows][cols] )
{
   int r,c;
   
   int largest = 0;
   
   for(r=0; r<rows; r++)
   {
     for(c=0; c<cols; c++)
     {
       if( *(*(ar+r)+c) > largest)
       {
          largest = *(*(ar+r)+c);
       }
     }
   }
   
   return largest;
}

//Part c 
float AverageAll( int rows, int cols, int ar[rows][cols] )
{
   int r,c;
   
   float total;
   
   for( r=0; r<rows; r++)
   {
      for( c=0; c<cols; c++)
      {
         total+= *( *(ar+r) + c );
      }
   }
   
   printf("Entire data set's total = %.2f\n", total);
   
   return total / (rows*cols);
}

//Part b
float Average1d( int ar[], int size )
{
  float total = 0;
  int i;
  
  for( i=0; i<size; i++)
    total+= ar[i];
  
  return total/size;
}

//Part a
void enterData( int rows ,int cols, int ar[rows][cols] )
{
  int r,c;
 
  for(r=0; r<rows; r++)
  { 
    printf("Start entering data set %d\n", r+1);
    
    for(c=0; c<cols; c++)
    {
       scanf("%d", &ar[r][c]);
    }
  }
  
  printf("\n");
}

