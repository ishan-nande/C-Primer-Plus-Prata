/*
Write a function that sets each element in an array to the sum of the corresponding elements in two other arrays. That is, if array 1 has the values 2 , 4 , 5 , and 8 and array 2 has the values 1 , 0 , 4 , and 6 , the function assigns array 3 the values 3 , 4 , 9 , and 14 . The function should take three array names and an array size as arguments. Test the function in a simple program.
*/

#include<stdio.h>

void addToArray( int ar1[], int ar2[], int ar3[], int elems);

int main(void)
{
  int array1[] = {2,4,5,8};
  
  int array2[] = {1,0,4,6};
  
  int array3[3];
  
  addToArray( array1, array2, array3, 4);
  
  return 0;
}

void addToArray( int ar1[], int ar2[], int ar3[], int elems)
{
   int i = 0;
   
   while( i < elems)
   {
     ar3[i] = ar1[i] + ar2[i];
     
     printf("%d ", ar3[i]);
     
     i++;
   }
   
   printf("\n");

}
