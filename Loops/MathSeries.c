/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :10/12/2025
 *****************************************************************************************************/

/*
Exercise 27. (Project: MathSeries)
Approximate the value of the mathematical series expansion
      ∞
p = zigma * 2^−k 
    k=0
After how many summands does p change by less than ∆p = 10^−10 per term?
*/

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
    double delta_p = 1e-10;
    double p = 0.0;
    double term = 1.0;  // 2^0


    for (int k = 0; term >= delta_p; k++)
    {
        p += term;
        printf("k = %d   |   term = %.12e   |   p = %.12e\n", k, term, p);
        term /= 2.0;    // next term: 2^(-(k+1))
    }


    getchar();
    return 0;
}