
#include<stdio.h>

int main(void)
{

	int bank_balance = 1000;
	int rate_year = 2;

	printf("The account balance after 1st year is, %d Euros\n ", (bank_balance + (bank_balance * 2)));
	printf("The account balance after 2nd year is, %d Euros\n ", (bank_balance + (bank_balance * 2))+ ((bank_balance + (bank_balance * 2))*2));
	printf("The account balance after 3rd year is, %d Euros\n ", (bank_balance + (bank_balance * 2)) + ((bank_balance + (bank_balance * 2)) * 2)+ ((bank_balance + (bank_balance * 2)) + ((bank_balance + (bank_balance * 2)) * 2)*2));

	getchar();
	return 0;
}
