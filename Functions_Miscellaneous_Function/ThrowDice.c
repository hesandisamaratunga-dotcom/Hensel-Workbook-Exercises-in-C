/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :27/12/2025
 *****************************************************************************************************/

 /*****************************************************************************************************
 Exercise 36. (Project: Dice)
Implement a function throwDice() that returns the result of throwing a dice as random number
n ∈ {1,2,3,4,5,6}. Additionally, write a program that rolls 100 times and prints the resulting
numbers in four rows with 25 numbers each, as well as the average number rolled. Following code
snipped demonstrates how to generate random numbers:
*****************************************************************************************************/

//directives
#define _CRT_SECURE_NO_DEPRECATE
#define rounds = 100

#include<stdio.h>
#include <time.h>
#include <stdlib.h>


//prototypes
int throwDice(voidr);

int main(void) 
{
	int randomNumber;
	int number = 0;

	throwDice();
	printf("%d ", randomNumber);



	/*   while (randomNumber < rounds)
	{
		throwDice();
		for (randomNumber; randomNumber <= 1 && randomNumber >= 6;)
		{
			printf("%d ", randomNumber);

		}

	}
	
	*/
	

	getchar();
	return 0;
}

int throwDice(void)
{
	int randomNumber;
	
	srand(time(NULL));         // Initialize random number generator
	randomNumber = rand();     // Get next random number

	return 0;
}
