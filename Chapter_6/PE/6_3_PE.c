/*
Use nested loops to produce the following pattern:
F
FE
FED
FEDC
FEDCB
FEDCBA

Note: If your system doesn’t use ASCII or some other code that encodes letters in
numeric order, you can use the following to initialize a character array to the letters of
the alphabet:
char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
Then you can use the array index to select individual letters; for example, lets[0] is
'A' , and so on.
*/

#include<stdio.h>

int main(void)
{
	int dc, ln, lc;
	
	// program will make the decrements in alphabet order 6 times with increase in line number  
	for( ln = 1; ln <= 6; ++ln)
	{
		for( dc = 1, lc = 70; dc <= ln; ++dc, --lc)
		{
			printf("%c", lc);
		}
			
		printf("\n");
	}
}