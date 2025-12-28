
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

 //prototypes 
int leibnizSeries(int n);

int main(void)
{
	for (int N = 0; N <= 1000; N =N+50)
	{
		double pi = leibnizSeries(N);
		printf("N = %d , pi ~ %.10f", N, pi);
	}

	getchar();
	return 0;
}

//other functions
int leibnizSeries(int N)
{
	double pi = 0.0f;

	for (int n = 0; n <= N; n++) 
	{
		float sign = (n % 2 == 0) ? 1 : -1;
		pi += 4.0f * (sign / (double)((2 * n) + 1));
		printf("The value of pi at n = %d is %f\n", n, pi);

	}

	return pi;
}
