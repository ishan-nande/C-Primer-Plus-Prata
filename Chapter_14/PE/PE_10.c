
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef float (*V_FP_FLPTR)(float );

char showmenu(void);
float square(float );
float cube(float );
float fourth(float );
void eatline(void);
void showAnswer( float (*fp)(float), float input );

int main(int argc, char *argv[] )
{
	//float(*pfun)(float );
	V_FP_FLPTR arpf[4]={ square, cube, fourth};

	int index;
	char ans;

	float number;
	printf("Enter a float number: ");
	scanf("%f", &number);

	while( (ans=showmenu()) != 'q' )
	{
		index = ans-'a';

		switch(ans)
		{
			case 'a': showAnswer( arpf[index], number );	
				  break;

			case 'b': showAnswer( arpf[index], number );
				  break;

			case 'c': showAnswer( arpf[index], number );
				  break;
		}
	}
	
	return 0;	
}

void showAnswer( float (*fp)(float), float input )
{
	printf("Answer: %.3f\n", (*fp)(input) );
}


char showmenu(void)
{
	char ans;
	puts("Enter menu choice:");
	puts("a) square		b) cube");
	puts("c) fourth		q) quit");
	ans = tolower( getchar() );
	eatline();
	while( strchr("abcq", ans) == NULL )
	{
		puts("Please enter a, b, c, or q");
		ans = tolower(getchar());
		eatline();
	}

	return ans;
}

void eatline()
{
	while( getchar() != '\n')
		continue;
}


float square( float a)
{
	return a*a;
}

float cube( float a)
{
	return a*a*a;
}

float fourth( float a)
{
	return a*a*a*a;
}
