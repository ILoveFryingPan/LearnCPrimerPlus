/*第三章的编程练习 6*/

#include<stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950
/*使用预编译指令定义水分子质量，一夸克水的质量*/
int main(void)
{
	float quart, quantity;
	printf("Enter how many quart:");
	scanf("%f", &quart);
	/*读取用户输入的夸克数*/
	quantity = quart * MASS_PER_QUART / MASS_PER_MOLE;
	/*计算水分子数量*/
	printf("There are %e molecule.\n", quantity);
	return 0;
}
