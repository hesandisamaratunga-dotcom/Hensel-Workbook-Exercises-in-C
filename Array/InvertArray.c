/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 02/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
  Exercise 43. (Project: InvertArray)
Write a program that inverts the order of elements in an array inline (i. e., without using a second
array for intermediate results). Sample output:
Source : 1 2 5 9 11 20 26
Inverted : 26 20 11 9 5 2 1
 *******************************************************************************************************/
#define _CRT_SECURE_NO_DEPRECATE
#define SIZE 7
#include <stdio.h>

int main(void) {

	int source[SIZE] = { 1,2,5,9,11,20,26 };
	int inverted[SIZE];
	int size = sizeof(source) / sizeof(int);

	for (int i = 0; i < SIZE; i++) {
		inverted[i] = source[i];
	}

	//printing source
	printf("Source     : ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", source[i]);
	}

	//printing copy
	printf("\n\nInverted   : ");
	for (int i = size-1; i >= 0; i--) {
		printf("%d ", inverted[i]);
	}

	getchar();
	return 0;
}