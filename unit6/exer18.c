/*第六章编程练习 第十八题*/
#include<stdio.h>

int main(void)
{
	int friend_num = 5, i = 1;;
	while(150 >= friend_num)
	{
		friend_num = 2 * (friend_num - i);
		printf("week:%d\tfriend:%d.\n",i, friend_num);
		i++;
	}
	return 0;
}