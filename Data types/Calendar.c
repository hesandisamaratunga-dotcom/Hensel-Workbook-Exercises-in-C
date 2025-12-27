


#include<stdio.h>

int main(void)
{

	int SecondsperDay, SecondsperWeek;
	int FullWeeks, remainingweeks;
		
SecondsperDay = 24 * 60 * 60;
SecondsperWeek = 7 * SecondsperDay;
FullWeeks = 365 / 7;
remainingweeks = 365 % 7;

	printf("A day has %d seconds, while a week has %d seconds.\n ", SecondsperDay, SecondsperWeek);
	printf(" A year has %d full weeks with %d day(s) remaining.", FullWeeks, remainingweeks);
	
	getchar();
	return 0;
}
