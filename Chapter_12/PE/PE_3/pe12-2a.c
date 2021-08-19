#include<stdio.h>

//mode of the calculation; US or metric 
static int mode = 0;

//distance that will be supplied  
static float distance;

//fuel consumption that will be supplied 
static float fuelCons;

//set calculation mode
void set_mode( int m )
{
	/*
	 * 0 --- metric mode 
	 * 1 --- US mode 
	 */

	if( m!=0 &&  m!=1 )
	{
		printf("Invalid mode specified");
		printf(" Mode %d(%s) used\n", mode, (mode==0)?"metric":"US");
	}
	else
	{
		mode = m;
	}
}

//get calculation info based on mode 
void get_info(void)
{

	//metric mode
	if( mode == 0 )
	{
		printf("Enter distance travelled in kilometres:");
		scanf("%f", &distance);

		printf("Enter fuel consumed in litres:");
		scanf("%f", &fuelCons);
	}
	
	//US mode 
	if( mode == 1 )
	{
		printf("Enter distance travelled in miles:");
		scanf("%f", &distance);

		printf("Enter fuel consumed in miles:");
		scanf("%f", &fuelCons);
	}
}

//perform calculations and output to screen
void show_info(void)
{
	float calc; //calculated quantity 

	//metric mode 
	if( mode == 0)
	{
		calc = (fuelCons / distance ) * 100;

		printf("Fuel consumption is %.2f litres per 100 km.\n", calc); 
	}

	//US mode 
	if( mode == 1)
	{
		calc = distance / fuelCons;

		printf("Fuel consumption is %.2f miles per gallon.\n", calc);
	}

}
		

