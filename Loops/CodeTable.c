/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :10/12/2025
 *****************************************************************************************************/

/* Exercise22 (Project:CodeTable)
Print the numeric codes for small and capital letters A–Z in a table. Use the columns Letter,
Small, and Capital. */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void) {

	printf("Letter      | Simple       | Capital       |\n");
	printf("--------------------------------------------\n");

	for (char simple = 'a', capital = 'A'; simple <= 'z'; simple++, capital++) 
	{
	printf("     %c      |      %3d     |      %3d      |\n",capital,simple,capital);
	}

	getchar();
	return 0;
}