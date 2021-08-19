#include<stdio.h>
#include<string.h>

int main(void)
{
	char firstName[40];
	char lastName[40];
	
	printf("Enter first and last name:");
	
	scanf("%s %s", firstName, lastName);
	
	printf("%s %s\n", firstName, lastName);	
	printf("%*d %*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName) );

	printf("%s %s\n", firstName, lastName);	
	printf("%-d %*d", strlen(firstName), strlen(firstName), strlen(lastName) );
		
	return 0;
}