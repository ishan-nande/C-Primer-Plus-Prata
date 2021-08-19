#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define LEN 20

int total_days( int days, int month, int year );
int input_check( char * );
int month_index( char * input, int input_type );

struct month{
	char name[10];
	char abb[4];
	int nDays;
	int monNum;
};

struct month MONTH[12] = {
		{"January", "Jan", 31, 1},
		{"February", "Feb", 28, 2},
		{"March", "Mar", 31, 3},
		{"April", "Apr", 30, 4},
		{"May", "May", 31, 5},
		{"June", "Jun", 30, 6},
		{"July", "July", 31, 7},
		{"August", "Aug", 30, 8},
		{"September", "Sept", 31, 9},
		{"October", "Oct", 30, 10},
		{"November", "Nov", 31, 11},
		{"December", "Dec", 30, 12}
	};


enum spectrum {January, February, March, April, May, June, July, August, September, October, November, December };


//array of constant pointers to string names 
const char * months[] ={ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };


int main(int argc, char *argv[] )
{
	char month[LEN] = {'\0'};
	int year;
	int days;

	int month_i;

	printf("Enter day of the month: ");
	scanf("%d", &days);

	printf("Enter month: " );
	scanf("%s", month);

	printf("Enter year: ");
	scanf("%d", &year);

	month_i = month_index( month, input_check(month) );	
		
	printf("Total days = %d\n",  total_days( days, month_i, year) );
	
	return 0;	

}

//check if the input contains only letters, only numbers or a mix
int input_check( char * input )
{
	char * ptr = input;

	int char_flag=0; //1 when character found 0 otherwise
	int num_flag=0; //1 when digit found 0 otherwise 

	while( (*ptr)!='\0' )
	{
		if( isalpha(*ptr) ) char_flag=1;
		if( isdigit(*ptr) ) num_flag=1;

		ptr++;
	}

	if( (char_flag==1) && (num_flag==0) ) //string contains alphabets only 
		return 0;
	else if( (char_flag==0) && (num_flag==1) ) //string contains numbers only 
		return 1;
	else	//string is a mix of numbers and alphabets 
		return 2;	
}

//get month index from input 
int  month_index( char * input, int input_type )
{
	enum spectrum month;

	if( input_type == 0) //input contains only strings
	{

		for(month=January; month<=December; month++)
		{
			if( strstr( months[month], input) )
			       break;	
		}


		return month;
	}
	else
		return atoi(input)-1;
}


int total_days( int days, int month_i, int year )
{
	int n = 0;//total number of days 
	
	enum spectrum month;

	int i;

	int leap_year_correction=0; 
	
	if( ( (year%4==0) && (year%100 !=0 ) ) || (year%400==0) )
			leap_year_correction = 1;

	for(i=0; i<month_i; i++)
		n += MONTH[i].nDays;

	
	n += days + leap_year_correction;

	return n;
}


	
