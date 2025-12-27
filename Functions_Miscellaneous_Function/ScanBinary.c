
/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :27/12/2025
 *****************************************************************************************************/

/*****************************************************************************************************
Exercise 34. (Project: ScanBinary)
Write a function scanBinaryInteger(), that prompts users to enter a binary pattern consisting of
characters ’0’ and ’1’ and returns the corresponding integer value. In case of invalid input the
function shall return the value-1. Sample output:
Enter binary pattern : 10011
Decimal : 19
******************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

//prototypes 
int scanBinaryInteger(void);

int main(void) {

	int decimal = scanBinaryInteger();

	if (decimal == -1) {
		printf("Invalid binary input......");
	}
	else {
		printf("decimal of the binary is : %d\n", decimal);
	}
	getchar();
	return 0;
}

int scanBinaryInteger(void)
{
	int binary ;
	int value = 0;
	int base = 1;   //2^0=1


	printf("Enter binary pattern of 4 digits  : ");

	if(scanf("%d", &binary) != 1) 
	{
		return -1;
	}

	while (binary > 0)
	{
		int last = binary % 10;  //last digit 
		if (last != 1 && last != 0) 
		{
			return -1;
		}
		value = value + last * base;
		base = base * 2;
		binary = binary / 10;
	}

	return value;
}
