//
// Created by android0 on 2021/6/7.
//

/* 第十二章 编程练习 第一题 */
#include<stdio.h>

void critic(int *units);

int main(void)
{
    int units;
    printf("How many pounds to a firkin of butter?\n");
    fflush(stdout);
    scanf("%d", &units);
    while(units != 56)
        critic(&units);
    printf("You must have looked it up!\n");
    return 0;
}

void critic(int *units)
{
    printf("No luck, my friend. Try again.\n");
    fflush(stdout);
    scanf("%d", units);
}