/*第九章 编程练习 第七题*/
#include<stdio.h>
#include<ctype.h>

int letter(char ch);

int main(void)
{
	char ch;
	int index;
	while((ch = getchar()) != EOF)
	{
		index = letter(ch);
		if(-1 != index) {
			printf("The %c is a letter ,index is %d.\n", ch, index);
		}
	}
	return 0;
}

int letter(char ch)
{
	if(isalpha(ch)){
		if(isupper(ch)) {
			return ch - 'A' + 1;
		} else {
			return ch - 'a' + 1;
		}
	}else
		return -1;
}
