/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 05/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
 Exercise 56. (Project: TextStatistics)
 
 Write a program that prints the number of occurrences of small letters, capital letters, digits, and
 other characters in a given string to the console.

    Sample output :
    ”Es war eine Mutter, die hatte 4 Kinder :
	den Fruehling, den Sommer, den Herbst und Klaus - Guenter.”

	Small   letters : 66
	Capital letters : 8
	Digits          : 1
	Other symbols   : 21
 *******************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) {

	char text[]= "Es war eine Mutter, die hatte 4 Kinder :\nden Fruehling,den Sommer, den Herbst und Klaus-Guenter.";
	int index = 0, small_letter = 0, capital_letter = 0, digits = 0, other_symbols = 0;

	printf("\"%s\"\n", text);

	///counting the number of occurances using a while loop and if statements inside
	while (text[index] != '\0') {
		if (text[index] >= 'a' && text[index] <= 'z') {
			small_letter++;
		}
		else if (text[index] >= 'A' && text[index] <= 'Z') {
			capital_letter++;
		}
		else if (text[index] >= '0' && text[index] <= '9') {
			digits++;
		}
		else {
			other_symbols++;
		}
		index++;
	}

	//printing the counts
	printf("Small letters    : %d\n", small_letter);
	printf("Capital letters  : %d\n", capital_letter);
	printf("Digits           : %d\n", digits);
	printf("Other symbols    : %d\n", other_symbols);

	getchar();
	return 0;
}
