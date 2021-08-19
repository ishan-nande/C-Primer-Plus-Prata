#include<stdio.h>

int main(void)
{
	//1 inch = 2.54 cm 
	float one_inch = 2.54;

	//height in inches 
	float your_height;
	
	printf("Enter your height in inches:");
	
	scanf("%f", &your_height);
	
	printf("Your height in centimetres is:%f", one_inch*your_height);
	

	return 0;
}