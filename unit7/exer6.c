/*第七章 编程练习 第六题*/
#include<stdio.h>
int main(void)
{
	char ch, lastch = '\0';
	int count = 0;
	while((ch = getchar()) != '#')
	{
		if(lastch == 'e' && ch == 'i')
			count++;
		lastch = ch;
	}
	printf("the time is %d.\n", count);
	return 0;
}	
