/*
Write a program that requests the hours worked in a week and then prints the gross pay,
the taxes, and the net pay. Assume the following:
a. Basic pay rate = $10.00/hr
b. Overtime (in excess of 40 hours) = time and a half
c. Tax rate: #15% of the first $300
20% of the next $150
25% of the rest
Use #define constants, and don’t worry if the example does not conform to current
tax law.
*/

#include<stdio.h>

#define base_pay 10
#define first_tax_rate 0.15*300
#define second_tax_rate 0.2 * 150

float gross_pay( int work_hours);

int main()
{
	int wh;
		
	float tax;
	
	float grossPay = gross_pay(wh);
	
	printf("Enter the number of work hours: ");
	scanf("%d", &wh);
	
	if( grossPay <=300)
		tax = first_tax_rate;
	
	else if ( grossPay > 300 && grossPay <= 450)
		tax = first_tax_rate + ((grossPay-300)*0.2);
	
	else
		tax = first_tax_rate + second_tax_rate + ( (grossPay - 450) * 0.25 );
	
	
	printf("Gross pay = %.2f $\n", grossPay);
	
	printf("Total taxes = %.2f $\n", tax);
	
	printf("Net pay = %.2f $\n", grossPay - tax);
	
	return 0;
}

//calculate the gross pay
float gross_pay( int work_hours)
{	
	float GP;
	
	if ( work_hours <= 4e:0)
		GP = work_hours * base_pay;
	else
		GP = (40*base_pay) + (( work_hours-40)*1.5*base_pay);
	
	return GP;

}

