
/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :27/12/2025
 *****************************************************************************************************/
 
/*****************************************************************************************************
Exercise 33. (Project: CheckAlpha)
Write a function isLetter() that returns a logical value true, if and only if the character passed as
argument is a letter.
*****************************************************************************************************/

//directives
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//prototypes
int isLetter(char letter);

//main function
int main(void) 
{
	char letter;

	printf("Enter a letter : ");
	scanf("%c", &letter);
	getchar();

	//function call
	isLetter(letter);

	int result = isLetter(letter);
	printf("isLetter returned : % d\n", result);

	getchar();
	return 0;
}

//other functions
int isLetter(char letter)
{
	if ((letter >='a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return 1; //true 
	}
	else
	{
		return 0;  //false
	}

}
