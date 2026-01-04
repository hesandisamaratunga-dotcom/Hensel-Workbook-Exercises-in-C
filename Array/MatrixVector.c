/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 04/01/2026
 *****************************************************************************************************/

 /******************************************************************************************************
  Write a program that calculates a matrix-vector multiplication and prints the result to the console.
Feel free to choose the coefficients of A and x. 
 Sample output:
         | 1 2 0|   |2|   |8|
y = Ax = | 0 2 1| ∗ |3| = |7|
         | 3 0 1|   |1|   |7|
 *******************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#define SIZE 3
#include <stdio.h>

int main(void) {

    int array_A[SIZE][SIZE] = { {1,2,0},{0,2,1},{3,0,1} };
    int array_x[SIZE] = { 2,3,1 };
    int array_Y[SIZE] = { 0,0,0 };

    //matrix-vector multiplication calculation
    for (int row = 0; row < SIZE; row++) {
        for (int column = 0; column < SIZE; column++) {
            array_Y[row] += array_A[row][column] * array_x[column];
        }
    }
    printf("         |%d %d %d|   |%d|   |%d|\n", array_A[0][0], array_A[0][1], array_A[0][2],array_x[0], array_Y[0]);
    printf("y = Ax = |%d %d %d| * |%d| = |%d|\n", array_A[1][0], array_A[1][1], array_A[1][2], array_x[1], array_Y[1]);
    printf("         |%d %d %d|   |%d|   |%d|", array_A[2][0], array_A[2][1], array_A[2][2], array_x[2], array_Y[2]);

    getchar();
    return 0;
}