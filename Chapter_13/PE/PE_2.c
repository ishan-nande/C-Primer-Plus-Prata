/*
 *  Write a file-copy program that takes the original filename and the copy file from the 
 *  command line. Use standard I/O and the binary mode, if possible.
 */


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[] )
{
	int ch;

	FILE * read_file;

	FILE * copy_file;



	if( argc != 3 )
	{
		puts("File names not provided");
		exit(EXIT_FAILURE);
	}


	read_file = fopen( argv[1], "r" );
	copy_file = fopen( argv[2], "w" );

	if( ( read_file == NULL) || (copy_file == NULL ) )
	{
		puts("Could not open a file");
		exit(EXIT_FAILURE);	
	}

	
	while( (ch=getc(read_file)) != EOF )
	{
		putc( ch, copy_file );
	//	printf("%c", ch);
	}

	if( fclose(read_file) !=0 || fclose(copy_file) != 0)
		fprintf(stderr, "Error closing files");

	return 0;	
}
