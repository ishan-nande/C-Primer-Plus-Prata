/*
Write a program that reads eight integers into an array and then prints them in reverse
order.
*/

#include<stdio.h>

int main(void)
{
	int array[8], i, j;
	
	printf("Enter 8 integers:");
	
	for( i = 0; i <= 7; i++)
	{
		scanf("%d", &array[i]);
	}
	
	for( j = 7; j >= 0; --j )
	{
		printf("%d", array[j]);
	}
	
	return 0;
}