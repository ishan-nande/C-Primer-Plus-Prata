/*
Write a program that reads integers until 0 is entered. After input terminates, the
program should report the total number of even integers (excluding the 0) entered, the
average value of the even integers, the total number of odd integers entered, and the
average value of the odd integers.
*/

#include<stdio.h>

int main()
{
	int even_count = 0, even_sum = 0;
	
	int odd_count = 0, odd_sum = 0;
	
	int number;
	
	printf("Enter the integers:\n");
	
	scanf("%d", &number);	
	
	while( number != 0 )
	{

		if( number % 2 == 0 )
		{
			even_sum=+number;
			even_count++;
		}
		
		else
		{
			odd_sum=+number;
			odd_count++;
		}
		
		scanf("%d", &number);	

		
	}
	
	printf("No. of even integers = %d, Average= %.2f\n", even_count, (float)even_sum / even_count);

	printf("No. of odd integers = %d, Average= %.2f\n", odd_count, (float)odd_sum / odd_count);

	return 0;
}