
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_array( int ar[], int n_picks, int n);

int main(int argc, char *argv[] )
{
	//printf("%ld\n", time(0) )

	int array[] = { 1,4,3,34,67,1233,78,1232,56,768};

	rand_array( array, 3, 10);
	return 0;	
}

void rand_array( int ar[], int n_picks, int n)
{
	int index;

	srand( time(0) );
	
	for(int i=0; i<n_picks; i++)
	{
		index = rand()%10;
		printf("pick %d : %d\n",i, ar[index] );
	}

}	

