/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/

#define CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void)
{
	int R1 = 150, R2 = 220;
	float Resistance = (R1 * R2) / (R1 + R2);

	printf("The resistance of 2 parallel resistors %d ohm and %d ohm is : %.2f ohm", R1, R2, Resistance);

	getchar();
	return 0;
}