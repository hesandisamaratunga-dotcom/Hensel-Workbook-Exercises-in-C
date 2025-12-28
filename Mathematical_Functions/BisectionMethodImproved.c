/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :28/12/2025
 *****************************************************************************************************/
/************************************************************************************************************
Exercise 38. (Project: Bisection)
In Exercise 28 on page 15 we have approximated a zero-crossing of the mathematical function
f(x) = x^2 − 2x − 1 by the bisection method. Improve the structure of your source code by
introducing following functions:

▶ f() expects a value x as argument and returns the corresponding function value f(x).

▶ bisection() expects the left and right borders xl and xr of the starting interval as well as the
interval lengths ∆x, at which to stop the method. The function applies the bisection method
based on the mathematical values f(x) returned by calls of the C function f(). When the
interval length is smaller than ∆x the function returns the center of the remaining interval
************************************************************************************************************+*/


#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

double f(double x);
double bisection(double xl, double xr, double delta_x);
int main(void)
{
	double fx1, fx2, xl = 0, xr = 4;

	//function call
	fx1 = f(xl);       //fx1 = xl * xl - 2 * xl - 1;
	fx2 = f(xr);       //fx2 = xr * xr - 2 * xr - 1;


	double xm = 0.5 * (xl + xr);
	double fxm = f(xm), tolerance = 1e-6;

	printf("function is : f(x) = x^2-2x-1\n");
	printf("fx for x=0  : fx1 = %.2f\n", f(xl));
	printf("fx for x=4  : fx1 = %.2f\n", f(xr));

	double root = bisection(0, 4, tolerance);
	printf("Root : %.10f\n", root);

	getchar();
	return 0;
}

//part (a)
double f(double x)
{
	return (x * x) - (2 * x) - 1;
}

//part (b)
double bisection(double xl, double xr, double delta_x)
{
	while (xr - xl > delta_x)
	{           
		double xm = 0.5 * (xl + xr);              // recompute midpoint

		if (f(xl) * f(xm) < 0)
		{                // root in [xl, xm]
			xr = xm;
		}
		else
		{                 // root in [xm, xr]
			xl = xm;
		}
	}
	return 0.5 * (xl + xr);
}
