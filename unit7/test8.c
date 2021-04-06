/*第七章复习题 第八题*/
/*retire.c*/
#include<stdio.h>
int main(void)
{
	int age = 20;
	while(age++ <= 76)
	{
		if((age % 20) == 0)	/*age 是否能被20整除？*/
			printf("You are %d.Here is a raise.\n", age);
		if(age == 65)
			printf("you are %d.Here is your gold watch.\n", age);
	}
	return 0;
}
