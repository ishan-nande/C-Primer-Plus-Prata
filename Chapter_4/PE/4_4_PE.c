#include<stdio.h>

int main(void)
{
	char name[40];
	float height_inches;
	
	const float inches_per_feet =12.0;
	printf("Enter your name and height in inches:");
	
	scanf("%s %f", name, &height_inches);
	
	printf("%s, you are %.3f feet tall", name, height_inches/inches_per_feet);
	
	return 0;
}