/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :19/12/2025
 *****************************************************************************************************/

/*Exercise 30. (Project: EnterPIN)
Write a program that prompts users to enter an integer PIN. In case the input is equal to the
correct PIN, which is stored as constant in the source code, the program confirms that the correct
number has been entered.
On incorrect input, users are requested to try again. However, the maximum number of attempts is limited to three.
Sample output with three incorrect attempts:

Please enter pin : 1245
Incorrect . Retry : 2154
Incorrect . Retry : 4512
Whose account are you trying to hack , fellow ?!   */

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) {

	const correct_pin = 1235;
	char PIN;
	int tries = 2;

	for (int i = 0; i <= tries; i++)
	{
		if (i == 0)
		{
			printf("Please enter PIN  : ");
		}
		else printf("Incorrect . Retry :");


		scanf("%d", &PIN);
		getchar();

		if (PIN == correct_pin)
		{
			printf("Correct PIN !!");

		}
	}
	printf("Whose account are you trying to hack , fellow !? \n");

	getchar();
	return 0;
}