/*
Design and test a function that fetches the next n characters from input (including blanks, tabs, and newlines), storing the results in an array whose address is passed as an argument.
*/

#include<stdio.h>
#include<ctype.h>

void getData(char *);

int main(void)
{
	char array[10];

	printf("Enter 10 characters:");

	getData(array);

	int i;
	
	for(i=0; i<10;i++) 
		printf("%c", array[i] );
		
	return 0;
}

void getData(char * arr)
{
	fgets(arr, 10, stdin);
}
