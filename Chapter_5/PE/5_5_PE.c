//addemup.c- five kinds of statements 

#include<stdio.h>

int main(void)
{
	int count, sum, stop_count;
	
	count = sum = 0;  
	
	printf("Enter the end count number:");
	
	scanf("%d", &stop_count);
	

	
	while( count++ < stop_count)
	{
		sum = sum + count; 
		
		printf(" sum = %d\n", sum); //function statement
		 
	}
	
	return 0;
}