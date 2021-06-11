//
// Created by android0 on 2021/6/9.
//

/* 第十二章 编程练习 第二题 */
/* 原题目文件名称pe12-2a.c */
#include<stdio.h>
#include "pe12-2a.h"

int main(void)
{
    int mode;
    printf("Enter 0 for metric mode, 1 for US mode: ");
    fflush(stdout);
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        fflush(stdout);
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}