/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :05/12/2025
 *****************************************************************************************************/

#define CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void) 
{
	int class_a, class_b, class_c, class_d, teams, sum, PupilsPerTeam, PupilsRemaining;
	class_a = class_b = 24;
	class_c = 25;
	class_d = 26;
	teams = 8;

	sum = class_a + class_b + class_c + class_d;

	PupilsPerTeam = sum / teams;
	PupilsRemaining = sum % teams;

	printf("    The total number of pupils is        : %d\n", sum);
	printf("(a) The number of pupils in each team is : %d\n", PupilsPerTeam);
	printf("(b) The number of pupils remaining is    : %d\n", PupilsRemaining);

	getchar();
	return 0;
}