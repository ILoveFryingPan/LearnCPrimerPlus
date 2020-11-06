/*第三章的编程练习 4*/

#include<stdio.h>
int main(void)
{
	float input;
	printf("Enter a floating-point value:");
	scanf("%f", &input);
	/*读取用户的输入，存储至input变量中*/
	printf("fixed-point notation:%f \n", input);
	/*打印普通形式， 转换说明符使用%f */
	printf("exponential notation:%e \n", input);
	/*打印指数形式， 转换说明符使用%e */
	printf("p notation: %a \n", input);
	/*打印P记数法形式，转换说明符使用%a */
	return 0;
}
