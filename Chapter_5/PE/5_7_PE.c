#include<stdio.h>

double cube_of(double n);

int main(void)
{
	double value;
	
	printf("Enter a value of type double:");
	
	scanf("%lf", &value);
	
	//printf("%lf", value);
	printf("(%lf)^3 = %lf\n", value, cube_of(value));
	
	return 0;
}

double cube_of(double n)
{
	
	return n * n * n;
}