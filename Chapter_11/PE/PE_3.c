/*
Design and test a function that reads the first word from a line of input into an array and discards the rest of the line. It should skip over leading whitespace. Define a word as a sequence of characters with no blanks, tabs, or newlines in it. Use getchar(), not
*/

#include<stdio.h>
#include<ctype.h>

void getWord(char *arr);

int main(void)
{
	char test[10]={'\0'};
	
	getWord(test);
	
	int i;
	
	for(i=0; i<10; i++)
		printf("%c", test[i]);
		
	printf("\n");
	
	return 0;
}

void getWord(char *arr)
{
	char ch;
	
	int spaceCount = 0;
	
	puts("Enter the line:");
	
	while( (ch = getchar()) && spaceCount<2 )
	{
		if( isspace(ch) )
		{
			spaceCount++;
			continue;
		}
		
		else
		{
			*arr++ = ch;	
		}		
	} 
	
//	return void;
}
