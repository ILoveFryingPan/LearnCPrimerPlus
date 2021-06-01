//
// Created by android0 on 2021/5/18.
//
#include<stdio.h>

int main(void)
{
    const char chs[50] = "abcdefghijklmn";
    char chs2[50] = "abcdefghijklmn";
    const char *p = "abcdefghijklmn";
    printf("chs is : %s\n", chs);
    printf("chs2 is : %s\n", chs2);
    printf("p is : %s\n", p);

    printf("constant address is : %p\n", "abcdefghijklmn");
    printf("pointer is : %p\n", p);
    printf("chs address is : %p, chs2 address is : %p.\n", chs, chs2);

    chs2[7] = '5';
    printf("chs is : %s\n", chs);
    printf("chs2 is : %s\n", chs2);
    return 0;
}
