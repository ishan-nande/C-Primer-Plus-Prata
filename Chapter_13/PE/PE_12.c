
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define ROWS 8 
#define COLS 15 

void arrayPrinter(  int rows, int cols, char array[rows][cols] );

int main(void)
{
	FILE * fout;//output file
	FILE * fin;//input file 
	FILE * image_file; //file with image characters 

	//file to which the integers will be written	
	if( (fout=fopen("image_numeric", "w")) == NULL )
	{
		fprintf(stdout,"could not open file");
		exit(EXIT_FAILURE);
	}	
	//print integers to the file 
	int r,c;
	for(r=0; r<ROWS; r++)
	{
		for(c=0; c<COLS; c++)
		{
			fprintf(fout,"%d ", rand()%10);
		}

		fprintf(fout,"\n");
	}

	fclose(fout);

	//file to be read 
	if( (fin=fopen("image_numeric", "r")) == NULL  )
	{
		fprintf(stdout,"could not open file");
		exit(EXIT_FAILURE);
	}	

	//store the integers read from the numeric image data file 
	int numArray[ROWS][COLS];
	
	int ch; //char tracker 
	
	//row, column tracker
	int r1 = 0;
	int c1 = 0; 

	int n;//number from file

	int digit_count=0; //newline character from file

	while( (ch=getc(fin)) != EOF )
	{
	       if( isdigit(ch))
	       {
              		digit_count++;

			n = ch - '0';

			numArray[r1][c1] = n;

			c1++;

		       if( digit_count == COLS )
		       {
			       //reset the col counter and set the row counter
			       c1 = 0;
			       r1++;
			       digit_count = 0;
		       }
	       }
	}

	fclose(fin);

	char imgArray[ROWS][COLS+1] = { {'\0'}, {'\0'} }; //ASCii char array

	int r2,c2;//track row and column counter 

	for(r2=0; r2<ROWS; r2++)
	{
		for(c2=0; c2<COLS-1; c2++)
			imgArray[c2][r2] = numArray[c2][r2] + 32;
	}


	int i,j;

	//file to be written 
	if( (image_file=fopen("image_file", "w")) == NULL  )
	{
		fprintf(stdout,"could not open file");
		exit(EXIT_FAILURE);
	}	


	for(i=0; i<ROWS; i++)
		fprintf( image_file, "%s\n", imgArray[i] );
		//puts( imgArray[i] );
	
	fclose(image_file);
		
	return 0;	
}

void arrayPrinter(  int rows, int cols, char array[rows][cols] )
{
	int i,j;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
			printf("%c ", array[i][j]);

		printf("\n");
	}
}



