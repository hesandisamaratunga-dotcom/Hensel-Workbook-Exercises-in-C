/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Lab02
 * Date :26/12/2025
 *****************************************************************************************************/

/*
There are different variants of the following story. Without making a verdict on which story might
be historically true, we will use this one: Sissa ibn Dahir, an Indian minister in the third or fourth
century, had invented the game of chess for his ruler. As reward he asked for one grain of wheat
being placed on the first field of the chessboard and the number of grains to be doubled with each
field (i. e., 1 grain on the first field, 2 on the second field, 4 on the third field, ...). The ruler though
this was a modest request– proof him wrong.

Principal program Write a program that prints following table:

▶ Sequential numbering of the chessboard fields (1 to 64)
▶ Number of grains on the specific field (i. e., 1, 2, 4, 8, ...)
▶ Sum of grains on all fields up to the specific field (e. g., 1 + 2 + 4 = 7 for the third field)
*/


#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) 
{
	unsigned long long onField = 1;
	unsigned long long sum     = 0;
	long double  totalGrains   = 0.0L;

	printf("     Field    |     On Field    |      Sum      \n");
	printf("--------------|-----------------|-----------------------------\n");

	for (int field = 1; field <= 64; field++) 
	{
		printf("      %d              %llu              %llu   \n", field,onField,sum);
		sum += onField;             // add current field
		totalGrains += onField;     // add current field
		onField *= 2;               // prepare next field

	}

	long double w_chess =(long double) totalGrains * 55e-6L;
	long double w_world = 735.8e9L;
	long double p = w_chess / w_world;

	printf("\nTotal grains       : %Lf\n", totalGrains);
	printf("Total weight (kg)    : %.3Le\n", w_chess);
	printf("World wheat 2015(kg) : %.3Le\n", w_world);
	printf("p = w_chess / w_world: %.3Le\n", p);   
	//roughly 1 400 times the entire world wheat harvest of 2015, so the king could never realistically pay it.


	getchar();
	return 0;
}