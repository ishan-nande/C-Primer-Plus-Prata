#include<stdio.h>

int main(void)
{
	float s_yr = 3.156E7;
	
	float age;
	
	printf("Enter your age:");
	
	scanf("%f", &age);
	
	printf("Your age in seconds is:%e", s_yr*age);
	
	return 0;
}