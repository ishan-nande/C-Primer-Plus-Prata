/*
Write a function that returns the index of the largest value stored in an array-of- double. Test the function in a simple program.
*/

#include<stdio.h>

int findLargeIndex1(double ar[], int elems);

int main(void)
{
  double array[] = {1,3,9,3,12,4,2};
  
  printf("%d\n", findLargeIndex1(array,7) );

  return 0;
}

int findLargeIndex1(double ar[], int elems)
{
  double largest = ar[0];
  int i, large_i = 0;
  
  for(i=0; i<elems; i++)
  {
    if(ar[i] > largest)
     {
      largest = ar[i];
      large_i = i;
     }
  }
  
  return large_i;
}
