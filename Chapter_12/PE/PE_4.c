/*
 *  Write and test in a loop a function that returns the number of times it has been called.
 */

#include<stdio.h>

int func_count = 0; // file scope variable 

void func(void);

int main(void)
{
	int i;

	for(i=0; i<44; i++)
		func();

	printf("Function has been called %d times\n", func_count);
	
	return 0;	
}

void func(void)
{
	++func_count;

}
