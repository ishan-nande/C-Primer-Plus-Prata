#include<stdio.h>

int main(void)
{
	float one_molec_mass = 3.0E-23;
	
	float one_quart = 950.0;
	
	float quarts_of_water;
	
	printf("Enter amount of water in quarts:");
	
	scanf("%f", &quarts_of_water);
	
	double double_nMolec = (quarts_of_water*one_quart)/one_molec_mass;
	
	float float_nMolec = (quarts_of_water*one_quart)/one_molec_mass;

	printf("double_nMolec:%e \n float_nMolec:%e", double_nMolec, float_nMolec);
	
	return 0;
	
}