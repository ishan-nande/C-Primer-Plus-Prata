/* Write a program that generates 1,000 random numbers in the range 1–10. Don’t save or
print the numbers, but do print how many times each number was produced. Have the
program do this for 10 different seed values. Do the numbers appear in equal amounts?
You can use the functions from this chapter or the ANSI C rand() and srand()
functions, which follow the same format that our functions do. This is one way to
examine the randomness of a particular random-number generator.
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	unsigned int seed;

	int rand_n;

	int N = 10;

	int seed_count = 10;

	int count[seed_count][N];	

	int n;

	int i,j;

	int * ptr; 

	for(i=0;i<seed_count;i++)
	{
		for(j=0;j<N;j++)
			 count[i][j] = 0;
	}	

	printf("  #1  |  #2  | #3  | #4  |  #5  |  #6  |  #7  |  #8  |  #9  |  #10 \n");	
	
	for(seed = 1; seed<seed_count+1; seed++)
	{
		//change seed
		srand(seed);

		//1000 randon number generate
		for(n=1; n<1000; n++)
		{
			rand_n = rand() % N + 1;

			count[seed-1][rand_n-1] = count[seed-1][rand_n-1] + 1; 
			//printf("%d ", rand_n);		
		}

		printf("S=%d  ", seed);

		for(i=0; i<N; i++)
			printf("  %d  |", count[seed-1][i]);
		printf("\n");
		
	}

	/*
	
	printf("\n");

	for(i=0;i<seed_count;i++)
	{
		for(j=0;j<N;j++)
			printf("%d ", count[i][j]);

		printf("\n");
	}
	*/	

	return 0;	
}
