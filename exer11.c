/*第七章编程练习 第十一题*/
#include<stdio.h>

void menu(void);
int input_data(double *p, char *names[]);
void menu_set(void);
void compute(double *strong, double *unitPrice, char *names[]);
void getData(double *p, char *name, int i, int state);

int main(void)
{
	double unitPrice[3] = {2.05, 1.15, 1.09};
	double strong[3] = {0, 0, 0};
	char names[][] = {"洋蓟", "甜菜", "胡萝卜"};
	int status;
	status = input_data(strong, names);
	if(0 == status){
		return 0;
	}
	compute(strong, unitPrice, names);
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
	while(scanf("lf", &zl) == 0)
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

void compute(double *strong, double *unitPrice, char *names[])
{
	int i, size;
	double total_price, zk, yunfei, bzf;
	size = sizeof(strong);
	for(i = 0; i < size; i++)
	{
		if(0 < strong[i])
			printf("购买了%f磅的%s.\n", strong[i], names[i]);
	}
	
