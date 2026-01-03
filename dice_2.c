/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 02/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
  Exercise 44. (Project: Dice)
In Exercise 36 we have implemented a dice using random numbers. This exercise is meant to
check, whether the generated random numbers are roughly equally distributed.
1. Allocate an array with six elements, where the values are equivalent to the overall number
of times the result 1, 2, 3, 4, 5, and 6, respectively, have been generated so far.
2. “Roll”the dice, for instance, 100, 10,000, or 1,000,000 times. Store the absolute occurrences
of the numbers 1 to 6 in the array.
3. Print the relative frequencies of the numbers 1 to 6 to the console.
 *******************************************************************************************************/

 //directives
#define _CRT_SECURE_NO_DEPRECATE
#define rounds  1000

#include<stdio.h>
#include <time.h>
#include <stdlib.h>


//prototypes
int throwDice(void);
double frequency_count(int counts[6],int total_rolls);


int main(void)
{
	srand(time(NULL));
	int counts[6] = { 0 };

	//part 1
	for (int i = 0; i < rounds; i++) 
	{
		int rolls = throwDice();
		printf("%d ", rolls);
		counts[rolls - 1]++;
		if ((i+1)%25 == 0)
		{
			printf("\n");
		}
	}

	printf("\nCounts  :  ");
	printf("%d ,%d ,%d ,%d ,%d ,%d ", counts[0], counts[1], counts[2], counts[3], counts[4], counts[5]);

	printf("\n\nNumber dice throws  :  %d\n", rounds);

	printf("relative frequencies  : \n");
	//double frequency_1 = frequency_count(counts,rounds);
	frequency_count(counts, rounds);

	getchar();
	return 0;
}

int throwDice(void)
{

	int randomNumber = rand() % 6 + 1;    // Get next random number

	return randomNumber;
}

double frequency_count(int counts[6],int total_rolls)
{
	counts[6];
	int i = 0;
	double frequency = 0;
	total_rolls = rounds ;
	for (counts[i]; i < 6; i++) {
		frequency = ((double)counts[i] / total_rolls) * 100;
		printf("%d frequency : %.2f %%\n", i+1, frequency);
	}

	return frequency;
}
