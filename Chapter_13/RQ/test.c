
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;

	float value;

	float sum = 0;

	int count = 0;



	if( ( fp = fopen("number", "r") ) == NULL )
		exit(EXIT_FAILURE);
	
	while ( fscanf( fp, "%f", &value) == 1 )
	{	
		count++;
		//printf("%.1f", value );

		sum+=value;
	}

	printf("sum=%.2f" , sum/count );
	
	
	return 0;	
}
