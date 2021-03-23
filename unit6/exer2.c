/*第六章编程练习 第二题*/
#include<stdio.h>
int main(void)
{
	int i, j;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("$");
			
		}
		printf("\n");
	}
	return 0;
}