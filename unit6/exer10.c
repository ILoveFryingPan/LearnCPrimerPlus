/*第六章编程练习 第十题*/
#include<stdio.h>

int main(void)
{
	int min, max, i, result;
	printf("Enter lower and upper integer limits:");
	scanf("%d%d", &min, &max);
	while(max > min)
	{
		result = 0;
		for(i = min; i <= max; i++)
		{
			result += i * i;
		}
		printf("The sums of the squares from %d to %d is %d\n", min * min, max * max, result);
		printf("Enter next set of limits:");
		scanf("%d%d", &min, &max);
	}
	printf("Done\n");
	return 0;
}