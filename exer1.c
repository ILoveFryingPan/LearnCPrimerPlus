/*第七章 编程练习 第一题*/
#include<stdio.h>
int main(void)
{
	int space = 0, line = 0, other = 0;
	char ch;
	printf("Enter a char (# to quit):");
	while((ch = getchar()) != '#')
	{
		if(ch == ' ')
			space++;
		else if(ch == '\n')
			line++;
		else
			other++;
	}
	printf("space %d.line %d.other %d.\n", space, line, other);
	return 0;
}
