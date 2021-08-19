/*
Write a program that requests two floating-point numbers and prints the value of their
difference divided by their product. Have the program loop through pairs of input values
until the user enters nonnumeric input.
*/

#include<stdio.h>

int main(void)
{
	float a, b;
	
	printf("Enter two floats:");
	
	
	while( (scanf("%f %f", &a, &b)) == 2)
	{
		printf("(a - b) / (a * b) = %f\n", (a - b) / (a * b) );
		
		printf("Enter two floats:");
	}
	
	return 0;
}