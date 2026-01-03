
/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Hensel WorkBook Exercises
 * Date :28/12/2025
 ******************************************************************************************************
 ******************************************************************************************************
 C2 = 2·C1 = 2·2·C0 = 4·16.3516Hz = 65.4064Hz

 Write a function tone2FrequencyHz() that expects a tone ('a' to 'g' or 'A' to 'G') and the octave
 (0, 1, 2, ...) as arguments and returns the frequency in Hertz. Use tone2FrequencyHz() to print a
 table for the first to sixth octave to the console. Sample output:
 *****************************************************************************************************/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <ctype.h>  // toupper()
#include <math.h>   // pow()

double tone2FrequencyHz(char tone, int octave);

int main(void){ 

char tone[] = { 'C','D','E','F','G','A','B' };
double note[7] = { 16.3516 ,18.3540 ,20.6017 ,21.8268 ,24.4997 ,27.5000 ,30.8677 };

//main frequency table
printf("    Note      |  C0        D0        E0        F0        G0        A0        B0    \n");
printf("--------------|---------------------------------------------------------------------\n");
printf("frequency(Hz) |  %.4f   %.4f   %.4f   %.4f   %.4f   %.4f   %.4f  \n\n",
	note[0], note[1], note[2], note[3], note[4], note[5], note[6]);

printf("Frequencies of musical tones :\n\n");
printf("           0              1             2             3             4              5             6       \n");
printf("----|----------------------------------------------------------------------------------------------------\n");



for (int tones = 0; tones <= 6; tones++) 
{ 
	printf("%c   |", tone[tones]);      //rows

	for (int octave = 0; octave < 7; octave++)
	{
		double frequency = tone2FrequencyHz(tone[tones], octave);
		printf("        %4.2f ", frequency);  // horizontal, octave as column
	}
	printf("\n");
}
	getchar();
	return 0;
}



double tone2FrequencyHz(char tone, int octave)
{
	double note[7] = { 16.3516 ,18.3540 ,20.6017 ,21.8268 ,24.4997 ,27.5000 ,30.8677 };

	// Make uppercase first
	tone = toupper(tone);

	int index;

	switch (tone) 
	{
	case 'C':index = 0;
		break;
	case 'D':index = 1;
		break;
	case 'E':index = 2;
		break;
	case 'F':index = 3;
		break;
	case 'G':index = 4;
		break;
	case 'A':index = 5;
		break;
	case 'B':index = 6;
		break;
	default:return 0.0;
	}

	double base = note[index];

	return base * pow(2.0, octave);
}
