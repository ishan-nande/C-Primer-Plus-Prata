//r_drive1.c -- test rand1() and srand1()

#include<stdio.h>
#include<time.h>

extern void srand1( unsigned int x);
extern int rand1(void);

int main(void)
{
	int count;
	unsigned seed;

	/*
	printf("Please enter your choice for seed.\n");
	while( scanf("%u", &seed)==1)
	{
		srand1(seed);
		for(count=0; count<3;count++)
			printf("%d\n", rand1() );
		printf("Please enter next seed(q to quit):\n");
	}
	*/
	srand1( time(0) );
	printf("%d\n", rand1() );	

	printf("Done!");

	return 0;
}
