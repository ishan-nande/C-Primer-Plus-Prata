/*Write a power-law program that works on a command-line basis. The first command-line 
 * argument should be the type double number to be raised to a certain power, and the second argument should be the integer power.
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

	double base = atoi(argv[1] );

	double solution = base;

	int power = atoi(argv[2] );	

	int start = 1;

	for(start; start<power; start++)
	{
		solution*=2;

	}
	
	printf("solution : %f\n", solution);

	return 0;	
}
