/*第六章编程练习 第十二题*/
#include<stdio.h>

int main(void)
{
	int num, i, j, odevity;
	double result_plus, result_sub, symbol = 1;
	printf("Enter a num more than zero:");
	scanf("%d", &num);
	while(0 < num)
	{
		result_plus = 0;
		result_sub = 0;
		for(i = 1; i <= num; i++)
		{
			result_plus += 1.0 / i;
			odevity = (1 + i) % 2;
			for(j = 0; j < odevity; j++)
				symbol *= -1;
			result_sub += symbol / i;
			symbol = 1;
		}
		printf("The result for plus is %f.\n", result_plus);
		printf("The result for sub is %f.\n", result_sub);
		num = -1;
		scanf("%d", &num);
	}
	return 0;
}