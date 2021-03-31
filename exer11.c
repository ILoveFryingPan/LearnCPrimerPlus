/*第七章编程练习 第十一题*/
#include<stdio.h>

void menu(void);
int input_data(double *p);
void menu_set(void);
void compute(double *strong, double *unitPrice);

int main(void)
{
	double unitPrice[3] = {2.05, 1.15, 1.09};
	double strong[3] = {0, 0, 0};
	int index, i;
	return 0;
}

void menu(void)
{
	printf("******************************"):
	printf("a.洋蓟\t\t");
	printf("b.甜菜.\n");
	printf("c.胡萝卜.\n");
	printf("s.设置\t\t");
	printf("q.退出订购.\n");
	printf("e.nter.计算并输出对应的数据\n");
	printf("******************************");
}

void menu_set(void)
{
	printf("******************************");
	printf("p.lus.输入的蔬菜的重量是累加的.\n");
	printf("r.eplace.由输入的新的重量代替旧的重量.\n");
	printf("q.退出设置页面.\n");
	printf("******************************");
}

int input_data(double *p)
{
	int size, i, index, state = 0;	//state表示重量的类别，默认是0，累加
	size = sizeof(p);
	char type;
	menu();
	while((type = getchar()) != 'q' && type != 'e')
	{
		while(getchar() != '\n');
		switch(type)
		{
			case 'a':
				break;
