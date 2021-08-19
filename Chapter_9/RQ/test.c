#include<stdio.h>

void alter( int, int);

int main(void)
{
	int a = 4;
	int b = 2;
	
	alter(a, b);
	
	return 0;
}


void alter( int x, int y)
	{
		int *px, *py, temp;
		
		printf("Original x = %d, Origial y = %d\n", x, y);
		
		px = &x;
		
		py = &y;
		
		temp= x + y;
		
		*py = x - y;
		
		*px = temp;
		
		printf("Changed x = %d, Changed y = %d", x, y);
		
	}
		