/*
 * Write a program that opens two files. You can obtain the filenames either by using 
 * command-line arguments or by soliciting the user to enter them. 
 * 	a. Have the program print line 1 of the first file, line 1 of the second file, line 2 of the 
 * 	first file, line 2 of the second file, and so on, until the last line of the longer file
 * 	(in terms of lines) is printed.
 *
 * 	b. Modify the program so that lines with the same line number are printed on the same line.
*/


#include<stdio.h>
#include<stdlib.h>

long newline(FILE *file, long start_byte, long end_byte);

int main(int argc, char * argv[] )
{
	FILE *file1;
	FILE *file2;

	if( (file1=fopen(argv[1],"rb"))==NULL || (file2=fopen(argv[2],"rb"))==NULL )
	{
		printf("Failed to open the files");
		exit(EXIT_FAILURE);
	}


	int ch1, ch2;

	//file byte count variables 
	long f1_bytes, f2_bytes;
	
	//set file indicators to the end 
	fseek(file1, 0L, SEEK_END);
	fseek(file2, 0L, SEEK_END);

	//total number of bytes for each file 
	f1_bytes = ftell(file1);
	f2_bytes = ftell(file2);
	//printf("%lu", f1_bytes );

	//initial byte position of the second file 
	long start = 0L;
	//new byte position of the second file 
	long new = 0L;	

	long count_f1;

	int ch_f1;

	//set file1 start at file start
	fseek(file1, 0L, SEEK_SET);

	for( count_f1=1L; count_f1<=f1_bytes; count_f1++ )
	{
		ch_f1 = getc(file1);
		
		if( (ch_f1=='\n') && (new<=f2_bytes) )
		{
			printf("\n");

			new = newline( file2, start, f2_bytes );

			start = new;
		}

		else
		{
			putchar(ch_f1);
		}
		
		
		//offset the file poisiton by count_f1 bytes
		//fseek( file1, count_f1, SEEK_SET );


	}


	fclose(file1);
	fclose(file2);	
	
	return 0;	
}

long newline(FILE *file, long start_byte, long total_bytes)
{
	//store byte at which the newline character was found
	long newline_byte;

	long count;

	char ch;

	//set file indicator to start_byte
	fseek(file, start_byte, SEEK_SET);

	for(count=1L; count<=total_bytes; count++)
	{
		ch = getc(file);

		if( ch == '\n')
		{
			printf("\n");
			newline_byte = count;
			break;
		}
		else
			putchar(ch);	


		//offset the file poisiton by count_f1 bytes
		//fseek( file, count, SEEK_SET );

	}

	return newline_byte;
}
		

	






