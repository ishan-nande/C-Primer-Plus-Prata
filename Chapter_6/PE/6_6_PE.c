/*
Write a program that prints a table with each line giving an integer, its square, and its
cube. Ask the user to input the lower and upper limits for the table. Use a for loop.
*/

#include<stdio.h>

int main(void)
{
	int start, end;
	
	printf("Upper and lower limits of calculation:");
	
	scanf("%d %d", &start, &end);
	
	printf("n	n^2	 n^3\n");
	
	for( start; start <= end; ++start)
	{
		int square = start * start;
		
		int cube = start * start * start;
		
		printf("%d %8d %8d\n", start, square, cube);
		
	}
	
	return 0;
}