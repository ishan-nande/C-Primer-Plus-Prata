#include<stdio.h>


int main(void)
{
	float download_speed, file_size, time, bit_file_size;
	
	const float one_byte = 8;
	
	printf("Download speed:\n");
	
	scanf("%f", &download_speed);
	
	printf("File size to be downloaded:\n");
	
	scanf("%f", &file_size);
	
	bit_file_size = file_size*one_byte;
	
	time = bit_file_size/download_speed;
	
	printf("At %.2f megabits per second, a file of %.2f megabytes"
			" downloads in %.2f seconds.", download_speed, file_size, time);
	
	return 0;
}