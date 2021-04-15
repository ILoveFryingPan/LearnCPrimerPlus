/*第八章 编程练习 第六题*/
#include<stdio.h>
#include<ctype.h>

int get_first(void);

int main(void)
{
	int ch;
	while((ch = get_first()) != EOF){
		putchar(ch);
		putchar('\n');
	}
	return 0;
}

int get_first(void)
{
	int ch;
	while(isspace(ch = getchar()));
	while(getchar() != '\n');
	return ch;
}
