#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "func_PE_11.h"


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
	
	//before sorting 
	printf("Before\n");
	printf("-------------\n");
	for(count=0; count<entries; count++)
		printf("%s\n", strArPtr[count] );
	//	printf("%p ----- %d\n", strArPtr[count], stringLength[count] );
	
	sortPtrLength( stringLength, strArPtr, entries );

	//after sorting	
	printf("After\n");
	printf("-------------\n");
	for(count=0; count<entries; count++)
		printf("%s\n", strArPtr[count] ); 
	
		
}

//option d
void d_sortFirstWord(int entries, const char stringArray[entries][SLEN] )
{
	//copy array to operate on
	char opArray[entries][SLEN];

	//store first word string lengths
	int stringLength[entries];

	//store string array pointers
	char  * strArPtr[entries];

	int index_1 = 0;	
	while ( index_1 < entries)
	{
		strcpy( opArray[index_1], stringArray[index_1] );
		
		index_1++;
		
	}	
	
	int index_3 = 0;
	while(index_3 < entries)
	{
		strArPtr[index_3] = opArray[index_3];

		index_3++;	
	}

	//find length of first words
	int row;

       	for(row=0; row<entries; row++)
	{
		char * testPtr = opArray[row];
		
		int number = 0;
		
		while( !isspace(*testPtr) )
		{
			//printf("%c", *testPtr);
			testPtr++;
			number++;
		}	
		//printf("%d",count);
		stringLength[row] = number;
		
		//strArPtr[row] = testPtr;		
	}
	
	int count;	
	//before sorting 
	printf("Before\n");
	printf("-------------\n");
	for(count=0; count<entries; count++)
		printf("%s\n", strArPtr[count] );
	//	printf("%p ----- %d\n", strArPtr[count], stringLength[count] );
	
	sortPtrLength( stringLength, strArPtr, entries );

	//after sorting	
	printf("After\n");
	printf("-------------\n");
	for(count=0; count<entries; count++)
		printf("%s\n", strArPtr[count] ); 
	
	
}

//string length and pointer array naive sorting shamelessly copied from geeksforgeeks  
void sortPtrLength(int lengthArray[], char * ptrArray[], int n)
{
	int i, j;

	for( i=0; i < n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(lengthArray[j] > lengthArray[j+1])
			{
				swap_int( &lengthArray[j], &lengthArray[j+1] );

				swap_char( &ptrArray[j], &ptrArray[j+1] );
			}
			

		}
	}
}
/*
//naive sorting copied from geeksforgeeks  
void bubblesort(int arr[], int n)
{
	int i, j;

	for( i=0; i < n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if( arr[j] > arr[j+1])
				swap( &arr[j], &arr[j+1] );
		}
	}
}
*/
//swap int to be used in sorting 
void swap_int(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;

	*yp = temp;
}


//swap char to be used in sorting 
void swap_char( char **xp, char **yp)
{
	char *temp = *xp;

	*xp = *yp;

	*yp = temp;
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
