/*第七章 编程练习 第三题*/
#include<stdio.h>
int main(void)
{
	int even_num, odd_num, even_total, odd_total;
	even_num = odd_num = even_total = odd_total = 0;
	int number;
	while(scanf("%d", &number) == 1 && number != 0)
	{
		if(0 == number % 2){
			even_num++;
			even_total += number;
		}else{
			odd_num++;
			odd_total += number;
		}
	}
	printf("The num of even_num is %d, and average is %f.\n", even_num, (float) even_total / (float) even_num);
	printf("The num of odd_num is %d, and average is %f.\n", odd_num, (float) odd_total / (float) odd_num);
	return 0;
}
