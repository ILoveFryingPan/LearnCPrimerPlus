/*第八章编程练习 第八题*/
#include<stdio.h>
#include<ctype.h>

int get_first(void);
float get_float(void);
int adjust(int ch);	//验证输入的字符是否符合菜单
void menu(void);
void compute(int ch);

int main(void)
{
	int ch;
	menu();
	while((ch = get_first()) != 'q') {
		if(1 != adjust(ch)) {
			printf("Please enter a.s.m.d.q.\n");
			continue;
		}
		compute(ch);
		menu();
	}
	return 0;
}

int get_first(void)
{
	int ch;
	while(isspace(ch = getchar()));
	while(getchar() != '\n');
	return ch;
}

float get_float(void)
{
	float num;
	char ch;
	while(0 == scanf("%f", &num)) {
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}
	while(getchar() != '\n');
	return num;
}

int adjust(int ch)
{
	switch(ch) {
		case 'a':
		case 's':
		case 'm':
		case 'd':
		case 'q':
			return 1;
		default:
			return 0;
	}
}

void menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\ts. subtract\n");
	printf("m. multiply\td. divide\n");
	printf("q. quit\n");
}

void compute(int ch)
{
	float one, two;
	printf("Enter first number: ");
	one = get_float();
	printf("Enter second number: ");
	two = get_float();
	while(ch == 'd' && 0 == two) {
		two = get_float();
	}
	switch(ch){
		case 'a':
			printf("%.2f + %.2f = %.2f\n", one, two, one + two);
		break;
		case 's':
			printf("%.2f - %.2f = %.2f\n", one, two, one - two);
		break;
		case 'm':
			printf("%.2f * %.2f = %.2f\n", one, two, one * two);
		break;
		case 'd':
			printf("%.2f / %.2f = %.2f\n", one, two, one / two);
		break;
	}
}
