/*
Write a program that reads characters from the standard input to end-of-file. For each
character, have the program report whether it is a letter. If it is a letter, also report
its numerical location in the alphabet. For example, c and C would both be letter 3.
Incorporate a function that takes a character as an argument and returns the numerical
location if the character is a letter and that returns –1 otherwise.
*/

#include<stdio.h>
#include<iso646.h>
#include<ctype.h>

int isLetter( char ch )
{
	int loc;
	
	if( isalpha(ch)!=0 )
	{
		if( isupper(ch)!=0 )
		{
			ch = tolower(ch);
		}
		
		loc = 26 - (122 -  ch);
		
		//printf("%d\n", loc);
		return loc;
	}
	
	else
		//printf("-1\n");
		return -1;
}

int main(void)
{
	int ch, location;
	
	printf("Enter a character:");
	
	while( (ch = getchar()) != EOF)
	{	
		scanf("%*c"); //skip over enter character after ch 
		
		location = isLetter(ch);
		
		if(location != -1)
			printf("Location: %d\n" , isLetter(ch) );
		else 
			printf("Not a letter\n");
	
		printf("Enter a character:");
	}
	
	return 0;
	
}
	
