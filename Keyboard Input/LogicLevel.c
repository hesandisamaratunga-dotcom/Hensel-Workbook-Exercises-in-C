/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :06/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void)
{
	float U0 = 5;
	float URX;
	float R1, R2, IRX1 = 0.0f, IRX2 = 0.0005f;

	printf("Enter the value of R1 and R2 in kilo ohms respectively seperated by a comma :     ");
	scanf("%f,%f", &R1, &R2);
	getchar();

	printf("\nThe entered values are %.2f k ohms and %.2f k ohms\n", R1, R2);

	URX = (R2 / (R1 + R2)) * (U0 - R1 * IRX1);
	URX = (R2 / (R1 + R2)) * (U0 - R1 * IRX2);

	printf("\nURX for load current IRX = 0mA is   :   %f\n", URX = (R2 / (R1 + R2)) * (U0 - R1 * IRX1));
	printf("\nURX for load current IRX = 0.5mA is :   %f\n", URX = (R2 / (R1 + R2)) * (U0 - R1 * IRX2));

	printf("\n%%");

	getchar();
	return 0;
}