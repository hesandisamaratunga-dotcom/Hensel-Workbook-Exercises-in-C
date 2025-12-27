/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :06/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	char character;

	printf("Enter a character you like :)  :   ");
	scanf("%c", &character);
	getchar();

	if ((character >= 'a') && (character <= 'z'))
	printf("\nThe entered character is a simple lettter ");

	else if ((character >= 'A') && (character <= 'Z'))
	printf("\nThe entered character is a capital lettter");

	else if ((character >= '0') && (character <= '9'))
	printf("\nThe entered character is a digit");

	else  printf("\nThe entered character is neither a digit nor a letter");

	getchar();
	return 0;
}