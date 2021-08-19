/*
Devise a function chline(ch,i,j) that prints the requested character in columns i
through j . Test it in a simple driver.
*/

#include<stdio.h>

void chline(char ch, int i, int j)
{
	int count;
	
	for( count = i; count <= j; count++)
	{
		printf("%c ", ch);
	}
}
int main(void)
{	
	chline('a' , 2, 5);
	
	return 0;
	
}
