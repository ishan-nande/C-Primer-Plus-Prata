#include<stdio.h>

int main(void)
{
	int start, end, value;
	
	printf("Enter an integer:");
	
	scanf("%d", &value);
	
	start = value - 1;
	
	end = value + 10;
	
	while(start++ < end)
	{
		printf("%d\n", start);
	}
	
	return 0;
}