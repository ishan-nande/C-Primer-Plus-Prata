#include<stdio.h>

int main(void)
{
	const int H_T_M = 60;
	
	int hours, minutes, input;
	
	printf("Enter value greater than zero(zero to end program):");
	
	//initilize the input value for the loop check
	scanf("%d", &input);
	
	while(input > 0)
	{
		hours = input / H_T_M; // convert to hours
		
		minutes = input % H_T_M; //get the minutes 
		
		printf("%d minutes = %d hours %d minutes\n", input, hours, minutes);
		
		printf("Enter value greater than zero(zero to end program):");

		scanf("%d", &input);
		
	}
	
	return 0;
}
