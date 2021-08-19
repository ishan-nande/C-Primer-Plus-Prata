/* Write a program that echoes the command-line arguments in reverse word order. That is, if the command-line arguments are see you later, the program should print later you see.  */ 
 
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	//char testString[] = "see you later";	

	unsigned int lastIndex = strlen(argv[1]) - 1;		

	char firstChar = *(argv[1]);

	char *ptr = argv[1] + lastIndex;	
	
	while( *ptr )
	{
		printf("%c", *ptr);
		ptr--;	
	}

	printf("\n");


	return 0;	
}
