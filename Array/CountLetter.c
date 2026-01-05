/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 05/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
 Exercise 55. (Project: CountLetter)
Write a program that prints the number of occurrences of the letter a in a given string to the
console.
Sample output:
”Es war eine Mutter , die hatte 4 Kinder:
den Fruehling , den Sommer, den Herbst und Klaus-Guenter . ”
The text contains ’a’ 3 times .
 *******************************************************************************************************/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) {

	char text[] = "Es war eine Mutter, die hatte 4 Kinder: \nden Fruehling, den Sommer, den Herbst und Klaus - Guenter.";
	char letter = 'a';
	int index = 0, count = 0;

	printf("\"%s\"\n", text);

	while (text[index] != '\0') {
		if (text[index] == letter) {
			count++;
}
		index++;
}
	printf("\nThe text contains \'a\' %d times", count);

	getchar();
	return 0;
}