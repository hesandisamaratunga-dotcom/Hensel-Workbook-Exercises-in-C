/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Dtae :06/12/2025
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main(void)
{
	int grade_01, grade_02, grade_03, grade_04, grade_05, grade_06;
	float sum, weightedSum, averageGrade;

	printf("Enter the total number of students having received grade 01: ");
	scanf("%d",&grade_01);
	getchar();

	printf("\nEnter the total number of students having received grade 02: ");
	scanf("%d", &grade_02);
	getchar();

	printf("\nEnter the total number of students having received grade 03: ");
	scanf("%d", &grade_03);
	getchar();

	printf("\nEnter the total number of students having received grade 04: ");
	scanf("%d", &grade_04);
	getchar();

	printf("\nEnter the total number of students having received grade 05: ");
	scanf("%d", &grade_05);
	getchar();

	printf("\nEnter the total number of students having received grade 06: ");
	scanf("%d", &grade_06);
	getchar();

	weightedSum = grade_01 * 1 + grade_02 * 2 + grade_03 * 3 + grade_04 * 4 + grade_05 * 5 + grade_06 * 6;
	sum = grade_01 + grade_02 + grade_03 + grade_04 + grade_05 + grade_06;
	averageGrade = weightedSum / sum;

	printf("\nThe Total number of students is                           : %.2f", sum);
	printf("\nThe Weighted Sum of students in grade is                  : %.2f", weightedSum);
	printf("\nThe Average Grade of students is                          : %.2f", averageGrade);

	getchar();
	return 0;
}