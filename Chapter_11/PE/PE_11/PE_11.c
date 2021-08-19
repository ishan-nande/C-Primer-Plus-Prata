/*
 Write a program that reads in up to 10 strings or to EOF, whichever comes first. Have it offer the user a menu with five choices: print the original list of strings, print the strings in ASCII collating sequence, print the strings in order of increasing length, print the strings in order of the length of the first word in the string, and quit. Have the menu recycle until the user enters the quit request. The program, of course, should actually perform the promised tasks.
*/
#include<stdio.h>
#include "func_PE_11.h"

int main(void)
{

	/*
	char testString[LIM][SLEN] = {"abc",
				      "cdefgh",
				      "ijkl",
					"ishan",
					"fluids"};
  	 */

//	char testString[LIM][SLEN] = {"Fluid mechanics", "Computational fluid mechanics","vortex lattice method", "panel method", "metallica sad but true" };

    char

	char testString[LIM][SLEN];
	int string_count=0;
	int c;

	for( string_count = 0; string_count < LIM; string_count++)
	{
		printf("Enter string %d:", string_count+1);
		s_gets( testString[string_count], SLEN);
	}

	int choice;

	while ( (choice = get_choice()) != 'e' )
	{
		switch(choice)
		{
			case 'a' : a_printStrings(LIM, testString);
			           break;

			case 'b' : b_printASCII(LIM, testString );
				   break;

			case 'c' : c_sortTotalLength(LIM, testString);
				   break;

			case 'd' : d_sortFirstWord(LIM, testString);
			           break;

		}
	}

	return 0;
}

