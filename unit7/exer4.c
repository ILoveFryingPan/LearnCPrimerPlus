/*第七章 编程练习 第四题*/
#include<stdio.h>
int main(void)
{
	char ch;
	int exclamation = 0, full = 0;	//感叹号和句号
	while((ch = getchar()) != '#')
	{
		if('.' == ch)
			full++;
		if('!' == ch)
			exclamation++;
	}
	printf("exclamation %d time, full %d time, total %d time.\n", exclamation, full, exclamation + full);
	return 0;
}	
