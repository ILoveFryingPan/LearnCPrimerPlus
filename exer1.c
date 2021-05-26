//
// Created by android0 on 2021/5/24.
//

/*第十一章 编程练习 第一题*/
#include<stdio.h>
#include<string.h>

char * s_gets(char *p, int n);

int main(void)
{
    char data[40];
    s_gets(data, 10);
    printf("输入的数据是：%s.\n", data);
    return 0;
}

char * s_gets(char *p, int n)
{
    char *ret_val, *find;
    ret_val = fgets(p, n, stdin);
    if(ret_val) {
        find = strchr(p, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n');
    }
    return ret_val;
}