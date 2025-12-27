/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void)
{
	int TimePeriod;
	int hours, minutes, seconds;

	printf("Enter a time period in seconds :  ");
	scanf("%d", &TimePeriod);
	getchar();

	hours = TimePeriod / (60 * 60);
	minutes = (TimePeriod / 60) % 60;
	seconds = TimePeriod % 60;

	printf("\n h:%02d m:%02d s:%02d", hours, minutes, seconds);

	getchar();
	return 0;
}