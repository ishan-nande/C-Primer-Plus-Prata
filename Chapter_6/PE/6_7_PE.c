/*
Write a program that reads a single word into a character array and then prints the word
backward. Hint: Use strlen() ( Chapter 4 ) to compute the index of the last character in
the array.
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
	char word[20];
	
	printf("Enter a string ,maximum 20 characters long:");
	
	scanf("%s", word);
	
	int array_length = strlen(word);
	
	for( int n = array_length - 1; n >= 0; --n)
	{
		printf("%c", word[n]);
	}
	
	return 0;
}