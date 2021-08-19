/*
 Write a program that reads in up to 10 strings or to EOF, whichever comes first. Have it offer the user a menu with five choices: print the original list of strings, print the strings in ASCII collating sequence, print the strings in order of increasing length, print the strings in order of the length of the first word in the string, and quit. Have the menu recycle until the user enters the quit request. The program, of course, should actually perform the promised tasks.
*/

#include<stdio.h>
#include<string.h>

#define SLEN 200
#define LIM 3

char * s_gets(char * st, int n);
char get_choice(void);
char get_first(void);


//option a 
void a_printStrings(int entries, const char stringArray[entries][SLEN]);
//option b
void b_printASCII(int entries, char stringArray[entries][SLEN]);
//option c 
void c_sortTotalLength(int entries, const char stringArray[entries][SLEN] )
{
	//copy array to operate on
	char opArray[entries][SLEN];

	//store string lengths
	int stringLength[entries];

	//store string array pointers
	char  * strArPtr[entries];

	int index_1 = 0;	
	while ( index_1 < entries)
	{
		strcpy( opArray[index_1], stringArray[index_1] );
		
		index_1++;
		
	}	

	int index_2 = 0;
	while( index_2 < entries)
	{
		 stringLength[index_2] = strlen(opArray[index_2]);		   
		 index_2++;
	}	

	int index_3 = 0;
	while(index_3 < entries)
	{
		strArPtr[index_3] = opArray[index_3];

		index_3++;	
	}

	int count;
	
	for(count=0; count<entries; count++)
		printf("%p\n", strArPtr[count] );
			
}

int main(void)
{
	
	
	char testString[LIM][SLEN] = {"abc",
				      "cdefgh",
				      "ijkl"};
      

	//b_printASCII(LIM, testString);
	
	c_sortTotalLength(LIM, testString);
	//a_printStrings(LIM, testString);
	
	/*			      };
	char testString1[LIM][SLEN];
	int string_count;
	
	for( string_count = 0; string_count < LIM; string_count++)
		s_gets( testString[string_count], SLEN);
	
	printf("%s", testString[1] );
			    
	
	*/
	
	
	/*
	int choice;
	
	while ( (choice = get_choice()) != 'e' )
	{
		switch(choice)
		{
			case 'a' : printf("%c\n", choice);
			           break;
			
			case 'b' : printf("%c\n", choice);
				   break;
				   
			case 'c' : printf("%c\n", choice);
				   break;
				   		
			case 'd' : printf("%c\n", choice);
			           break;
		
		}
	
	}
	*/
	return 0;
}

//print orginal strings 
void a_printStrings(int entries, const char stringArray[entries][SLEN])
{	
	int count;
	
	for(count=0; count<LIM; count++)
		puts(stringArray[count]);
	
}

//ptrint strings in ASCII collating sequence 
void b_printASCII(int entries, char stringArray[entries][SLEN])
{
	int count;
	
	for(count=0; count<LIM; count++)
	{
		char * ptr = stringArray[count];
		
		while( *ptr )
			printf("%d ", *ptr++ );
		
		printf("\n");
	}

}
//print function choices and get one 
char get_choice(void)
{
	int ch;
	
	printf("Enter the letter for print operation of choice on the strings:\n");
	
	printf("a.Original Strings		b.ASCII Collated Sequence\n");
	printf("c.Increasing String Length	d.Increasing First Word Length\n");
	printf("e.Quit\n");
	
	ch = get_first();
	
	//incorrect response prompting 
	while(  ch<'a' || ch>'e' ) //while choices lie between a and e
	{
		printf("Enter a valid choice from a to e\n");
		
		ch = get_first();
	}
}

//get only the first character but skip the rest 
char get_first(void)
{	
	char ch;
		
	ch = getchar();
	
	while( getchar() != '\n'  )
		continue;
	
	return ch;
}
//returns a pointer to the input string, reads a line and removes a newline character in it if present 
char * s_gets(char * st, int n)
{
	char * ret_val ;
	
	int i = 0;
	
	//returns an address that was passed to as first input 
	ret_val = fgets(st, n, stdin);
	
	if(ret_val)
	{
		/*
		check for new line characters and null characters 
		If newline character is detected the first test turns to false.
		The second check for null character is not needed as whatever the result it 
		may give, the final result is going to be false. This is called short-circuitting.
		
		false && true = false 
		false && false = false 
		true && false = false 
		true && true = true 
		*/
		while( st[i] != '\n' && st[i] != '\0')
			i++;
		
		//if newline character is found replace it with null character 	
		if(st[i] == '\n')
			st[i] = '\0';
		else //must have words[i] == '\0' indicating end of string and now the extra characters on the input line cand be dscarded 
			while( getchar() != '\n' )
				continue;
	
	}
	
	return ret_val;
}
