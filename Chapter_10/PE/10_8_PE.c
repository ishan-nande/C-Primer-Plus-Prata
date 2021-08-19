/*
Use a copy function from Programming Exercise 2 to copy the third through fifth elements of a seven-element array into a three-element array. The function itself need not be altered; just choose the right actual arguments. (The actual arguments need not be an array name and array size. They only have to be the address of an array element and a number of elements to be processed.)
*/

#include<stdio.h>

void copy_ptrs( double so[], double tar[],  double * end);

int main(void)
{
  double source[7] = {1,2,3,4,5,6,7};
  
  double target[3];
  
  int i;
  
  copy_ptrs( &source[2], target, source + 6 );
  
  for( i = 0; i < 3; i++)
    printf("%.2lf ", target[i]);
    
  printf("\n");
  
}

void copy_ptrs( double so[], double tar[],  double * end)
{
   int i = 0;
   
   while(so < end)
   {
     tar[i] = *so;
  //   printf("%.2lf ", tar[i]);
     i++;
     so++;
     //printf("%.2lf
   }
   
  // printf("\n");
}
