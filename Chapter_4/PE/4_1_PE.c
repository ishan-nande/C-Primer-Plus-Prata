#include<stdio.h>

int main(void)
{
	char firstName[40];
	char lastName[40];
	
	printf("Your first name:");
	
	scanf("%s", firstName);
	
	printf("Your last name:");
	
	scanf("%s", lastName);
	
	printf("Your full name is: %s,%s", lastName, firstName);
	
	return 0;
}