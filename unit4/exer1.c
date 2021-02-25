#include<stdio.h>
#include<string.h>

int main(void)
{
	char first_name[30];
	char last_name[30];
	int width;
	printf("Enter your first name and last name.\n");
	scanf("%s%s", first_name, last_name);
	printf("The first name is \"%s\", and last name is \"%s\".\n", first_name, last_name);
	printf("******************************\n");
	width = 16 - strlen(first_name) - strlen(last_name);
	printf("%*s%s\",\"%s\"*\n", width, "\"", first_name, last_name);
	return 0;
}