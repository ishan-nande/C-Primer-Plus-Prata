/*Write a program that takes as command-line arguments a character and zero or more 
 * filenames. If no arguments follow the character, have the program read the standard 
 * input. Otherwise, have it open each file in turn and report how many times the character 
 * appears in each file. The filename and the character itself should be reported along with 
 * the count. Include error-checking to see whether the number of arguments is correct and 
 * whether the files can be opened. If a file can’t be opened, have the program report that 
 * fact and go on to the next file.
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE * file_open( char *fileName);
int char_count( FILE * filePtr, char test );

int main(int argc, char *argv[] )
{
	char file[20];

	FILE * fp;
	
	int arg_c;
//	printf("%d", char_count(fp, 'l') );	
	
	// insufficient number of arguments to proceed 
	if( argc < 2)
	{
		printf("Minimum argumets should be 1");
		exit(EXIT_FAILURE);
	}

	// standard input for file reading 
	if( argc == 2)
	{

		printf("Enter the files that need to be read:\n");

		while( fgets(file, 20, stdin) != NULL  )
		{
			if( ( fp = file_open(file)) == NULL )
			{
				printf("%s could not be opened", argv[arg_c] );
				continue;
			}		
			else
			{	
				printf("count  of %c in %s --- %d\n", *argv[1], file, char_count( fp, *argv[1] ) );

				fclose(fp);
			}					
		}
	}
	else //file names provided as CLI args 
	{
		for( arg_c = 2; arg_c < argc; arg_c++)
		{
			if( ( fp = file_open(argv[arg_c]) ) == NULL )
			{
				printf("%s could not be opened", argv[arg_c]);
				continue;
			}		
			else
			{
				//file_open( file );
				printf("count of %c in %s --- %d\n", *argv[1], argv[arg_c],  char_count( fp, *argv[1]));

				fclose(fp);
			}
		}	

	}

	
	return 0;	
}

FILE * file_open( char *fileName)
{
	FILE * fp;

	fp = fopen(fileName, "r");

	return fp;
}

int char_count( FILE * filePtr, char test )
{
	int count = 0; //1 for sucessfull run, 0 otherwise

	char ch;

	while( (ch=getc(filePtr)) != EOF )
	{
		if( ch == test)
			count++;
	}

	return count;
}






