/* 
Use nested loops to produce the following pattern:
$
$$
$$$
$$$$
$$$$$
*/

#include<stdio.h>

int main(void)
{
	int lineCounter, printCounter;
	
	for(lineCounter = 1; lineCounter <= 5; ++lineCounter)
	{
		for(printCounter = 1; printCounter <= lineCounter; ++printCounter)
		{
			printf("$");
		}
			
		printf("\n");
	}
	
	return 0;
}
