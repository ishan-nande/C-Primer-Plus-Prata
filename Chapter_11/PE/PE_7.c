/*
The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1, truncating s2 or padding it with extra null characters as necessary. The target string may not be null-terminated if the length of s2 is n or more. The function returns s1. Write your own version of this function; call it mystrncpy(). Test the function in a complete program that uses a loop to provide input values for feeding to the function.
*/

#include<stdio.h>


char * mystrncpy(char *, char *, int );
char * s_gets(char * st, int n);

int main(void)
{
	char source[20];
	
	char target[20];
	
	int n;

	printf("Enter source string:");
	
	while( s_gets(source,20)  )
	{
		printf("Enter target string:");
		s_gets(target, 20);
		
		printf("Enter number of characters to copy:\n");
		scanf("%d", &n);
		
		mystrncpy(source, target,n);
		
		printf("New s1:%s\n", source);
		
		printf("Enter target string:");
		//printf("\n");
	}
	
	return 0;
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


char* mystrncpy(char *s1, char *s2, int n)
{
		
	//s1 length tracker 
	int s1_length= 0;

	//s2 index tracker
	int s2_index; 
	
	char *ptr1 = s1;
	
	//get length of target string 
	while(*ptr1)
	{
		s1_length ++;
		ptr1++;
	}
	
	//data copying from s2 to s1
	for(s2_index = 0; s2_index < n; s2_index++)
	{
		s1[s1_length + s2_index] = s2[s2_index];
	}
	
	//insert null character at end of new s1
	s1[s1_length + n] = '\0';
	
	return s1;
}

