#include<stdio.h>

int main(void)
{
	int first_operand, second_operand, modulus;
	
	printf("This program computes moduli\n");
	
	printf("Enter an integer to serve as second operand:");
	
	scanf("%d", &second_operand);
	
	printf("Now enter the first operand:");
	
	scanf("%d", &first_operand);
	
	while( first_operand > 0)
	{
		modulus = first_operand % second_operand;
		
		printf("%d %% %d is %d\n", first_operand, second_operand, modulus);
		
		printf("Enter the next number for first operand(<=0 to quit):");
		
		scanf("%d", &first_operand);
	}
	
	return 0;
}