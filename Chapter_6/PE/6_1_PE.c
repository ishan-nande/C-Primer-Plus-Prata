/*
Write a program that creates an array with 26 elements and stores the 26 lowercase
letters in it. Also have it show the array contents.
*/

#include<stdio.h>

int main(void)
{
	char array[26], start;
	
	int index;
	//printf("Lower case characters:");
	
	for(index = 0, start = 97; index < 26; ++index, ++start)
		
		array[index] = start;
		//scanf("%c", &array[index]);
			
	for(index = 0; index < 26; ++index)
		printf("%c\n", array[index]);
	
	return 0;
	 
}