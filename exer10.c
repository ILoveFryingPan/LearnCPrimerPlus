//
// Created by android0 on 2021/5/28.
//

/* 第十一章 编程练习 第十题 */
#include<stdio.h>
#include<string.h>
#define SIZE 40

char * s_gets(char *st, int n);
void s_delspace(char *data);

int main(void)
{
    char data[SIZE], *data_result;
    char p[SIZE + 4];
    puts("请输入一句话，包括空格，以空行结束");
    fflush(stdout);
    data_result = s_gets(data, SIZE);
    while(data_result && data[0] != '\0')
    {
        sprintf(p, "*%s*", data);
        puts("输入的字符串是：");
        puts(p);
        s_delspace(data);
        puts("删除空格后的字符串是：");
        printf("*%s*\n", data);

        puts("请输入一句话，包括空格，以空行结束");
        fflush(stdout);
        data_result = s_gets(data, SIZE);
    }
}

void s_delspace(char *data)
{
    char *p = data;
    char new_data[strlen(data) + 1];
    int index = 0;
    while(*p)
    {
        if(*p != ' ')
            new_data[index++] = *p;
        p++;
    }
    new_data[index] = '\0';
    strcpy(data, new_data);
}