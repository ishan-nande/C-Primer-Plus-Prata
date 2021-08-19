/*
Write a program that reads input up to # and reports the number of times that the
sequence ei occurs.
*/

#include<stdio.h>

int main()
{
	char ch;
	int count = 0;
	
	//intialize previous character with null char
	char prev = 0;
	
	while ( (ch=getchar()) !='#')
	{
		if( prev == 'e' && ch == 'i')
			count++;
		
		prev = ch;
	}
	
	printf("Sequence count:%d", count);
	
	return 0;
}