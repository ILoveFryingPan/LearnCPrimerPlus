/*第六章练习题 第五题*/
#include<stdio.h>
int main(void)
{
	int i, j, list[10];
	for(i = 1; i <= 10; i++)
	{
		list[i - 1] = 2 * i + 3;
		for(j = 1; j <= i;j++)
			printf("%5d", list[j - 1]);
		printf("\n");
	}
	return 0;
}
