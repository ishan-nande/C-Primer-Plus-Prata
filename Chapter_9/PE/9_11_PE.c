/*
Write and test a Fibonacci() function that uses a loop instead of recursion to calculate
Fibonacci numbers.
*/

#include<stdio.h>

void Fibonacci(int num)
{
	int a, b, c;
	
	int count = 3;
	
	printf(" 0 1 1");
	
	for( b=1,c=1; count<=num; count++)
	{
		a = b + c;
		
		c = b;
		
		b = a;
		
		printf(" %d", a);
	}
	
	putchar('\n');
	
	return;
}

int main(void)
{
	int n;
	
	printf("Fibonnaci sequence number or 'q'to quit:");
	
	while( scanf("%d", &n)== 1)
	{
		Fibonacci(n);
		
		printf("Fibonnaci sequence number or 'q'to quit:");

	}
	
	return 0;
}