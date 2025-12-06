/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Lab01
 * Dtae :06/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	int operand_1 , operand_2 ;

	printf("Modified calculator :\n");
	printf("-------------------\n");

	printf("Enter the values for two operands seperated by a comma : ");
	scanf("%d,%d", &operand_1, &operand_2);
	getchar();

	printf("\n1st operand: %d\n", operand_1);
	printf("2nd operand: %d\n\n", operand_2);

	printf("7+3 = %d\n", operand_1 + operand_2);
	printf("7-3 = %d\n", operand_1 - operand_2);
	printf("7*3 = %d\n", operand_1 * operand_2);
	printf("7/3 = %d\n", operand_1 / operand_2);
	printf("7%%3 = %d", operand_1 % operand_2);

	getchar();
	return 0;
}