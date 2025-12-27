/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :03/12/2025
 *****************************************************************************************************/

#include<stdio.h>
int main()
{ 
	int n = 0;
	int N = 8;

	for (n; n < N; n++) 
	{
		int weight = 1 << n;  //2^n
		//important:  ^ means Bitwise XOR operation in C;
		// So here we have to use the left shift in powers of 2. 
		printf("Binary weight of 2^%d is : %d \n", n, weight);
	}
	getchar();
	return 0;
}