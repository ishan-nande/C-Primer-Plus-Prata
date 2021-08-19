/*
Chuckie Lucky won a million dollars (after taxes), which he places in an account that
earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a
program that finds out how many years it takes for Chuckie to empty his account.
*/

#include<stdio.h>

int main(void)
{	//x - lottery money
	// y - money withdrawn
	//n - year count
	
	 long x = 1000000, y = 10000;	
	

	int n = 1;
	
	//x = x + n * (0.08 * x) - (n * y);
		
	//printf("n = %d		x = %d\n", n, x);
	
	
	while(x >= 0)
	{
		x = x + n * (0.08 * x) - (n * y);
		
		printf("n = %d		x = %d\n", n, x);
		
		n+=1;
	}
	
	printf("%d", n);
	return 0;

}