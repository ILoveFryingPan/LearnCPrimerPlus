/*第七章 编程练习 第五题*/
#include<stdio.h>
int main(void)
{
	char ch;
	int clamation = 0, full = 0;
	while((ch = getchar()) != '#')
	{
		switch(ch)
		{
			case '.':
				clamation++;
				break;
			case '!':
				full++;
				break;
		}
	}
	printf("clamation %d time, full %d time, total %d time\n", clamation, full, clamation + full);
	return 0;
}
