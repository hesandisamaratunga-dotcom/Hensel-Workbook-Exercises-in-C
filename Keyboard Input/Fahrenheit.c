/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) {

	float TF , TC ;

	printf("Enter a temperature in Farenheit  : ");
	scanf("%f", &TF);
	getchar();

	TC = (TF - 32) * (5. / 9.);

	printf("\nThe temperature in Centigrade is : %.2f\n", TC);

	getchar();
	return 0;
}