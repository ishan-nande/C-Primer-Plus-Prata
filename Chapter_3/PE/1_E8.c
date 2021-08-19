#include<stdio.h>

int main(void)
{
	// number of cups as user input 
	float n_cups;
	
	printf("Enter the number of cups:");
	
	scanf("%f", &n_cups);
	
	printf("%f cups = %f pints\n", n_cups, n_cups/2.0);
	
	printf("%f cups = %f ounces\n", n_cups, n_cups*8);
	
	printf("%f cups = %f table-spoons\n", n_cups, n_cups*64);
	
	printf("%f cups = %f tea-spoons\n", n_cups, n_cups*192);
	
	return 0;
}