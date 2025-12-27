/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :16/12/2025
 *****************************************************************************************************/

/*Exercise 28. (Project: BisectionMethod)

The mathematical function   
                    f(x) = x^2 −2x−1
has a zero-crossing x0 with f(x0) = 0 on the positive x-axis. Approximate x0 using the bisection method:*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	double fx1, fx2, xl = 0, xr = 4;

	fx1 = xl * xl - 2 * xl - 1;
	fx2 = xr * xr- 2 * xr - 1;

	double xm = 0.5 * (xl + xr);
	double fxm = xm * xm - 2 * xm - 1, tolerance = 1e-6;

	printf("function is : f(x) = x^2-2x-1\n");
	printf("fx for x=0  : fx1 = %.2f\n", fx1);
	printf("fx for x=4  : fx1 = %.2f\n", fx2);

	/* Calculate f(x) for xl = 0 and xr = 4. As the signs of f(xl) and f(xr) differ, there exists a
       zero-crossing in the interval x ∈ [xl,xr].*/

	if (fx1 * fx2 < 0)
	{
		printf("\nThere exists a zero-crossing in the interval x € [%.2f - %.2f]\n", xl, xr);
	}
	else printf("\nThere is no zero-crossing in the interval x € [%.2f - %.2f]\n", xl, xr);


	/* 2. Calculate f(xm) in the center of xl and xr, i. e., for xm = 1*/

	printf("\nfxm for xm=(1 / 2) * (xl + xr)  : fxm = %.2f\n", fxm);
	printf("xm = %.2f\n", xm);


	/* Choose either [xm,xr] or [xl,xm] as next interval of half length, so that the function values 
	f(x) at the interval borders still have different signs.*/

	while (xr - xl > tolerance) {           // e.g. tolerance = 1e-6
		xm = 0.5 * (xl + xr);              // recompute midpoint

		if (fx1 * fxm < 0) {                // root in [xl, xm]
			xr = xm;
			fx2 = fxm;                    // update f at right border
			printf("%.2f,%.2f     ", xm, fxm);
		}
		else {                            // root in [xm, xr]
			xl = xm;
			fx1 = fxm;                      // update f at left border
			printf("%.2f,%.2f     ", xm, fxm);

		}
	}
	// when loop finishes, [xl, xr] is small and still brackets the root



	getchar();
	return 0;
}