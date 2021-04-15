/*第八章 编程练习第三题*/
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int counter_upper, counter_lower;
	char ch;
	counter_upper = counter_lower = 0;
	while((ch = getchar()) != EOF)
	{
		if(isupper(ch)){
			counter_upper++;
		}
		if(islower(ch)){
			counter_lower++;
		}
	}
	printf("大写字母的数量是：%d.小写字母的数量是：%d.\n", counter_upper, counter_lower);
	return 0;
}
