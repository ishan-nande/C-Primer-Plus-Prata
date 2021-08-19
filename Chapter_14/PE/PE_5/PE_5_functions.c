
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "PE_5_functions.h"


char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st,n, stdin);

	if( ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while( getchar() != '\n' )
				continue;
	}

	return ret_val;
}

void get_student_data( struct student * ptr )
{

	printf("First name: ");	
	s_gets( ptr->studentName.fname, LEN ); 

	printf("Last name: ");
	s_gets( ptr->studentName.lname, LEN );

	printf("Enter three grades of the student:\n");

	for(int i=0; i<3; i++)
	{
		printf("Grade %d: ", i);
		scanf("%f", &ptr->grade[i] );
	}

	eatline();

}

void student_average( struct student * ptr )
{
	float average = 0.0;

	for(int i=0; i<3; i++)
		average += ptr->grade[i];

	ptr->avg = average/3;
}

float class_average( const struct student array[], int n  )
{
	float sum = 0.0;

	for(int i=0; i<n; i++)
		sum += array[i].avg;

	return sum/n;
}



void eatline(void)
{
	while( getchar() != '\n' )
		continue;
}
