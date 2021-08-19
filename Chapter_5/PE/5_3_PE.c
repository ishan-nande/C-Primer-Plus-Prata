#include<stdio.h>

int main(void)
{
	int weeks, days, input;
	
	const int D_T_W = 7;
	
	printf("Enter the number days:");
	
	scanf("%d", &input);
	
	while( input > 0)
	{
		weeks = input / D_T_W; //get the weeks 
	
		days = input % D_T_W; //get the days 
	
		printf("%d days are %d weeks, %d days\n", input, weeks, days);
		
		printf("Enter the number days:");
	
		scanf("%d", &input);
		
	}
	
	return 0;
}