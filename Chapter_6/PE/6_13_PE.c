/*
Write a program that creates two eight-element arrays of double s and uses a loop to let
the user enter values for the eight elements of the first array. Have the program set the
elements of the second array to the cumulative totals of the elements of the first array.
For example, the fourth element of the second array should equal the sum of the first
four elements of the first array, and the fifth element of the second array should equal
the sum of the first five elements of the first array. (It’s possible to do this with nested
loops, but by using the fact that the fifth element of the second array equals the fourth
element of the second array plus the fifth element of the first array, you can avoid
nesting and just use a single loop for this task.) Finally, use loops to display the contents
of the two arrays, with the first array displayed on one line and with each element of the
second array displayed below the corresponding element of the first array.
*/

#include<stdio.h>

int main(void)
{
	double a[8], b[8];
	
	int i, j, k;
	
	printf("Enter 8 double type values:");
	
	//array input
	for(i = 0,j=0; i<=7; ++i)
	{
		scanf("%lf", &a[i]);	
	}

	//cumulative totals 
	b[0] = a[0];

	for(j = 1; j<=7; ++j)
	{
		b[j] = a[j] + b[j-1]; 
	}
	
	//print first array
	for( k = 0; k<=7; ++k)
	{
		printf("%.1lf %*c", a[k], 4, 32);		
	}
	
	printf("\n");
	
	//print second array
	for( k = 0; k<=7; ++k)
	{
		printf("%.1lf %*c", b[k], 4, 32);		
	}	
	
	return 0;
}