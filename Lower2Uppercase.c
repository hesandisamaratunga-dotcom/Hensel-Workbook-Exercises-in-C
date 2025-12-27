/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	char Simpleletter;

	printf("Enter a lower case letter from a-z :");
		scanf("%c", &Simpleletter);

		//char CapitalLetter = 'a' + 'z';

		printf("\nThe upper case letter of %c is : %c", Simpleletter, Simpleletter - 'a'+'A');

	getchar();
	getchar();
	return 0;
}