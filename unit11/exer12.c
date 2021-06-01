//
// Created by android0 on 2021/6/1.
//

/* 第十一章 编程练习 第十二题 */
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int words, big, letter, num, symbol;
    words = big = letter= num = symbol = 0;
    int ch, last;
    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch)) {
            if(islower(ch))
                letter++;
            else
                big++;
        } else if(isdigit(ch))
            num++;
        else if(ispunct(ch))
            symbol++;
        else if(isblank(ch)) {
            if(isalpha(last))
                words++;
        }
        last = ch;
    }
    printf("单词数是：%d, 大写字母数是：%d, 小写字母数是：%d, 标点符号数是：%d, 数字字符数是：%d",
           words, big, letter, symbol, num);
    return 0;
}