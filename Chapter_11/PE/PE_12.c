/*
Write a program that reads input up to EOF and reports the number of words, the
number of uppercase letters, the number of lowercase letters, the number of punctuation characters, and the number of digits. Use the ctype.h family of functions.
*/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(void)
{	
	int c;
	
	/* counterInWord is a boolean variable to test if the 
	 * counter of character testing is in a word or not.
	 * True indicates it is, and false it is not.
	 * Initially, it is set to false
	 */
	bool counterInWord = false; 

	int wordCount = 0;
	int upperCaseCount = 0;
	int lowerCaseCount = 0;
	int puncCount = 0;
	int digitCount = 0;
	
	printf("Enter input:");

	while( (c=getchar()) != EOF )
	{

		//word couting
		/* if the character is not alphanumeric  and word 
		 * tracking counter is set to false 
		 * set the word tracker to true,
		 * indicating start of a word and increment 
		 * the word count
		 */ 
		if( !isalpha(c) && !counterInWord) 
		{
			counterInWord=true;
			wordCount++;
		}
	
		/*if non-alphanumeric characters are encountered and the word 
		 * tracking counter is true, this means that the word has ended because a white space has been encountered
		 */
		if( isalpha(c) && counterInWord )
		       	counterInWord = false;	


		if(isupper(c)) upperCaseCount++;

		if(islower(c)) lowerCaseCount++;

		if(ispunct(c)) puncCount++;

		if(isdigit(c)) digitCount++;
	}

	printf("words: %d\n", wordCount );

	printf("upper case characters : %d\n", upperCaseCount );	

	printf("lower case characters : %d\n", lowerCaseCount );

	printf("punctuation characters : %d\n", puncCount);

	printf("digit characters : %d\n", digitCount);

	
	return 0; 
}

