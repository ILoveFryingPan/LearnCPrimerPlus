/*第六章编程练习 第十七题*/
#include<stdio.h>
#define interest 0.08

int main(void)
{
	int year = 0;
	double total = 1000000;
	while(0 < total)
	{
		total = total + total * interest - 100000;
		year++;
	}
	printf("year: %d.\n", year);
	return 0;
}