/*
 Write a function called string_in() that takes two string pointers as arguments. If the second string is contained in the first string, have the function return the address at which the contained string begins. For instance, string_in("hats", "at") would return the address of the a in hats. Otherwise, have the function return the null pointer. Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char * string_in(char *s1, char *s2);
char * s_gets( char *, int);

int main(void)
{

	char s1[20];
	char s2[20];
	
	printf("Enter s1:");
	
	while( s_gets( s1, 20) )
	{
		printf("Enter s2:");
		
		s_gets(s2, 20);
		
		string_in(s1, s2);
		
		printf("Enter s1:");
	}
}

char* string_in(char *s1, char *s2)
{
	char *ptr2 = s2;
	
	char *ptr1 = s1;
	
	int str2_sum = 0;

	//get sum of ASCII codes of each character in the string 
	while(*ptr2)
		str2_sum += *ptr2++;

	//get length of s2
	int s2_length = strlen(s2);
		
	//start looping over s1 values 
	while(*ptr1)
	{
		//hold sum of subsequent ASCII codes to check
		int str1_sum = 0;
		
		//pointer for location of matched character in s1
		char * char_found;
		
		//counter to track how many characters in s1 have been summed 
		int str1_sum_counter = 0;
			
		//if character in s1 equals s2[0]
		if( *ptr1 == s2[0] )
		{
			char_found = ptr1;
			
			//start while loop for adding ASCII codes of the next s2_length characters 
			while( str1_sum_counter < s2_length)
			{
				str1_sum+=*char_found++;
				str1_sum_counter++;
			}
			
			//check if the ASCII sum matches with that of characters in s2 
			if ( str1_sum == str2_sum )
				printf("s2 string in s1 begins at: %p\n", ptr1);
		}
		
		ptr1++;
	}
	
	return ( *ptr1 ? ptr1 : NULL );
	
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

