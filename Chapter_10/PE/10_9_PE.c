/*
Write a program that initializes a two-dimensional 3×5 array-of- double and uses a VLA based function to copy it to a second two-dimensional array. Also provide a VLA-based function to display the contents of the two arrays. The two functions should be capable, in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable compiler, use the traditional C approach of functions that can process an N×5 array).
*/

#include<stdio.h>

void printArray( int rows, int cols, int ar[rows][cols]);
void copyArray( int rows, int cols, int so[rows][cols], int tar[rows][cols]);

int main(void)
{
  int source[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
  
  int target[3][5];
  
  //before copying 
  printf("Before coying:\n");
  printArray(3, 5, target);
 
  copyArray(3,5, source, target);
  
  //after copying 
  printf("After copying\n");
  printArray(3, 5, target);
  
  return 0;
}

void copyArray( int rows, int cols, int so[rows][cols], int tar[rows][cols])
{
  int r, c;
  
  for(r=0; r<rows; r++)
  {
     for(c=0; c<cols; c++)
     {
       tar[r][c] = so[r][c];
     } 
  }
}


void printArray( int rows, int cols, int ar[rows][cols])
{
  int r,c;
  
  for(r=0; r<rows; r++)
  {
     for(c=0; c<cols; c++)
     {
       printf("%d  ", ar[r][c]);
     } 
     
     printf("\n");
  }
  
}
