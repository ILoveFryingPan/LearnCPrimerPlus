//
// Created by android0 on 2021/6/1.
//

/* 第十一章 编程练习 第十三题 */
#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;
    puts("程序的命令行参数是：");
    for(i = 1; i < argc; i++)
        printf("%s ", argv[i]);
    putchar('\n');
    puts("反序显示参数：");
    for(i = argc - 1; i > 0; i--)
        printf("%s ", argv[i]);
    putchar('\n');
    return 0;
}