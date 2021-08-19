#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int totalDays( char * );

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
	printf("%d\n", totalDays("March") );
		
	return 0;	
}

int totalDays( char * month_name )
{
	int n = 0;//total number of days 
	
	enum spectrum month;

	month = January; //initial start 

	for(month=January; month<=December; month++)
	{
		n += MONTH[month].nDays;

		if( strcmp(month_name, months[month])==0)
		       break;	
	}


	return n;
}
			










