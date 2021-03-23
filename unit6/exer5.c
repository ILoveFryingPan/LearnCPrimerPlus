/*第六章编程练习 第五题*/
#include<stdio.h>
int main(void)
{
	char letter, i, j;
	printf("Enter a big letter:");
	scanf("%c", &letter);
	for(i = 'A'; i <= letter; i++)
	{
		for(j = 'A'; j <= i; j++)
		{
			printf("%c", j);
		}
		for(j = i - 1; j >= 'A'; j--)
		{
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}