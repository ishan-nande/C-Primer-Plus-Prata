/*
Write a program that reads in a line of input and then prints the line in reverse order.
You can store the input in an array of char ; assume that the line is no longer than 255
characters. Recall that you can use scanf() with the %c specifier to read a character at
a time from input and that the newline character ( \n ) is generated when you press the
Enter key.
*/

#include<stdio.h>

int main(void)
{
	char line[255];
	int i, j;
	
	//scanf("%s", line);
	
	//printf("%s", line);
	
	printf("Enter a line of characters:");
	
	//line input
	for( i = 0; i <= 254; ++i)
	{
		scanf("%c", &line[i]);
	}
	
	printf("\n");
	
	//reverse printing 
	for( j = 254; j>=0; --j)
	{
		printf("%c", line[j] );
	}		
	return 0;
}