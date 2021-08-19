#include<stdio.h>

#define GALLON_TO_LITRE 3.785
#define MILES_TO_KM 1.609

int main(void)
{
	float miles_travelled, gallons_consumed, miles_per_gallon;
	
	printf("Enter miles travlled and gasoline gallons consumed:");
	
	scanf("%f %f", &miles_travelled, &gallons_consumed);
	
	//calculate miles per gallon consumed 
	miles_per_gallon = miles_travelled/gallons_consumed;
	
	printf("Miles per gallon: %.1f\n", miles_per_gallon);
	
	//conversion factor for litres-per-100km
	const float convert_factor = 100.0*GALLON_TO_LITRE/(MILES_TO_KM); 
	
	//printf("%f",convert_factor);
	printf("%.1f miles-per-gallon = %.1f litre-per-100km", miles_per_gallon, convert_factor/miles_per_gallon );
	
	return 0;
}