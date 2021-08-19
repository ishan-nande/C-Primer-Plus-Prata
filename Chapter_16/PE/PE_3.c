
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"PE_1.h"

//rectangular coordinates
typedef struct rect_coord{
		float x; 
		float y; 
		} rect;
//polar coordinates
typedef struct polar_coord{
		float theta;
		float r;
		} polar;

rect polar_to_coord( polar * );

int main(int argc, char *argv[] )
{
	float mag, theta;
	polar data;

	ASK("magnitude");
	scanf("%f",&data.r);

	ASK("theta");
	scanf("%f",&data.theta); 

	rect output = polar_to_coord( &data );	

	printf("(x,y):(%.2f,%.2f) for (r,theta):(%.2f,%.2f)\n",
		       	output.x, output.y, data.r, data.theta ); 	
	return 0;	
}

rect polar_to_coord( polar * sptr)
{
	rect val;

	val.x = (sptr->r) * cosf(sptr->theta);
	val.y = (sptr->r) * sinf(sptr->theta);

	return val;
}


