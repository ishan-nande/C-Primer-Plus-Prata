/*
Generalize the to_binary() function of Listing 9.8 to a to_base_n() function that
takes a second argument in the range 2–10. It then should print the number that is its
first argument to the number base given by the second argument. For example, to_
base_n(129,8) would display 201 , the base-8 equivalent of 129 . Test the function in a
complete program.
*/

#include<stdio.h>

void to_base(int b, unsigned long n);

int main(void)
{
	unsigned long number; 
	int base;
	
	printf("Enter base and an integer( q to quit): \n");
	
	while(scanf("%d %lu", &base, &number) == 2 )
	{
		printf("Base %d equivalent: ", base);
		
		to_base(base, number);
		
		putchar('\n');
		
		printf("Enter base and an integer( q to quit):\n");
	}
	
	printf("Done.\n");
	
	return 0;
}

void to_base(int b, unsigned long n)
{
	int r; //store remainder 
	
	r = n % b;//get remainder 
	
	if(n >=b)
		to_base(b, n/b);
	
	//putchar( r == 0 ? '0' : '1' );
	printf("%d", r);
	
	return;
	
}

