/*
Write and test a function called larger_of() that replaces the contents of two double
variables with the maximum of the two values. For example, larger_of(x,y) would
reset both x and y to the larger of the two.
*/

#include<stdio.h>


void max_alter(double *c, double *d)
{
	double max;
	
	if( *c > *d)
		max = *c;
	else
		max = *d;
	
	*c = max;
	*d = max; 
	
}

int main(void)
{
	double x = 3.44e6;
	
	double y = 3.546e6;
	
	printf("Original: x = %e, y = %e\n", x, y);
	
	max_alter( &x, &y);
	
	printf("Changed: x = %e, y = %e", x, y);
	
	return 0;
}