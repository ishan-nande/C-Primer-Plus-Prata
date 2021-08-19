
int main( int argc, char argv[] )
{
	float value;

	int count=0;

	float sum = 0; //initial sume of float values 

	//no comand line arguments, then procees with stdin input method 
	if( argc == 1 )
	{
		while( scanf("%.2f", &value) == 1 )
		{
			count++;
			sum+=value;
		}

		printf("mean = %.2f", sum / count );
	}

	//float values hav been  provided through a file name 
	else
	{
		FILE * fp;

		fp = fopen( argv[1] , "r" );

		while( fscanf( fp, "%f", value) == 1 )
		{
			count++;
			sum+=value;
		}

		printf("mean = %.3", sum / count );
	}

	return 0;



