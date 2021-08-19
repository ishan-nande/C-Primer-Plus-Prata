//addemup.c- five kinds of statements 

#include<stdio.h>

int main(void)
{
	int count,  stop_count;
	
	long long sum;
	
	count = sum = 0;  
	
	printf("Enter the end count number:");
	
	scanf("%d", &stop_count);
	

	
	while( count++ < stop_count)
	{
		sum = (sum * sum) + (count * count); 
		
		printf(" sum of integers squared = %d\n", sum); //function statement
		 
	}
	
	return 0;
}