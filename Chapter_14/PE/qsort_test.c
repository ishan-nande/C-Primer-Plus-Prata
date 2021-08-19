#include<stdio.h>
#include<stdlib.h>


int compare_ints( const void * a, const void * b)
{
	int arg1 = *(const int *)a;
	int arg2 = *(const int *)b;

	if( arg1 < arg2) return 1;

	if( arg1 > arg2) return -1;
	return 0;
}



int main(int argc, char *argv[] )
{
	int ints[] = {-2, 90, 1,434, 56};
	int size = sizeof ints / sizeof *ints;

	int * int_ar_ptr[] = { &ints[0], &ints[1], &ints[1], &ints[2], &ints[3] };

	printf("%d", compare_ints( int_ar_ptr[3], int_ar_ptr[1]) );
	/*
	int * test = int_ar_ptr[0];

	int test1 = *test;

	printf("%d\n", test1 );
	
	printf("Before:\n");		
	for( int i = 0; i<5; i++)
		printf("%p ", int_ar_ptr[i] );	

	qsort( int_ar_ptr, 5, sizeof(int), compare_ints );

	printf("%d", *int_ar_ptr[1] );
	printf("\nAfter:\n");		
	for( int i = 0; i<5; i++)
		printf("%p ", int_ar_ptr[i] );
	*/	
	printf("\n");
	
	return 0;	
}
