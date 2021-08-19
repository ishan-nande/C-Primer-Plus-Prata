/*
Write a function that returns the difference between the largest and smallest elements of an array-of- double . Test the function in a simple program.
*/

#include<stdio.h>

double findDiff(double ar[], double * end);

int main(void)
{
  double array[] = {0.,3.,9.,3.,12.,4.,2.};
  
  printf("%.2lf\n", findDiff(array, array + 7) );

  return 0;
}


double findDiff(double ar[], double * end)
{
  double largest = *ar;
  double smallest = *ar;
  
  while(ar < end)
  {
    if( *ar > largest)
      largest = *ar;
    
    ar++;
  
  }
  
  while(ar < end)
  {
    if( *ar < smallest)
      smallest = *ar;
    
    ar++;
  }
  
  return largest - smallest;
}


