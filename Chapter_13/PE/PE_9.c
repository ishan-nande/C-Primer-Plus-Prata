/*
 *  Modify the program in Listing 13.3 so that each word is numbered according to the order 
 *  in which it was added to the list, starting with 1. Make sure that, when the program is 
 *  run a second time, new word numbering resumes where the previous numbering left off.
 */



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 41

int count_lines( FILE *);
int main(void)
{
	FILE *fp;

	int count = 0;
	
	//number of bytes in a file	
	long nBytes = 0L;

	char words[MAX];


	if( (fp=fopen("wordy", "a+") ) == NULL )
	{
		fprintf( stdout, "can't open \"wordy\" file.\n");
		exit( exit_failure );
	}
	else
	{
		//check if file is empty or not
		fseek(fp, 0, SEEK_END);
		nBytes = ftell(fp);
		fseek(fp, 0, SEEK_SET);
		
		if( nBytes == 0 ) //no data in the file
		{
			count = 0;
		}

		else //count number of lines for continuation
			count = count_lines(fp);

		//printf("%d\n", count_lines(fp) );
		//printf("%lu\n", nBytes);
	}	

	puts("Enter words to add to the file; press the #");
	puts("key at the begining of a line to terminate.");

	while( (fscanf(stdin,"%40s", words) == 1) && (words[0] != '#') )
	{
		count++;
		fprintf( fp, "%d --- %s\n", count, words);
	}

	puts("File contents:");

	rewind(fp); //go back to the begining of the file 
	
	int ch;

	while( (ch=getc(fp)) != EOF )
		putchar(ch);
	/*
	while( fscanf(fp,"%s",words) == 1 )
		puts(words);
	*/

	puts("Done!");

	if( fclose(fp) != 0 )
		fprintf( stderr, "Error closing the file\n");


	return 0;	
}

int count_lines( FILE * file )
{
	int n = 0;

	int ch;

	while( (ch=getc(file)) != EOF )
	{
		if( ch=='\n')
			n++;
	}

	return n;
}






