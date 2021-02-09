/*inputtoscanf.c --用于查看书中介绍的各种输入情况*/

#include<stdio.h>

int main()
{
	int a = 10;
	int b = 5;
	int c = 15;
	
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	/*把控制台输入的第二个数字丢弃，然后继续
	  获取下一个数字，此时scanf只有两个值，因为
	  中间那个被丢掉了，这两个值按照顺序给后面的变量
	  按照顺序变量c是第三个，但是scanf只有两个值，所以
	  变量c没有被赋值
	  */
	scanf("%d %*d %d", &a, &b, &c);
	
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	return 0;
}