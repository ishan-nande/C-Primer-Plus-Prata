
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct names {
	char first[40];
	char last[40];
};

int myComp( const void *p1, const void *p2);
void printStructArray( struct names ar[], int n );

int main(int argc, char *argv[] )
{
	struct names stuff[4] = {
			{"mcha","me"},
			{"mcha", "rrere"},
			{"yes","me"},
			{"test","rrere"}
	};

	printf("Before:\n");
	printStructArray( stuff, 4 );
	qsort( stuff, 4, sizeof(struct names), myComp);	
	printf("After:\n");
	printStructArray( stuff, 4 );
		
	
	
	return 0;	
}

void printStructArray( struct names ar[], int n )
{
	for(int i=0; i<n; i++)	
		printf("%s %s\n", ar[i].first, ar[i].last);}
		
	

int myComp( const void *p1, const void *p2)
{
	const struct names*ps1 = (const struct names*)p1;
	const struct names*ps2 = (const struct names*)p2;

	int res; //comparison tracker 

	res = strcmp( ps1->last, ps2->last ); //compare lasst names 

	if(res != 0)
		return res;
	else	//last names identical, so compare first names
		return strcmp( ps1->first, ps2->first);
}





