/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel Workboook Exercises
 * Date : 02/01/2026
 *****************************************************************************************************/

/******************************************************************************************************
  Exercise46. (Project:Clipping)
Colors of single picture elements (pixel) in images and videos are of ten represented by numbers in
the range [0,255]⊂N0. However,applying image processing can result in values < 0 or > 255.
Write a program that first creates a 2D array that, amongst others, contains values outside the
valid range[0,255].Run through the array and replace negative values by 0 and values which are
too large by 255(clipping). 

Sample output:
Source data:
-4-3-2-1
0 1 2 3
252 253 254 255
256 257 258 259 

Clipped to [0, 255]:
0 0 0 0
0 1 2 3
252 253 254 255
255 255 255 255
********************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#define SIZE 4

#include<stdio.h>

int main(void) {

	int array[SIZE][SIZE] = { { -4, -3, -2, -1 }, { 0, 1 ,2 ,3 }, { 252, 253 ,254 ,255 }, { 256 ,257 ,258 ,259 } };
		
	//source data
	printf("Source data :\n");
	for (int x = 0; x < SIZE; x++)
	{
		for (int y = 0; y < SIZE; y++) 
		{
			printf("%3hd   ", array[x][y]);
		}
		putchar('\n');
	}

	//clipped data
	printf("Clipped Data  :\n");
	for (int x = 0; x < SIZE; x++)
	{
		for (int y = 0; y < SIZE; y++)
		{
			if (array[x][y]< 0) {
				array[x][y] = 0;}
			if (array[x][y] > 255) {
				array[x][y] = 255;}
			printf("%3hd   ", array[x][y]);
		}
		putchar('\n');
	}
	getchar();
	return 0;
}