
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ELEM 4

double * transform(const double src[], double target[], int n, double (*pf)(double) );
double three_power(double );
double squared(double );


int main(int argc, char *argv[] )
{
	double ar1[] = {5, 3, 1, 2};
	double ar2[ELEM], ar3[ELEM], ar4[ELEM], ar5[ELEM]; 
	
	transform( ar1, ar2, ELEM, sin );
	transform( ar2, ar3, ELEM, fabs );
	transform( ar3, ar4, ELEM, three_power);
	transform( ar4, ar5, ELEM, squared);

	printf("Original: ");
	for(int i=0; i<ELEM; i++)
		printf("%.3lf", ar1[i] );
	printf("\n");


	printf("Sin: ");
	for(int i=0; i<ELEM; i++)
		printf("%.3lf", ar2[i] );
	printf("\n");

	printf("Absolute: ");
	for(int i=0; i<ELEM; i++)
		printf("%.3lf", ar3[i] );
	printf("\n");

	printf("Cubed: ");
	for(int i=0; i<ELEM; i++)
		printf("%.3lf", ar4[i] );
	printf("\n");

	printf("Squared: ");
	for(int i=0; i<ELEM; i++)
		printf("%.3lf", ar5[i] );
	printf("\n");

	return 0;	
}

double * transform(const double source[], double target[], int n, double (*pf)(double) )
{
	for( int i=0; i<n; i++)
		target[i] = pf(source[i]);
	
	return target;
}

double three_power( double t )
{
	return t*t*t;
}

double squared( double t)
{
	return t*t;
}
