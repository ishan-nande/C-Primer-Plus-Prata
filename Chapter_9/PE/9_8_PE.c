/*
Chapter 6 , “C Control Statements: Looping,” ( Listing 6.20 ) shows a power() function
that returned the result of raising a type double number to a positive integer value.
Improve the function so that it correctly handles negative powers. Also, build into the
function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1.
(It should report that 0 to the 0 is undefined, then say it’s using a value of 1.) Use a loop.
Test the function in a program.
*/

#include<stdio.h>
#include<math.h>
#include<iso646.h>

double power(double n, int p); // function prototype 

int main(void)
{
	double x, xpow;
	
	int exp;
	
	printf("Power and base or 'q' to quit:");

	
	while(scanf("%lf%d", &x, &exp)==2)
	{
		xpow = power(x, exp); // function call
		
		//printf("xpow = %lf\n", xpow);
		
		
		if( (xpow!=1) or (xpow!=0) )
		{
			printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		}
		printf("Power and base or 'q' to quit:");
		
	}
	
	printf("Hope you enjoyed this power trip -- bye!\n");
	
	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	
	int i;

	if ( p == 0 )
	{
		printf("Any number to the power 0 is 1\n");
		
		pow = 1;
		
		//printf("%d", pow);
	}
	
	else if( n == 0 and ( p > 0 or p < 0) )
	{
		printf("0 to any power other than 0 is, 0 \n");
	 
		pow = 0;

	}
	
	else
	{
		for(i = 1; i<=fabs(p); i++)
			pow*=n;
		
		if( p < 0)	
			pow = 1 / pow;

	}
	
	return pow;
	
}
	