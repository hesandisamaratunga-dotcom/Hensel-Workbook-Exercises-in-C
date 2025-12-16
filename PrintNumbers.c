/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :10/12/2025
 *****************************************************************************************************/

/*For n ≤ 20, n∈N, print in ascending order all numbers in the first line, all odd numbers in the
second line, and all even numbers in the third line*/

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void) 
{
	//all numbers 1-20
	for (int i = 1; i <= 20; i++)
	{
		printf(" %d ", i);
	}

	//odd numbers from 1-20
	printf("\n");

	int j = 1;
	do {
		printf(" %d ", j);
		j = j + 2;
	} while (j <= 20);

	//even numbers from 1-20
	printf("\n");

	int k = 2;
	do {
		printf(" %d ", k);
		k = k + 2;
	} while (k <= 20);

	getchar();
	return 0;
}