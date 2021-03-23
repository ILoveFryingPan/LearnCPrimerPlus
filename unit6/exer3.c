/*第六章编程练习 第三题*/
#include<stdio.h>
int main(void)
{
	int i, j;
	char letter = 'F';
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%5c", letter - j);
		}
		printf("\n");
	}
	return 0;
}