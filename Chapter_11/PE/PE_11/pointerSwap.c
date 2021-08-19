#include<stdio.h>

void swap_char( char **x, char **y)
{
	char * temp = *x;

	*x =*y;

	*y = temp;
}
int main(void)
{
	char charArray[2][2] = { "ab", "cd" };

	char * ptr[2];

	ptr[0] = charArray[0];

	ptr[1] = charArray[1];

	int i;

	printf("before");
	for(i=0; i<2; i++)
		printf("%p\n", ptr[i] );

	/*
	char * temp = ptr[0];

	ptr[0] = ptr[1];

	ptr[1] = temp;
	*/

	swap_char(&ptr[0], &ptr[1] ) ;

	printf("after");
	for(i=0; i<2; i++)
		printf("%p\n", ptr[i] );


	return 0;
}

