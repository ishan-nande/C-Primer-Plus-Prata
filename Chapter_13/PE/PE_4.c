/*
 * Write a program that sequentially displays onscreen all the files listed in the command line. Use argc to control a loop.
 */


#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] )
{
	int i;

	if( argc < 2 )
	{
		printf("Not enough CLI arguments");
		exit(EXIT_FAILURE);
	}

	for( i=1; i<argc; i++ )
		printf("File %d : %s\n", i, argv[i] );

	return 0;	
}

