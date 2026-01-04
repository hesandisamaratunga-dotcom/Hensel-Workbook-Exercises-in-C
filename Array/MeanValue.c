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
#define SIZE 7

#include <stdio.h>

//prototype
double mean(double data[]);

int main(void) {
	double data[SIZE] = { 1.0,2.0,3.0,4.0,5.0,6.5,7.0 };

	printf("Data : %.1f  %.1f  %.1f  %.1f  %.1f  %.1f  %.1f  \n", data[0], data[1], data[2], data[3], data[4], data[5], data[6]);

	//statistical mean
	double average = mean(data);
	printf("Statistical mean = %.1f ", average);

	getchar();
	return 0;
}

double mean(double data[])
{
	double average = 0;
	double sum = 0;
	data[SIZE];

	for (int i = 0; i < SIZE; i++) {
		sum += data[i];
	}
	average = sum / SIZE;

	return average;
}
