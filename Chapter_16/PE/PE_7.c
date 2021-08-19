
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void show_array( const double ar[], int n);
double * new_d_array( int n, ...);

int main(int argc, char *argv[] )
{
	double *p1, *p2;
	
	p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6 );
	p2 = new_d_array(4,100.0,20.000,8.08,-1890.0);

	show_array(p1,5);
	show_array(p2,4);

	free(p1);
	free(p2);

	return 0;	
}

double * new_d_array( int n, ...)
{
	double * aptr = (double *)malloc( sizeof(double)*n);

	va_list ap;
	va_start(ap,n);

	double * ptr = aptr;

	/*
	while(ptr!=NULL)
	{
		*ptr = va_arg(ap, double);
		ptr++;
	}
	*/
	for(int i=0;i<n;i++)
	{
		aptr[i] = va_arg(ap, double);
	}

	return aptr;
}

void show_array( const double ar[], int n)
{
	for(int i=0; i<n; i++)
		printf("%.2f ", ar[i] );
	
	printf("\n");

}
