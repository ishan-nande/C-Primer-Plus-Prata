/*Use the character classification functions to prepare an implementation of atoi(); have this version return the value of 0 if the input string is not a pure number.
 */

#include<stdio.h>
#include<ctype.h>
#include<string.h>


int MYatoi( char string[]);


int main(void)
{
	char test[]="5234";

	printf("%d", MYatoi(test) );

	return 0;	
}


int MYatoi( char string[] )
{
	//0 if not a pureString, 1 if it is  
	int pureString=1;	

	//total number of characters in the string
	unsigned int totalChar = strlen(string);

	//track the places in digits for multiplication of 10s
	unsigned int index = 0;
	
	//pointer to track the string characters
	char * digitChar = string;

	//hold the integer form of string 
	int digitInt = 0;

	while( *digitChar )
	{

		//printf("%d", pureString);

		if( isdigit(*digitChar)==0 )
		{
			pureString = 0;
			break;
		}

		else
		{	
			//get the current digit from the loop in int type 
			int digit = (*digitChar) - '0';
			//printf("%d\n", digit);	
			//if loop has not reached the end character
			if(index<totalChar)
			{
				int i;
				int hPlace=1; //multiplication of 10s
		
				for(i=1;i<totalChar-index; i++)
					hPlace=hPlace*10;
			
				digitInt += digit * hPlace;
				//printf("%d\n", digitInt);

			}
			//get the last digit where the multiplication of 10s is not needed 
			else
			{
				digitInt += digit;
				//printf("%d\n", digitInt);
			}

			index++;

			digitChar++;
		}
	}	

	return pureString!=1? 0 : digitInt;
}	

