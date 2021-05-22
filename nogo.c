//
// Created by android0 on 2021/5/21.
//

/*nogo.c -- 该程序是否能正常运行？*/
#include<stdio.h>
#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char *st, int n);

int main(void)
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    fflush(stdout);
    s_gets(try, SIZE);
    /*
     * 比较的是两个指针的值，一个指向常量池，一个是数组
     * 无论输入什么，指针的值都不会相同，程序会一直循环下去
     */
    while(try != ANSWER)
    {
        puts("No, that's wrong. Try again.");
        fflush(stdout);
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return 0;
}