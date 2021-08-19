/*
Design and test a function that searches the string specified by the first function parameter for the first occurrence of a character specified by the second function parameter. Have the function return a pointer to the character if successful, and a null if the character is not found in the string. (This duplicates the way that the library
strchr() function works.) Test the function in a complete program that uses a loop to
provide input values for feeding to the function.
*/

#include<stdio.h>

char * charSearch(char * str, char ch);

int main(void)
{
	char stringArray[6];
	
	char desChar;
	
	char * retVal;
	
	printf("Enter the string to search in:\n");
	
	while( fgets(stringArray, 5, stdin) != NULL && stringArray[0] != '\0')
	{
		puts(stringArray);
		
		printf("Enter the character to search:\n");
		scanf("%c", &desChar);		

		printf("%c",desChar);
		retVal = charSearch(stringArray, desChar);

		printf("Pointer:%p, Value:%c\n", retVal, *retVal);
	
		printf("Enter the string to search in:");
	
	}
	/*
	char *tester;
	tester = charSearch(test,'t'); 
	printf("%c\n", *tester );
	*/
	
	//printf("%c\n", *charSearch(test, 'u') );
	return 0;
}

char * charSearch(char * str, char ch)
{
	char * ptr;
	ptr = str;
	
	while( *ptr)
	{
		if( *ptr == ch)
			break;
		ptr++;
	}
		
	return ( ptr? ptr : 0) ;
}
