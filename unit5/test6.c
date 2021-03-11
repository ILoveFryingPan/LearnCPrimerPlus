/*第五章练习题 第六题*/
#include<stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(void)
{
	int num = 10;
	printf(FORMAT, FORMAT);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num--);
	printf("%d\n", num);
	return 0;
}