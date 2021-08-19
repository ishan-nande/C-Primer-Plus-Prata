
#include<stdio.h>
#include<stdlib.h>
#include"PE_1.h"
#include<time.h>

void delay_function( double );

int main(int argc, char *argv[] )
{
	delay_function(3.0);
	/*
	clock_t t_start = clock(); 
	
	for(long i=0; i<1000000000; i++);

	clock_t t_end = clock();

	double elapsed_time = ( (double)(t_end- t_start) )/ CLOCKS_PER_SEC;
	printf("elapsed = %.2f\n", elapsed_time );
	*/	
	return 0;	
}

void delay_function( double delay_time)
{
	clock_t t_start = clock();
	clock_t t_end;
	double diff = ( (double)t_start);

	long i=0;

	while(diff<delay_time)
	{
		i++;
		t_end = clock();
		diff = ( ((double)(t_end-t_start)) / CLOCKS_PER_SEC);
	}

	printf("i=%ld\n", i);

}
