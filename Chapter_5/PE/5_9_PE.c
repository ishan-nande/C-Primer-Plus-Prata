#include<stdio.h>

void Temperature(double fahrenheit);

int main(void)
{
	//Temperature(100.256);
	
	int scanf_return;
	
	double original_value; 
	
	printf("Enter temperature value in Fahrenheit:");
	
	scanf_return = scanf("%lf", &original_value);
	
	while( scanf_return == 1)
	{
		
		Temperature( original_value);
		
		printf("Enter temperature value in Fahrenheit:");
		
		scanf_return = scanf("%lf", &original_value);
	}
	
	return 0;
}

void Temperature(double fahrenheit)
{
	double celsius_value, kelvin_value;
	
	const double A = 5.0 / 9.0;
	const double B = 32.0;
	const double C = 273.16;
	
	celsius_value = A * (fahrenheit - B);
	
	kelvin_value = celsius_value + C;
	
	printf("%.2f Fahrenheit is %.2f Celsius and %.2f Kelvin\n", fahrenheit, celsius_value, kelvin_value);
	
	
	
}