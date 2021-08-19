#include<stdio.h>
#include<string.h>

int main(void)
{
	char firstName[40];
	
	printf("Enter your first name:");
	
	scanf("%s", firstName);
	
	//a
	printf("a : \"%s\"\n", firstName);
	
	//b
	printf("b : \"%20s\"\n", firstName);
	
	//c
	printf("c : \"%-20s\"\n", firstName);
	
	//d
	printf("d : %*s\n", strlen(firstName)+3, firstName);
}