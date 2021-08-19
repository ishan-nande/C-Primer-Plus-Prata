//r_driver.c -- test the rand0.c 

#include<stdio.h>

extern int rand0(void); //external storage

int main(void)
{
	int count;

	for(count=0; count<5; count++)
		printf("%d\n", rand0() );

	return 0;
}
