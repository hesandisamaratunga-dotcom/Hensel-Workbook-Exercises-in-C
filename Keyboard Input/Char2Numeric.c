/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void) 
{

	char input;

	printf("Please enter a character : ");
	scanf("%c", &input);

	printf("The numeric code for the input %c is : %d ", input, input);

	getchar();
	getchar();
	return 0;
}