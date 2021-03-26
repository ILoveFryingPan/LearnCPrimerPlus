/*第七章 编程练习 第二题*/
#include<stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	while((ch = getchar()) != '#')
	{
		if(ch == '\n')
			continue;
		count++;
		printf("%c%d", ch, ch);
		if(8 == count){
			putchar('\n');
			count = 0;
		}
	}
	printf("Done!\n");
	return 0;
}

