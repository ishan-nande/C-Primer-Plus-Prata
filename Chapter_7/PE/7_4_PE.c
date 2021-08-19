/*
Using if else statements, write a program that reads input up to # , replaces each period
with an exclamation mark, replaces each exclamation mark initially present with two
exclamation marks, and reports at the end the number of substitutions it has made.
*/

#include<stdio.h>

int main()
{
	char ch;
	
	int period_sub = 0, excla_sub = 0;
	
	printf("Enter the characters:\n");
	
	while ( (ch=getchar()) != '#' )
	{
		if ( ch == '.')
		{
			//printf("%c",'!');
			printf("!");
			period_sub++;
		}
		
		else if( ch == '!')
		{
			//printf("%c%c",'!','!');
			printf("!!");
			excla_sub++;
		}
		
		else
			putchar(ch);
	}
	
	printf("\n");
	
	printf("Period sub = %d, Exclamation sub = %d", period_sub, excla_sub);
	return 0;
}