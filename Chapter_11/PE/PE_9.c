/*
Write a function that replaces the contents of a string with the string reversed. Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/

#include<stdio.h>
#include<string.h>

char * reverseStr(char *);
char * s_gets(char *, int);

int main(void)
{
	//char s[]="Coputational Fluid Dynamics";
	
	char string[20];
	
	printf("Enter string:");
	
	while( s_gets(string, 20) )
	{	
		printf("Reversed string:%s\n", reverseStr(string) );
		
		printf("Enter a string:");
	}
	
	return 0;
}

char * reverseStr( char * s1 )
{

	//get string length
	int s1_length = strlen(s1);
	
	//stop criteria setup
	int stop_loc;
	
	if( s1_length % 2 == 0) //even
		stop_loc = (s1_length/2) - 1;
	else //odd
		stop_loc = ( (s1_length -1) /2 ) - 1;
	
	//char in string index
	int i;
	
	for( i = 0; i <= stop_loc; i++)
	{
		//store char that needs to be replaces 
		char var = s1[i];
		
		//replace the char at i with that at s1_length
		s1[i] = s1[ s1_length -i - 1 ];
		
		//replace char at s1_length with that at i
		s1[s1_length - i - 1] = var;
	
	}
	
	//add null character at end of string 
	s1[s1_length] = '\0';
	
	return s1;
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

