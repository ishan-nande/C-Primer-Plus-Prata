/*
Have a program request the user to enter an uppercase letter. Use nested loops to produce
a pyramid pattern like this:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
The pattern should extend to the character entered. For example, the preceding pattern
would result from an input value of E . Hint: Use an outer loop to handle the rows. Use
three inner loops in a row, one to handle the spaces, one for printing letters in ascending
order, and one for printing letters in descending order. If your system doesn’t use ASCII
or a similar system that represents letters in strict number order, see the suggestion in
programming exercise 3.
*/


#include<stdio.h>

int main(void)
{
	//dc - decrement counter 
	//ln - line number 
	//lc - letter counter
	//sym - initialization of reverse order 
	
	int dc, ln, lc;
	char start = 'A', end;
	
	printf("Last character in pattern:");
	
	scanf("%c", &end);
	
	int diff = end - start;
	
	// program will make the decrements in alphabet order 6 times with increase in line number  
	for( ln = 1; ln <= diff +1 ; ++ln)
	{
		//printf("%*c", 5 - ln, 32); 
		for( int spaces = 1; spaces <= diff + 1 - ln; ++spaces)
		{
			printf("%c", 32);
		}
		
		//ascending order 
		for( dc = 1, lc = start; dc <= ln; ++dc, ++lc)
		{
			printf("%c", lc);
		}
		
		//reverse order 
		for( int sym = lc - 2, dc = 1; dc < ln; ++dc, --sym)
		{
			printf("%c", sym);
		}
		
		printf("\n");
		
	}
}