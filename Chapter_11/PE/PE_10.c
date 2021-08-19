/*
Write a function that takes a string as an argument and removes the spaces from the string. Test it in a program that uses a loop to read lines until you enter an empty line. The program should apply the function to each input string and display the result.
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

char * s_gets(char * st, int n);
char * removeSpace(char * string);

int main(void)
{
	char target[200];
	
	printf("Enter a long string:");
	
	while( s_gets(target, 200)  )
	{
		printf(" Modified: %s\n", removeSpace(target) );
		
		printf("Enter a long string:");
		
	}
	
	return 0;
}

char * removeSpace(char * string)
{
	//track characters which are not spaces 
	int count_no_space = 0;
	
	int index;
	
	for(index = 0; count_no_space < (int)strlen(string); index++)
	{
		if( !(isspace( string[index]) ) )
		{
			//printf("%d\n", index);
			string[count_no_space++] = string[index];
		}
	}
	
	//insert null character at string end 
	string[count_no_space-1]='\0';

	return string;
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
