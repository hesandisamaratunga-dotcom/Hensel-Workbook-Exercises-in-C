/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Lab01
 * Dtae :06/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void) 
{
	int BirthYear, DigitSum;
	int d1, d2, d3, d4;

	printf("Enter your year of birth : ");
	scanf("%d", &BirthYear);
	getchar();

	//considering an year contains only 4 digits and getting the each digit by dividing from 10
	d1 = BirthYear % 10;
	d2 = (BirthYear / 10) % 10;                   
	d3 = (((BirthYear / 10) / 10) % 10);         // (BirthYear / 100) % 10;
	d4 = ((((BirthYear / 10) / 10) / 10)) % 10;  // (BirthYear / 1000) % 10;

	DigitSum = d1 + d2 + d3 + d4;

	printf("\n%d + %d + %d + %d = %d ", d1, d2, d3, d4, DigitSum);

	getchar();
	return 0;
}