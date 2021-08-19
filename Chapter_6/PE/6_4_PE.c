/*
Use nested loops to produce the following pattern:
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/

#include<stdio.h>

int main(void)
{
	int dc, ln, lc;
	
	int start = 65;
	
	// program will make the increments in alphabet order 6 times with increase in line number  
	for( ln = 0; ln <= 5; ++ln)
	{
		int startUpdate = start;
		
		for( dc = 0, lc = startUpdate; dc <= ln; ++dc, ++lc)
		{
			printf("%c", lc);
		}
		
		start = lc;
		
		printf("\n");
		
	}
}