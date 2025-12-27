/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/

#define CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	float current = 0.020, resistor = 150;
	float voltage = resistor * current;
	float power = current * current * resistor;

	printf("(a)The voltage U=RI at %.2f ohm resistor is              : %.2f V\n", resistor, voltage);
	printf("(b)The power P=UI=I^2*R consumed at %.2f ohm resistor is : %.2f V\n", resistor, power);

	getchar();
	return 0;
}