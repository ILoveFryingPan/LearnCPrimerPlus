/*第七章编程练习 第十一题*/
#include<stdio.h>

void menu(void);
int input_data(double *p, char *names[]);
void menu_set(void);
void compute(double *strong, double *unitPrice, double *price, char *names[], int size);
void getData(double *p, char *name, int i, int state);

int main(void)
{
	double unitPrice[3] = {2.05, 1.15, 1.09};
	double strong[3] = {0, 0, 0};
	char *names[] = {"洋蓟", "甜菜", "胡萝卜"};
	double price[] = {0, 0, 0};
	int status;
	status = input_data(strong, names);
	if(0 == status){
		return 0;
	}
	compute(strong, unitPrice, price, names, 3);
	return 0;
}

void menu(void)
{
	printf("******************************\n");
	printf("a.洋蓟\t\t");
	printf("b.甜菜.\n");
	printf("c.胡萝卜.\n");
	printf("s.设置\t\t");
	printf("q.退出订购.\n");
	printf("e.nter.计算并输出对应的数据\n");
	printf("******************************\n");
}

void menu_set(void)
{
	printf("******************************\n");
	printf("p.lus.输入的蔬菜的重量是累加的.\n");
	printf("r.eplace.由输入的新的重量代替旧的重量.\n");
	printf("q.退出设置页面.\n");
	printf("******************************\n");
}

int input_data(double *p, char *names[])
{
	int state = 0;	//state表示重量的类别，默认是0，累加
	char type;
	menu();
	while((type = getchar()) != 'q' && type != 'e')
	{
		while(getchar() != '\n');
		switch(type)
		{
			case 'a':
				getData(p, names[0], 0, state);
				continue;
			case 'b':
				getData(p, names[1], 1, state);
				continue;
			case 'c':
				getData(p, names[2], 2, state);
				continue;
			case 's':	//设置
				menu_set();
				while((type = getchar()) != 'q')
				{
					while(getchar() != '\n');
					switch(type)
					{
						case 'p':	//累加
							state = 0;
							continue;
						case 'r':	//替换
							state = 1;
							continue;
						default:
							menu_set();
							continue;
					}
				}
				continue;
			default:	//循环提示
				menu();
				continue;
		}
	}
	if(type == 'q')
		return 0;
	else
		return 1;
}
void getData(double *p, char *name, int i, int state)
{
	double zl;
	printf("请输入%s的重量（磅）：", name);
	while(scanf("%lf", &zl) == 0)
	{
		while(getchar() != '\n');
	}
	while(getchar() != '\n');
	if(0 == state)
	{
		p[i] += zl;
	} else {
		p[i] = zl;
	}
}

void compute(double *strong, double *unitPrice, double *price, char *names[], int size)
{
	int i;
	double dd_price = 0, total_price, zk = 0, yunfei, total_weight = 0; 
	for(i = 0; i < size; i++)
	{
		if(0 < strong[i])
			printf("%s的单价是%f,购买了%f磅,需花费%f.\n", names[i], unitPrice[i], strong[i], price[i] = strong[i] * unitPrice[i]);
		dd_price += price[i];
		total_weight += strong[i];
	}
	if(100.0 <= dd_price) {
		zk = dd_price * 0.05;
	}
	if(5 >= total_weight) {
		yunfei = 6.5;
	} else if(20 >= total_weight) {
		yunfei = 14;
	} else {
		yunfei = 14;
		yunfei += (total_weight - 20) * 0.5;
	}
	total_price = dd_price - zk + yunfei;
	printf("订单的总费用：%f, 折扣：%f, 运费和包装費：%f, 所有费用的总额：%f.\n", dd_price, zk, yunfei, total_price);
}
