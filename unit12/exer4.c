//
// Created by android0 on 2021/6/11.
//

#include<stdio.h>

int num();

int main(void)
{
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("函数被调用了%d次.\n", num());
    }
    return 0;
}

int num()
{
    static int num = 0;
    num++;
    return num;
}