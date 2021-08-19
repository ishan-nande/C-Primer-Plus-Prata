/*
Redo exercise 4 using a switch .
*/

#include<stdio.h>

int main()
{
	char ch;
	
	int period_sub = 0, excla_sub = 0;
	
	printf("Enter the characters:\n");
	
	while ( (ch=getchar()) != '#' )	
	{
		switch(ch)
		{
			case '.': printf("!");
					  period_sub++;
			
			case '!': printf("!!");
					  excla_sub++;
			
			case '#': break;
			
			default: putchar(ch);
						
		}
		
	}
	
	printf("\n");
	
	printf("Period sub = %d, Exclamation sub = %d", period_sub, excla_sub);

	return 0;
}