/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 04/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
  Write a function mean() that calculates the average value :

  Data : 1.0 2.0 3.0 4.0 5.0 6.5 7.0
  Statistical mean = 4.1
 *******************************************************************************************************/

#define _CRT_NO_SECURE_DEPRECATE
#define SIZE 6
#include<stdio.h>

//prototype
int isEqualArrays(int a[],int b[]);

int main(void) {
	//Implementation of arrays
	int a[SIZE] = { 6,5,9,11,20 };
	int b[SIZE] = { 6,5,9,11,20 };
	int c[SIZE] = { 6,7,9,11,20 };

	printf("Arrays :\n");
	printf("%d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4]);
	printf("%d %d %d %d %d \n", b[0], b[1], b[2], b[3], b[4]);
	printf("%d %d %d %d %d \n", c[0], c[1], c[2], c[3], c[4]);

	//comparison of arrays
	printf("\nCompare arrays value by value :\n");
	printf("is a same as b? : %s\n", isEqualArrays(a, b) == 1 ? "true" : "false");
	printf("is a same as c? : %s\n", isEqualArrays(a, c) == 1 ? "true" : "false");
	printf("is a same as c? : %s\n", isEqualArrays(b, c) == 1 ? "true" : "false");

	getchar();
	return 0;
}

int isEqualArrays(int a[],int b[])
{
	for (int i = 0; i < SIZE; i++) 
	{
		if (a[i] != b[i]) {
			return 0;
		}
	}

	return 1;
}
