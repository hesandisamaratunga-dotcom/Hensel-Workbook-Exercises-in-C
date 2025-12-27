/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :10/12/2025
 *****************************************************************************************************/

/* Exercise24. (Project:RangeShort)
Write a program that determines the numeric range (i.e., the smallest and largest representable
number )of the datatype short. (Hint: Run through the numbers in a while-loop. What will
happen when the range is exceeded?) */

#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void)
{

	short value = 0;

	while ((short) (value + 1) > value)
	
		value++;
	
	printf("The range is %hd to %hd \n", value + 1, value);

	getchar();
	return 0;
}