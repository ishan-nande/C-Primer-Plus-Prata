
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS	10

char * s_gets(char * st, int n);
void eatline();

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};


int main( int argc, char *argv[] )
{
	struct book library[MAXBKS]; //array of structures

	struct book test;

	//printf("%ld\n", sizeof(struct book ) );
	
	int count = 0; //the total number of book entries
	int index;
        int filecount; //number of entries that were read from the file 
	FILE *pbooks;
	int size = sizeof(struct book );
	char answer; //'d' to delete, 'm' to modify
	long int pos;

	if( (pbooks=fopen("books.dat", "r+b")) == NULL )
	{
		fputs("Can't open the .dat file\n", stderr);
		exit(1);
	}
	

	//read the books from the file(if it contains the data ) into the structure 
	rewind(pbooks); //go to the start of the file 
	while( count < MAXBKS && fread(&library[count], size, 1, pbooks)==1 )
	{
	//	printf("count = %d\n", count );
		/*
		if( count == 0)
			puts("Current contents of the book.dat: ");
		*/
		if( count == 1)
		{
			fseek(pbooks, -84, SEEK_CUR);
			fwrite(&library[0], 1, size, pbooks);
		}	
		//ftell(pbooks);	
		//printf("%ld ---- ",pos );
		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value );
	
		/*	
		printf("Delete this record(d), modify this record(m), keep as it is(n)? ");
		scanf("%c", &answer);
		eatline();
		if( answer == 'd')	
			continue; //overwrite the record with next record by not incrementing the counter
		if( answer == 'm' )
		{
			printf("Enter the title: ");	
			s_gets(library[count].title, MAXTITL);

			puts("Now enter the author: ");
			s_gets( library[count].author, MAXAUTL );
			
			puts("Now enter the value: ");
			scanf("%f", &library[count].value);
		
			while( getchar() != '\n' )
				continue;
		}
		*/
		count++;		
	}

	/*	
	printf("After :\n");
	for( int i=0; i<count; i++)
		printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value );


	filecount = count;

	if( count == MAXBKS )
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}
	
	//add the entries to the file 
	puts("Please add the new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while( count<MAXBKS && s_gets(library[count].title, MAXTITL)!= NULL && library[count].title[0]!='\0')
	{
		puts("Now enter the author.");
		s_gets( library[count].author, MAXAUTL );
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);
		while( getchar() != '\n' )
			continue;
		if( count< MAXBKS )
			puts("Enter the next title.");
	}

	if(count>0)
	{
		puts("Here is the list of your books:");
		for( index=0; index<count; index++)
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
		
		//write the entered struct data to the file 
		//the expres "count-filecount" indicates how mnany blocks need to be written
		fwrite( &library[filecount], size, count, pbooks);
	}
	else
		puts("No books? Too bad.\n");

	puts("Bye!");
	*/
	
	fclose(pbooks);
	
	return 0;	
}


void eatline( void )
{
	while( getchar() != '\n' )
		continue;
}
char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets( st, n, stdin );

	if( ret_val)
	{
		find = strchr( st, '\n');
		if(find)
			*find = '\0';
		else
			while( getchar() != '\n' )
				continue;
	}

	return ret_val;
}


