/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 02/01/2026
 *****************************************************************************************************/

/******************************************************************************************************
Exercise 41. (Project: InitZeros)
Write a program that creates and prints two int arrays with 100 elements with value 0.
Use a loop and a list, respectively, to initialize the values.
*******************************************************************************************************/

#define _CRT_NO_SECURE_DEPRECATE
#define ELEMENTS 100

#include <stdio.h>

int main(void) 
{

	int loop[ELEMENTS] = { 0 };
	int list[ELEMENTS] = { 0 };


	printf("Array Loop : \n");
	for (int i = 0; i < (ELEMENTS ); i++) {
		loop[i];
		printf("%d ",loop[i]);
		if (i == (ELEMENTS/2)) {
			putchar('\n');
		}
	}

	printf("\n\nArray List : \n");
	for (int i = 0; i < ELEMENTS; i++) {
		list[i];
		printf("%d ", list[i]);
		if (i == (ELEMENTS / 2)) {
			putchar('\n');
		}
	}
	getchar();
	return 0;
}