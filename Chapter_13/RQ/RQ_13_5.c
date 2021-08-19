
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int  char_check( char * line, char ch );

int main(int argc, char *argv[] )
{
	char line[256];

	FILE *fp;

	if( (fp=fopen(argv[2], "r")) == NULL)
	{
		printf("Failed to open file %s", argv[2] );
		exit(EXIT_FAILURE);
	}

	while( fgets(line, 256, fp) != NULL )
	{		
		
		if( char_check(line, *argv[1]) )
			printf("%s", line );	
	

	//	puts( line );

	}
	
	

	return 0;	
}

int  char_check( char * line, char ch )
{
	char * ptr;

	int in_line = 0;

 	ptr = line;

	while( (*ptr) != '\n' )
	{
		if( (*ptr) == ch)
		{
			in_line = 1;
			break;
		}

		ptr++;
	}

	return in_line;
}














