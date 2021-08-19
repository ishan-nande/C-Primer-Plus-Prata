/*
Devise a function called min(x,y) that returns the smaller of two double values. Test
the function with a simple driver.
*/

#include<stdio.h>


double min( double, double);

int main(void)
{
	double min_val, a, b;
	
	a = 1.45678910e5;
	b = 1.45634255e5;
	
	min_val = min(a ,b);
	
	printf("Minimum of a and b is %lf", min_val);
	
	return 0;
}
double min( double x, double y)
{
	if ( x > y)
		return x;
	else 
		return y;
}