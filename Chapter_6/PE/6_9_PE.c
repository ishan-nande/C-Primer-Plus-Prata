/*
Modify exercise 8 so that it uses a function to return the value of the calculation.
*/

float calculate( float a, float b);

#include<stdio.h>

int main(void)
{
	float a, b;
	
	printf("Enter two floats:");
	
	
	while( (scanf("%f %f", &a, &b)) == 2)
	{
		printf("(a - b) / (a * b) = %f\n", calculate(a,b) );
		
		printf("Enter two floats:");
	}
	
	return 0;
}

float calculate( float c, float d)
{
	return (c - d) / (c * d);
}