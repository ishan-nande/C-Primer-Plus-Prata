/* 
Modify Listing 13.1 so that it solicits the user to enter the filename and reads the user’s response instead of using command-line arguments.
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char argv[])
{
	int ch; //place to store each character as read
	
	FILE *fp;	//file pointer 

	char file_name[20];

	unsigned long count = 0;
	
	/*
	if( argc != 2)
	{
		printf("Usage: %s filename\n", argv[0] );
	}
	*/

	printf("Enter the name of the file to read: ");
	scanf("%s", file_name );


	if(  (fp = fopen(file_name, "r") ) == NULL )
	{
		printf("Can't open %s\n", file_name );
		exit( EXIT_FAILURE);
	}

	while( ( (ch = getc(fp) ) != EOF ) )
	{
		putc( ch, stdout); //same as putchar(ch)
		count++;
	}

	fclose(fp);

	printf("File %s has %lu characters", file_name, count);

	return 0;	
}
