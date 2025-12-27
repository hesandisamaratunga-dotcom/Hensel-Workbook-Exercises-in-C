/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :19/12/2025
 *****************************************************************************************************/

/*Exercise 31. (Project: ReadInteger)
Write a program that prompts users to enter an integer number, reads the input by repeatedly
calls of scanf(”%c”, &input), and stores the number as int value. 

Sample output:
Please enter an integer number: 1520
Number scanned                : 1520
Twice that number             : 3040       */

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) 
{
	char input ;
	int value = 0;

	 printf("Please enter an integer number   :  ");
	//scanf("%c", &input);
	//getchar();

	while ((scanf("%c", &input) == 1) && (input != '\n')) //until the scanf is successful and finding a new line 
	{
		int digit = input - '0';              //converting character '3' into integer 3
		value = value * 10 + digit;           //Adding each digit together 
	}

	printf("\nNumber scanned                   :  %d", value);
	printf("\nTwice that number                :  %d", (2 * value));

	getchar();
	return 0;
}