/*
 * Write a program with the following behavior. First, it asks you how many words you
wish to enter. Then it has you enter the words, and then it displays the words. Use
malloc() and the answer to the first question (the number of words) to create a dynamic
array of the corresponding number of pointers-to-char. (Note that because each element
in the array is a pointer-to-char, the pointer used to store the return value of malloc()
should be a pointer-to-a-pointer-to-char.) When reading the string, the program should
read the word into a temporary array of char, use malloc() to allocate enough storage
to hold the word, and store the address in the array of char pointers. Then it should
copy the word from the temporary array into the allocated storage. Thus, you wind up
with an array of character pointers, each pointing to an object of the precise size needed
to store the particular word. A sample run could look like this:
How many words do you wish to enter? 5
Enter 5 words now:
I enjoyed doing this exerise
Here are your words:
I
enjoyed
doing
this
exercise
*/

#include<stdio.h> 
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
	char temp[200] = {'\n'};

	char c;
	int i = 0;
	
	int n_words; //number of words to enter 
	printf("How many words do you wish to enter: ");
	scanf("%d", &n_words);

	//array to store the pointer-to-chars for words
	char * *word_ptr_array = malloc( n_words * sizeof(char) );
	
	//allocate check
	if ( word_ptr_array == NULL )
	{
		puts("Allocation primary failed.");
		exit(EXIT_FAILURE);
	}

	//counter to track new word storage address from malloc arrays 
	int count = 0;

	printf("Enter %d words now:\n", n_words);

	while( (c=getchar()) != '.'  )
	{
		printf("%c",c);
					
		//store characters into a temp array	
		temp[i] = c;
		i++;
		
		//new word encountered	
		if( isspace(c) )
		{
			temp[i] = '\n';
			printf("%s", temp);	
			i = 0;
		}	
		

		/*
		printf("%c", c );

		//create a malloc array to store the temporary word characters 
		char * word = malloc( strlen(temp) * sizeof(char) );
		
		//allocate check
		if ( word == NULL )
		{
			puts("Allocation failed.");
			exit(EXIT_FAILURE);
		}
	
		//copy the temp data to the malloc array
		strcpy( word, temp);
		//printf("%s", temp );

		//store address of the malloc array into word_ptr_array
		word_ptr_array[count] = word;
		count++;	
	
		/*
		if( !isspace(c) )
		{
			temp[i]=c;
			i++;
		}
		*/
	}

	//puts(temp);	
	/*	
	int j;
	
	printf("Your entered words are: \n");
	for(j=0; j<n_words; j++)
	{
		//printf("%s @ %p\n", word_ptr_array[j], word_ptr_array[j]  );
		puts( word_ptr_array[j] );
		free( word_ptr_array[i] );
	};
	*/

	free( word_ptr_array );

	return 0;	
}
