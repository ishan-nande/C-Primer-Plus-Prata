/*
Write a program that reads input until encountering the # character and then reports
the number of spaces read, the number of newline characters read, and the number of all
other characters read.
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int total = 0;
	int space = 0;
	int newline = 0;
	char ch;
	
	printf("Character input:\n");
	
	while( (ch=getchar()) != '#' )
	{
		total++;
		
		if( ch == '\n' )
			newline++;
		
		if ( isspace(ch) )
			space++;
		
	}
	
	printf("Whitespace = %d, Newlines = %d, Other= %d\n", space, newline, total - (space + newline) );
	
	return 0;
}