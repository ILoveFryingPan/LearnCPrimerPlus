/*第七章 编程练习 第十题*/
#include<stdio.h>
#include<ctype.h>

void menu();
int tax_index();
double pay();
int tax_compute();

int main(void)
{
	while(1 == tax_compute());
	return 0;
}

int tax_compute()
{
	const double base1 = 17850;
	const double base2 = 23900;
	const double base3 = 29750;
	const double base4 = 14875;
	const double rate1 = 0.15;
	const double rate2 = 0.28;

	int index;
	double total_pay, tax;
	double base, rate;

	index = tax_index();

	switch(index)
	{
		case 1:
			base = base1;
			break;
		case 2:
			base = base2;
			break;
		case 3:
			base = base3;
			break;
		case 4:
			base = base4;
			break;
		case 5:
			return 0;
	}

	total_pay = pay();

	if(total_pay > base)
	{
		tax  = base * rate1 + rate2 * (total_pay - base);
	} else {
		tax = total_pay * rate1;
	}
	printf("your pay is %f,and need pay tax %f.\n", total_pay, tax);
	return 1;
}

double pay(void)
{
	double income;
	printf("Please enter your income");
	while(0 == scanf("%lf", &income) || 0 >= income)
	{
		while(getchar() != '\n');
		printf("Please enter your income");
	}
	return income;
}

int tax_index(void)
{
	int index;
	char ch;
	menu();
	while(0 == scanf("%d", &index) || !isspace(ch = getchar()) || 0 >= index || 5 < index)
	{
		if(ch != '\n')
			while(getchar() != '\n');
		menu();
	}
	return index;
}

void menu(void)
{
	printf("********************\n");
	printf("请按照下面的菜单输入正确的序号\n");
	printf("1)单身        1785美元按15%计，超出部分按28%计\n");
	printf("2)户主        23900美元按15%计，超出部分按28%计\n");
	printf("3)已婚，共有  29750美元按15%计，超出部分按28%计\n");
	printf("4)已婚，离异  14875美元按15%计，超出部分按28%计\n");
	printf("5)quit.\n");
	printf("********************\n");
}
