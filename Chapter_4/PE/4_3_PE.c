#include<stdio.h>

int main(void)
{
	float num_a, num_b;
	
	printf("Enter floating point numbers:");
	
	scanf("%f%f", &num_a, &num_b);
	
	//a
	printf("The input is %.1f or %.1e\n", num_a, num_a);
	
	//b
	printf("The input is %+.3f or %.3e", num_b, num_b);
	
	return 0;
}