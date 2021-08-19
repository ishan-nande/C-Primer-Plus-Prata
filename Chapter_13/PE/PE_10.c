/*Write a program that opens a text file whose name is obtained interactively. Set up a 
 * loop that asks the user to enter a file position. The program then should print the part of 
 * the file starting at that position and proceed to the next newline character. Let negative 
 * or nonnumeric input terminate the user-input loop. 
 */


#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] )
{
	long offset;

	//char fname[] = argv[1];
	
	FILE * fp;

	int ch;

	//number of file bytes
	long nBytes = 0L;

	if( (fp=fopen(argv[1],"rb")) == NULL )
	{
		fprintf( stdout, "can't open \"wordy\" file.\n");
		exit( EXIT_FAILURE );
	}

	fseek(fp, 0, SEEK_END);
	nBytes = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	printf("Enter a file position:");

	while( scanf("%lu", &offset)==1)
	{
		if( offset > nBytes )
		{
			printf("Position greater than number of bytes in file.\n");
			printf("Enter a number smaller than %lu:", nBytes);
			continue;
		}

		else
		{	
			fseek(fp, offset, SEEK_SET);

			while( (ch=getc(fp)) != '\n')
			{
				putchar(ch);
			
			}

			printf("\n");
		}

		printf("Enter a file position:");
	}
	
	if( fclose(fp) != 0 )
		fprintf( stderr, "Error closing the file\n");
	
	return 0;	
}
