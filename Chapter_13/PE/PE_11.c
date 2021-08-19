/*
 * Write a program that takes two command-line arguments. The first is a string; the 
 * second is the name of a file. The program should then search the file, printing all lines 
 * containing the string. Because this task is line oriented rather than character oriented, 
 * use fgets() instead of getc(). Use the standard C library function strstr() (briefly 
 * described in exercise 7 of Chapter 11) to search each line for the string. Assume no lines 
 * are longer than 255 characters.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 255

int main(int argc, char*argv[])
{
	FILE *fp;
	
	char line[MAX];

	if( (fp=fopen(argv[2], "r") ) == NULL )
	{
		fprintf( stdout, "can't open the file.\n");
		exit( EXIT_FAILURE);
	}

	while( fgets(line, MAX, fp) != NULL )
	{
		if( strstr(line, argv[1] )!= NULL )
			printf("%s", line );
	}

	fclose(fp);

	return 0;	
}
