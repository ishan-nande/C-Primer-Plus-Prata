/*
Write a program that initializes a two-dimensional array-of- double and uses one of the copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a two-dimensional array is an array of arrays, a one-dimensional copy function can be used with each subarray.)
*/

#include<stdio.h>

void copy_ptrs( double so[], double tar[],  double * end);

int main(void)
{
   double source[4][4] = {{1,2,3,4}, {5,6,7,8}};
   
   double target[4][4];
   
   int r,c;
   
   //copy first row 
   copy_ptrs(*source, *target, *source + 4);
   
   //copy second row 
   copy_ptrs(*(source+1), *(target+1), *(source+1) + 4 );
   
   for(r=0; r<2; r++)
   {
      for(c=0; c<4; c++)
      {
        printf("%.2lf ", target[r][c]);
      }
      
      printf("\n");
   }

}


void copy_ptrs( double so[], double tar[],  double * end)
{
   int i = 0;
   
   while(so < end)
   {
     tar[i] = *so;
     i++;
     so++;
   }
   
   //printf("\n");
}
