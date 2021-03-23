/*第六章编程练习 第四题*/
#include<stdio.h>
int main(void)
{
	int i, j;
	char letter = 'A';
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%c", letter++);
		}
		printf("\n");
	}
	return 0;
}