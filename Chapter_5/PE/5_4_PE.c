#include<stdio.h>

int main(void)
{
	const float cm_to_ft = 0.0328;
	
	const float ft_to_in = 12.0;
	
	float cm_value, ft_value, in_value;
	
	printf("Enter  a height in centimetres(<=0 to quit):");
	
	scanf("%f", &cm_value);
	
	while(cm_value > 0)
	{
		ft_value = cm_value * cm_to_ft;//convert value to feet
	
		in_value = (ft_value - (int) ft_value ) * ft_to_in; // convert the significant digits to inches
	
		printf("%.2f cm = %d feet, %.1f inches\n", cm_value, (int) ft_value, in_value);
		
		printf("Enter  a height in centimetres(<=0 to quit):");
		
		scanf("%f", &cm_value);
			
	}

	return 0;
}