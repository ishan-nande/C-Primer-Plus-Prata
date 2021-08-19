#include<stdio.h>
#include<float.h>

int main(void)
{
		double double_var = 1.0/3.0;
		float float_var = 1.0/3.0;
		
		printf("FLT_DIG=%d, FLT_DBL=%d\n", FLT_DIG, DBL_DIG);
		
	
		printf("Four digits to the right: double=%.4f, float=%.4f\n", double_var, float_var);
		
		printf("Twelve digits to the right: double=%.12f, float=%.12f\n", double_var, float_var);
		
		printf("Sixteen digits to the right: double=%.16f, float=%.16f\n", double_var, float_var);

		return 0;

}

/*
The output is consistent with the number of allowed significan digits for eah data type.
After those significant digits weird values are printed.
*/