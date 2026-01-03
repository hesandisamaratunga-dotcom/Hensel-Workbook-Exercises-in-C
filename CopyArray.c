/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 02/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
  (Project: CopyArray)
Write a program that copied the values of an array to a second array of same size. You are free
to chose the size and values of the original array.
Source : 1 2 5 9 11 20
Copy : 1 2 5 9 11 20
 *******************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#define SIZE 6
#include <stdio.h>

int main(void) {

	int source[SIZE] = { 1,2,5,9,11,20 };
	int copy[SIZE] ;

	for (int i = 0; i < SIZE; i++) {
		copy[i] = source[i];
	}

	//printing source
	printf("Source : ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", source[i]);
	}

	//printing copy
	printf("\n\nCopy   : ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", copy[i]);
	}

	getchar();
	return 0;
}