/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Lab02
 * Date :26/12/2025
 *****************************************************************************************************/

/* Use for-loops to print all fields of a chessboard in a 2-dimensional order to the console:
▶ Rows are labeled 8 (top) to 1 (bottom)
▶ Columns are labeled a (left) to h (right) */

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) {

	char letter ;
	int number = 8;
	int columns = 0;
	int rows ;
		

		for (rows = 8; rows >= 1; rows--)
		{
			printf("+------+------+------+------+------+------+------+------+\n");
			
		for (letter = 'a'; letter <= 'h'; letter++)
		{
			printf("|  %c%d  ", letter,rows);
		}
		printf("|\n");
		}
		printf("+------+------+------+------+------+------+------+------+\n");

	
	getchar();
	return 0;
}