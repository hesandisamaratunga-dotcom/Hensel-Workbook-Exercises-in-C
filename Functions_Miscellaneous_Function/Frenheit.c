
/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :27/12/2025
 *****************************************************************************************************/

/*****************************************************************************************************
Exercise 32. (Project: Fahrenheit)
In Exercise 11 on page 12 you were asked to calculate the corresponding temperature in degree
Centigrade for a given temperature in Fahrenheit. Write functions fahrenheit2Centigrade() and
centigrade2Fahrenheit() to calculate from one unit into the other and apply both functions in a
sample program.  
*******************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

float fahrenheit2Centigrade(float TF);
float centigrade2Fahrenheit(float TC);

int main(void) {

	float TF, TC;

	printf("Enter a temperature in Farenheit  : ");
	scanf("%f", &TF);
	getchar();

	TC = fahrenheit2Centigrade(TF);  //TF>>TC
	TF = centigrade2Fahrenheit(TC);  //TC>>TF

	printf("\nThe temperature in Centigrade is                : %.2f\n", TC);
	printf("\nThe temperature converted back to Farenheits is : %.2f\n", TF);


	getchar();
	return 0;
}

float fahrenheit2Centigrade(float TF)
{
	return (TF - 32) * (5. / 9.);
}

float centigrade2Fahrenheit(float TC)
{
	return 9. / 5. * TC + 32.0;
}
