/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/


#define CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void)
{
	double pi = 0.0f;
	float N = 6;

	for (int n = 0; n <= N; n++) {

		float sign = (n % 2 ==0) ? 1 : -1;   //condition to check whether the n is odd or even

		pi += 4.0f * (sign / (double)((2 * n) + 1));             //equation & increment
		printf("The value of pi at n = %d is %f\n", n, pi);
		
	}

	getchar();
	return 0;
}   







/*
#include <stdio.h>

 Main function 
int main(void)
{
	int n = 0;
	float sign = 1.0;
	float pi = 4. * sign / (2. * n + 1.);

	// n = 0
	printf("n = %d: pi = %.6f\n", n, pi);

	// n = 1
	n = n + 1;
	sign = -1. * sign;
	pi = pi + 4. * sign / (2. * n + 1.);
	printf("n = %d: pi = %.6f\n", n, pi);

	// n = 2
	sign *= -1.;
	pi += 4. * sign / (2. * ++n + 1.);
	printf("n = %d: pi = %.6f\n", n, pi);

	// n = 3
	sign *= -1.;
	pi += 4. * sign / (2. * ++n + 1.);
	printf("n = %d: pi = %.6f\n", n, pi);

	// n = 4
	sign *= -1.;
	pi += 4. * sign / (2. * ++n + 1.);
	printf("n = %d: pi = %.6f\n", n, pi);

	// n = 5
	sign *= -1.;
	pi += 4. * sign / (2. * ++n + 1.);
	printf("n = %d: pi = %.6f\n", n, pi);

	// n = 6
	sign *= -1.;
	pi += 4. * sign / (2. * ++n + 1.);
	printf("n = %d: pi = %.6f\n", n, pi);

	getchar();
	return 0;
}

*/