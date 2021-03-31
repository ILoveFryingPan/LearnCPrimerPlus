/*第七章 编程练习 第八题*/
#include<stdio.h>
#define BASE1 8.75
#define BASE2 9.33
#define BASE3 10.00
#define BASE4 11.20
#define TIME_RATE 1.5
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define TAX_BASE1 300
#define TAX_BASE2 450
#define TAX1 TAX_BASE1 * RATE1
#define TAX2 TAX1 + (TAX_BASE2 - TAX_BASE1) * RATE2

void menu();

int main(void)
{
	int index;
	double pay_hr;
	double hours, real_hours;
	double total_pay, tax, real_pay;
	menu();
	while(0 == scanf("%d", &index) || index < 1 || index > 5)
	{
		while(getchar() != '\n');
		printf("Please enter the correct serial number.\n");
		menu();
	}

	switch(index)
	{
		case 1:
			pay_hr = BASE1;
			break;
		case 2:
			pay_hr = BASE2;
			break;
		case 3:
			pay_hr = BASE3;
			break;
		case 4:
			pay_hr = BASE4;
			break;
		case 5:
			return 0;
	}

	printf("Enter a time for job(hours):");
	scanf("%lf", &real_hours);
	if(40 < real_hours)
		hours = 40 + (real_hours - 40) * TIME_RATE;
	else 
		hours = real_hours;


	total_pay = pay_hr * hours;
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

void menu()
{
	printf("***********************************************\n");
        printf("Enter the numbner corresponding to the desired pay rate or action:\n");
        printf("1)$%.2f/hr%*s", BASE1, 11, " ");
        printf("2)$%.2f/hr\n", BASE2);
        printf("3)$%.2f/hr%*s", BASE3, 10, " ");
        printf("4)$%.2f/hr\n", BASE4);
        printf("5)quit\n");
        printf("***********************************************\n");
}
