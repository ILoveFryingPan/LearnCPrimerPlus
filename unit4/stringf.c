/*stringf.c--字符串格式*/
#include<stdio.h>
#define BLURB "Authentic initation!"
int main()
{
	char name[40];
	float cash;
	
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	
	printf("enter your name:");
	scanf("%s", name);
	printf("enter cash for %s family:", name);
	scanf("%f", &cash);
	printf("The %s family just may be $%.2f dollars richer!", name, cash);
	
	return 0;
}