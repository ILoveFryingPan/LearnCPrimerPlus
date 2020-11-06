#include<stdio.h>

int main(void)
{
	int input;
	printf("Enter a value of char int ASCII:");
	scanf("%d", &input);
	/*通过scanf()函数读取用户输入，并存储在Input变量中*/
	printf("You input value is %d, and char is %c\n", input, input);
	/*通过转换说明符%d与%c打印整型数值和字符*/
	return 0;
}
