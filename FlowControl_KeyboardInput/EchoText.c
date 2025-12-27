/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :19/12/2025
 *****************************************************************************************************/

/*Exercise 29. (Project: EchoText)
Write a program where users are asked to enter a complete sentence. When users press the Enter
key, the program shall print this sentence to the console. (Hint: Call scanf() in a loop until there
are no more characters in the keyboard buffer.)*/

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) {
	char sentence = 0;     //just for the initialization, it doesnt have a connection with the condition in the while loop 

	printf("Please enter a complete sentence and press RETURN : "); //user is asked for an input
	
	while (scanf("%c", &sentence) == 1 && sentence != '\n')        //if the scanf function is successfulll, it returns 1, otherwise 0 or another value.....
		{
		printf("%c", sentence);
	    }

	getchar();
	return 0;
}