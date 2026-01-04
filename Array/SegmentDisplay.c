/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 04/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
  Exercise 47. (Project: Segment Display)
Many technical devices (e.g., the mobile score board in Figure 2.1 on page 12) display digits by
7 segment displays. The segments are typically denoted by letters at o g and switched on or off
by dedicated control wires(Fig.5.1and5.2).
Write a function that expects a digit as argument and prints the corresponding values of the
control wires a to g to the console. Use the data in Figure5.1 stored in a 2D matrix. Sample
output:
Please enter a digit : 6
Control for 7 segment display:
a | b | c | d | e | f | g
---+---+---+---+---+---+--
1 | 0 | 1 | 1 | 1 | 1 | 1
Display:
 --
|
 --
 *******************************************************************************************************/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main(void) {

	int digit = 0;
	int display[10][7] = { {1,1,1,1,1,1,0},
					     {0,1,1,0,0,0,0},
					     {1,1,0,1,1,0,1},
					     {1,1,1,1,0,0,1},
					     {0,1,1,0,0,1,1},
					     {1,0,1,1,0,1,1},
					     {1,0,1,1,1,1,1},
					     {1,1,1,0,0,0,0},
					     {1,1,1,1,1,1,1},
					     {1,1,1,1,0,1,1} };

	printf("Please enter a digit from 0-9 :  ");
	scanf("%d", &digit);
	getchar();

	//7 segment display control :
	printf("\nControl for 7 segment display :\n\n");

	printf(" a | b | c | d | e | f | g \n");
	printf("---+---+---+---+---+---+--- \n");

	for (int i=0; i < 7; i++) {

		printf(" %d |", display[digit][i]);

	}
	printf("\n---+---+---+---+---+---+--- \n");

	//display
	// Print segements (copied from Professor Hensel's examplery code)
	printf("\nDisplay:\n");
	printf("  %s\n", display[digit][0] == 1 ? "---" : "   ");
	printf(" %c   %c\n", display[digit][5] == 1 ? '|' : ' ', display[digit][1] == 1 ? '|' : ' ');
	printf("  %s\n", display[digit][6] == 1 ? "---" : "   ");
	printf(" %c   %c\n", display[digit][4] == 1 ? '|' : ' ', display[digit][2] == 1 ? '|' : ' ');
	printf("  %s\n", display[digit][3] == 1 ? "---" : "   ");

	getchar();
	return 0;
}
