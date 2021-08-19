
#include<stdio.h>
#include<stdlib.h>
#include "PE_5_functions.h"

int main(int argc, char *argv[] )
{
	struct student students[CSIZE];

	//get_student_data( &students[0] );

	//student_average( &students[0] );


	for(int j=0; j<CSIZE; j++)
	{
		get_student_data( &students[j] );

		student_average( &students[j] );
	}

	float oa_avg = class_average( students, CSIZE );

	printf("Entered student data\n");
	printf("--------------------\n");
	for( int i=0; i<CSIZE; i++)
	{
		printf("Student %d: %s %s\n", i, students[i].studentName.fname,  students[i].studentName.fname );
		printf("Grades : %.2f %.2f %.2f\n", students[i].grade[0], students[i].grade[1], students[i].grade[2] );
		printf("Average : %f\n", students[i].avg );
		printf("--------------------\n");
	}

	printf("Class average : %.2f\n", oa_avg ); 
	
	/*
	printf("%s %s %.2f %.2f %.2f %.2f", 
			students[0].studentName.fname, students[0].studentName.lname, 
			students[0].grade[0], students[0].grade[1], students[0].grade[2], students[0].avg );	
	*/
	
	return 0;	
}
