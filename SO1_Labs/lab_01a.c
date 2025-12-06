/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Lab01
 * Dtae :06/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	int operand_1 = 7, operand_2 = 3;

	printf("Simple calculator :\n");
	printf("-------------------\n");
	printf("1st operand: 7\n");
	printf("2nd operand: 3\n\n");

	printf("7+3 = %d\n", operand_1 + operand_2);
	printf("7-3 = %d\n", operand_1 - operand_2);
	printf("7*3 = %d\n", operand_1 * operand_2);
	printf("7/3 = %d\n", operand_1 / operand_2);
	printf("7%%3 = %d", operand_1 % operand_2);

	getchar();
	return 0;
}