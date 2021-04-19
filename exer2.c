/*第九章 编程练习 第二题*/
#include<stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch = 'a';
	int i = 4, j = 8;
	chline(ch, i, j);
	return 0;
}

void chline(char ch, int i, int j)
{
	int h, v;
	for(h = 1; h <= j; h++){
		for(v = 1; v <= i; v++)
			putchar(ch);
		putchar('\n');
	}
}
