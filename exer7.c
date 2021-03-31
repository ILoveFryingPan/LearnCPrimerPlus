/*第七章 编程练习 第七题*/
#include<stdio.h>
#define BASE 1000
#define TIME_RATE 1.5
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define TAX_BASE1 300
#define TAX_BASE2 450
#define TAX1 TAX_BASE1 * RATE1
#define TAX2 TAX1 + (TAX_BASE2 - TAX_BASE1) * RATE2
int main(void)
{
	double hours, real_hours;
	double total_pay, tax, real_pay;
	printf("Enter a time for job(hours):");
	scanf("%lf", &real_hours);
	if(40 < real_hours)
		hours = 40 + (real_hours - 40) * TIME_RATE;
	else 
		hours = real_hours;


	total_pay = BASE * hours;
	if(total_pay <= TAX_BASE1)
	{
		tax = total_pay * RATE1;
	} else if(total_pay <= TAX_BASE2) {
		tax = TAX1 + (total_pay - TAX_BASE1) * RATE2;
	} else {
		tax = TAX2 + (total_pay - TAX_BASE2) * RATE3;
	}
	real_pay = total_pay - tax;
	printf("%f hours get total_pay %f, but need to pay tax %f,real_pay is %f\n", real_hours, total_pay, tax, real_pay);
	return 0;
}
