//
// Created by android0 on 2021/5/21.
//

/*compare.c -- 该程序可以正常运行*/
#include<stdio.h>
#include<string.h>  //strcmp（）函数的原型在该头文件中
#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char *st, int n);

int main(void)
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    fflush(stdout);
    s_gets(try, SIZE);
    while(strcmp(try, ANSWER))
    {
        puts("No, that's wrong. Try again.");
        fflush(stdout);
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return 0;
}