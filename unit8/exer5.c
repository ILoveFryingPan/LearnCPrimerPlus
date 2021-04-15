/*第八章 编程练习 第五题*/
#include<stdio.h>
int main(void)
{
	int guess = 50, max = 100, min = 0;
	int response;
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan u.pper is upper to integer and with an l.ower is lower to integer.\n");
	printf("Uh..is your number %d?\n", guess);
	while((response = getchar()) != 'y')	/*获取响应， 与y做对比*/
	{
		if(response == 'u'){
			max = guess;
			guess = (min + max) / 2;
			printf("Well, then, is it %d?\n", guess);
		} else if(response = 'l') {
			min = guess;
			guess = (min + max) / 2;
			printf("Well, then, is it %d?\n", guess);
		} else {
			printf("Sorry, I understand only y or u or l.\n");
		}
		while(getchar() != '\n');
	}
	printf("I knew I could do it!\n");
	return 0;
}
