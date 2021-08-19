/*Write a program that reads input until end-of-file and echoes it to the display. Have the program recognize and implement the following command-line arguments:
-p	Print input as is
-u	Map input to all uppercase
-l	Map input to all lowercase
Also, if there are no command-line arguments, let the program behave as if the –p argument had been used.
*/


#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int ch;

	//store only the specificatin characters here 
	char option[3];

	//strncpy(option, argv[1], 2);

	option[2] ='\0';

	if( argv[1]!=NULL)
		strncpy(option, argv[1], 2);

	printf("Enter a string\n");
	
	while( (ch=getchar())!= EOF )
	{
		if( argv[1]==NULL)
			putchar(ch);
		else
		{
			switch(option[1])
			{
				case 'p' : putchar(ch);
					    break;

				case 'u' :  putchar(toupper(ch)); 
					   break;

					  
				case 'l' : putchar( tolower(ch) );
					   break;	
			}
		}	
	}
	
	

	return 0;	
}
