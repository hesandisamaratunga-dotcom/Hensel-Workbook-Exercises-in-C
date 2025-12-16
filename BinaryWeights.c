/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :10/12/2025
 *****************************************************************************************************/


/*   Exercise 23 : (Project:BinaryWeights)
Implement printing the first eight terms 2 of the binary number system according to Exercise 5
auf Seite 11,however,using a loop    */


#define  _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void) 
{
//METHOD 01------------------------------------------------------------------------------
	 int n = 0;
	for (n; n <= 8; n++)
	{
		int weight = 2 << n;    //using bit operations
		printf("The binary weight of %d is  : %d \n", n, weight);
	
	}
	
	getchar();
	return 0;
}
/* METHOD 02------------------------------------------------------------------------------

int main(void)
{
	int weight = 1;

	int n = 0;
	for (n; n <= 8; n++)
	{

		//int weight = 2 << n; // weight *= 2; also can be used 
		printf("The binary weight of %d is  : %d \n", n, weight);

		weight *= 2;
	}

	getchar();
	return 0;
}

*/