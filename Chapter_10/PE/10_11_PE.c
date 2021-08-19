/*
Write a program that declares a 3×5 array of int and initializes it to some values of your choice. Have the program print the values, double all the values, and then display the new values. Write a function to do the displaying and a second function to do the doubling. Have the functions take the array name and the number of rows as arguments.
*/

#include<stdio.h>

void doubleArray( int rows, int ar[rows][5] );
void printArray( int rows, int ar[rows][5] );

int main(void)
{
  int array [3][5] = { {1,1,1,1,1},
  		 {1,1,1,1,1},
  		 {1,1,1,1,1} };
  
  printf("Before doubling:\n");
  printArray( 3, array);   

  doubleArray( 3, array);
  
  printf("After doubling:\n"); 
  printArray( 3, array);
  
  return 0;
}

void doubleArray( int rows, int ar[rows][5] )
{
  int value;
  int r,c;
  
  for(r=0; r<rows; r++)
  {
    for(c=0; c<5; c++)
    {
       //get the array value 
       value = *(*(ar+r) + c);
       
       //assign doubled value 
         *(*(ar+r) + c) = 2 * value;
    }
    
  }
}


void printArray( int rows, int ar[rows][5] )
{
  int r,c;
  
  for(r=0; r<rows; r++)
  {
    for(c=0; c<5; c++)
    {
       printf("%d ", *(*(ar+r) + c) );
    }
    
    printf("\n");
    
  }
}


