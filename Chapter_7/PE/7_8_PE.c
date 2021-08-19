/*
Modify assumption a. in exercise 7 so that the program presents a menu of pay rates
from which to choose. Use a switch to select the pay rate. The beginning of a run
should look something like this:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr 2) $9.33/hr
3) $10.00/hr 4) $11.20/hr
5) quit
*****************************************************************

If choices 1 through 4 are selected, the program should request the hours worked. The
program should recycle until 5 is entered. If something other than choices 1 through 5
is entered, the program should remind the user what the proper choices are and then
recycle. Use #defined constants for the various earning rates and tax rates.
*/

#include<stdio.h>

#define base_pay_1 8.75
#define base_pay_2 9.33
#define base_pay_3 10.00
#define base_pay_4 11.2


#define first_tax_rate 0.15*300
#define second_tax_rate 0.2 * 150

float gross_pay( int work_hours, float base_pay);

int main()
{
	int wh;
	
	int selection;
	
	float bp;
		
	float tax;
	
	float grossPay;
	
	//float grossPay = gross_pay(wh);
	
	//printf("Enter the number of work hours: ");
	//scanf("%d", &wh);
	
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr 2) $9.33/hr\n");
	printf("3) $10.00/hr 4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
	
	//scanf("%d", &selection);
	
	while( (scanf("%d", &selection)) == 1)
	{
		switch(selection)
		{
			case 1:	printf("Enter the number of work hours: ");
					scanf("%d", &wh);
					grossPay = gross_pay(wh, base_pay_1);
					break;

			case 2:	printf("Enter the number of work hours: ");
					scanf("%d", &wh);
					grossPay = gross_pay(wh, base_pay_2);
					break;

			case 3:	printf("Enter the number of work hours: ");
					scanf("%d", &wh);
					grossPay = gross_pay(wh, base_pay_3);
					break;

			case 4:	printf("Enter the number of work hours: ");
					scanf("%d", &wh);
					grossPay = gross_pay(wh, base_pay_4);
					break;

			case 5:	break;
			
			default: printf("Invalid choices. Enter from 1 to 5: \n");
					 break;
								
		}
		
		if( selection > 5)
			continue;
		else
			break;
			
	}
/*
	switch(selection)
	{
		case 1:	printf("Enter the number of work hours: ");
				scanf("%d", &wh);
				grossPay = gross_pay(wh, base_pay_1);
				break;

		case 2:	printf("Enter the number of work hours: ");
				scanf("%d", &wh);
				grossPay = gross_pay(wh, base_pay_2);
				break;

		case 3:	printf("Enter the number of work hours: ");
				scanf("%d", &wh);
				grossPay = gross_pay(wh, base_pay_3);
				break;

		case 4:	printf("Enter the number of work hours: ");
				scanf("%d", &wh);
				grossPay = gross_pay(wh, base_pay_4);
				break;

		case 5:	break;
		
		default: printf("Please enter the correct choices\n");
							
	}
	*/
	if ( grossPay > 0 )
	{
		//tax rate calculations 
		if( grossPay <=300)
			tax = first_tax_rate;
		
		else if ( grossPay > 300 && grossPay <= 450)
			tax = first_tax_rate + ((grossPay-300)*0.2);
		
		else
			tax = first_tax_rate + second_tax_rate + ( (grossPay - 450) * 0.25 );

		printf("Gross pay = %.2f $\n", grossPay);
		
		printf("Total taxes = %.2f $\n", tax);
		
		printf("Net pay = %.2f $\n", grossPay - tax);

	}

	return 0;
}

//calculate the gross pay
float gross_pay( int work_hours, float base_pay)
{	
	float GP;
	
	if ( work_hours <= 40)
		GP = work_hours * base_pay;
	else
		GP = (40*base_pay) + (( work_hours-40)*1.5*base_pay);
	
	return GP;

}

