/*第六章 编程练习 第十六题*/
#include<stdio.h>
#define simple_interest 0.1
#define compound_interest 0.05

int main(void)
{
	int principal_daphne = 100, 
	principal_deirdre = 100, year = 0;
	double interest_daphne = 0, interest_deirdre = 0;
	while(principal_daphne + interest_daphne >= principal_deirdre + interest_deirdre) 
	{
		interest_daphne += principal_daphne * simple_interest;
		interest_deirdre += (principal_deirdre + interest_deirdre) * compound_interest;
		year++;
		printf("year=%d, interest_daphne=%f, interest_deirdre=%f\n", year, interest_daphne, interest_deirdre);
	}
	printf("Year is :%d.\n", year);
	return 0;
}