/*

Write a program that reads input until encountering # . Have the program print each
input character and its ASCII decimal code. Print eight character-code pairs per line.
Suggestion: Use a character count and the modulus operator ( % ) to print a newline
character for every eight cycles of the loop.

*/
#include<stdio.h>

int main()
{
	char ch;
	int count = 0;
	
	printf("Character input:\n");
	
	while( (ch=getchar()) != '#' )
	{
		count++;
				
		if( count % 8 == 0)
			printf("\n");
		else
			printf("%d ", ch);
		
	}
	
	return 0;
}