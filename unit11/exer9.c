//
// Created by android0 on 2021/5/28.
//

/* 第十一章 编程练习 第九题 */
#include<stdio.h>
#include<string.h>
#define SIZE 40

char * s_gets(char *st, int n);
void s_reverse(char *st);

int main(void)
{
    char data[SIZE];
    char *data_result;

    puts("请输入一句话");
    fflush(stdout);
    data_result = s_gets(data, SIZE);
    while(data_result && data[0] != '\0')
    {
        puts("输入的字符串是：");
        puts(data);
        s_reverse(data);
        puts("反转后的字符串是：");
        puts(data);

        puts("请输入一句话，以空行结束");
        fflush(stdout);
        data_result = s_gets(data, SIZE);
    }
    puts("Done!");
    return 0;
}

void s_reverse(char *data)
{
    int leng = strlen(data);
    char temp;
    int i;
    if(leng == 1)
        return;
    for(i = 0; i < leng / 2; i++)
    {
        temp = data[i];
        data[i] = data[leng - i - 1];
        data[leng - i - 1] = temp;
    }
}