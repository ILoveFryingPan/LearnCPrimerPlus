#include<stdio.h>
#include<string.h>

int main(void)
{
	char first_name[30];
	char last_name[30];
	int num_first;
	int num_last;
	
	printf("enter your first name: ");
	scanf("%s", first_name);
	printf("enter your last name: ");
	scanf("%s", last_name);
	num_first = strlen(first_name);
	num_last = strlen(last_name);
	printf("%s %s\n%*d %*d\n", first_name, last_name, num_first, num_first, num_last, num_last);
	printf("%s %s\n%*d %*d\n", first_name, last_name, -num_first, num_first, -num_last, num_last);
	return 0;
}