/*
Write a function that returns the largest value stored in an array-of- int . Test the function
in a simple program.
*/

#include<stdio.h>

int findLargest(int ar[], int * end);

int main(void)
{
  int array[] = {1,3,9,3,12,4,2};
  
  printf("%d\n", findLargest(array, array +  7) );

  return 0;
}

int findLargest(int ar[], int * end)
{
  int largest = *ar;
  
  while(ar < end)
  {
    if( *ar > largest)
      largest = *ar;
    
    ar++;
  
  }
  
  return largest;
}
