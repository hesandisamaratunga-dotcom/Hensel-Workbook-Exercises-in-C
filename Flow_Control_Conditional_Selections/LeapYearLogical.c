/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :06/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void)
{

	int year, leapYear, isleapYear;

	printf("Enter an year to check if it is a leap year : ");
	scanf("%d", &year);
	getchar();

	isleapYear = (((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0));

	if (isleapYear)
		printf("\nThe year %d is a leap year", year);

	else printf("\nThe year % d is not a leap year", year);

	getchar();
	return 0;
}