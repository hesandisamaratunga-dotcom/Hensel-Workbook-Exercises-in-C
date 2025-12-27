/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :10/12/2025
 *****************************************************************************************************/

//Calculate the sum of the numbers from 1 to 100 using a a)for-loop, b)while-loop, and c)do/while loop

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	//(a) using a for loop 
	int i = 0, sum = 0;
	for ( i ; i <= 100; i++) {
		sum = sum + i;
}
	printf("The sum of numbers from 1-100 is      :     %d\n", sum);

	//(b)using a while loop 
	int j = 0, sum1 = 0;
	while (j <= 100)
	{
		sum1 = sum1 + j;
		j++;
}
	printf("The sum1 of numbers from 1-100 is     :     %d\n", sum1);

	//(c)do while loop 
	int k = 0, sum2 = 0;

	do 
	{
		sum2 = sum2 + k;    //		sum2 += k++;   can also be used 

		k++;
	}
	while (k <= 100);
	

	printf("The sum2 of numbers from 1-100 is     :     %d\n", sum2);

	getchar();
	return 0;
}