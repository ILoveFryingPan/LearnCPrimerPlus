//
// Created by android0 on 2021/5/21.
//

/* format.c -- 格式化字符串 */
#include<stdio.h>
#define MAX 20

char * s_gets(char *st, int n);

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;
    puts("Enter your first name:");
    fflush(stdout);
    s_gets(first, MAX);
    puts("Enter your last name:");
    fflush(stdout);
    s_gets(last, MAX);
    puts("Enter your prize money:");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(formal);
    return 0;
}