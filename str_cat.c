//
// Created by android0 on 2021/5/20.
//

/*str_cat.c -- 拼接两个字符串*/
#include<stdio.h>
#include<string.h>  /* strcat()函数的原型在该头文件中*/
#define SIZE 80

char * s_gets(char *st, int n);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("What is your favorite flower?");
    fflush(stdout);
    if(s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    } else
        puts("End of file encountered!");
    puts("bye");
    return 0;
}