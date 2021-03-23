/*第六章编程练习 第六题*/
#include<stdio.h>
int main(void)
{
	int min, max, i;
	printf("Enter two num (min and max):");
	scanf("%d%d", &min, &max);
	for(i = min; i <= max;i++)
	{
		printf("%5d %5d %5d\n", i, i * i, i * i * i);
	}
	return 0;
}