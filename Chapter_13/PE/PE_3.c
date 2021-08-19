/*
 * Write a file copy program that prompts the user to enter the name of a text file to act as 
 * the source file and the name of an output file. The program should use the toupper() 
 * function from ctype.h to convert all text to uppercase as it’s written to the output file.
 * Use standard I/O and the text mode.a
 * */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

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
		putc( toupper(ch), copy_file );
	//	printf("%c", ch);
	}

	if( fclose(read_file) !=0 || fclose(copy_file) != 0)
		fprintf(stderr, "Error closing files");

	return 0;	
}
