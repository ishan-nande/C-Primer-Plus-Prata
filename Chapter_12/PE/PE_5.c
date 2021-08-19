/*
 *  Write a program that generates a list of 100 random numbers in the range 1–10
 *  in sorted decreasing order. (You can adapt the sorting algorithm from Chapter 11, 
 *  “Character Strings and String Functions,” to type int. In this case, just sort the numbers themselves.)
 */


#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

void sort(int ar[], int N);

int main(void)
{
	srand( (unsigned int) time(0) );

	int i,N=10;
	int randN[N];

	for(i=0; i<N; i++)
		randN[i] = rand() % 10 + 1;

	//printf("%d\n", rand() % (10+1));	

	sort( randN, N);

	//print to screen
	for(i=0; i<N; i++)
		printf("%d\n", randN[i]);
	
	return 0;	
}

void sort(int ar[], int N)
{
	int i,j,small;

	for(i=0; i<N-1; i++)
	{
		for(j=i+1;j<N; j++)
		{
			if( ar[i] < ar[j] )
			{
				small = ar[i];

				ar[i] = ar[j];

				ar[j] = small;
			}
		}

	}
}
