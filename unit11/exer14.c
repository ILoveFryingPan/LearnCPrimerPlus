//
// Created by android0 on 2021/6/1.
//

/* 第十一章 编程练习 第十四题 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
    double ds;
    int mi;
    printf("%s ^ %s的值是：\n", argv[1], argv[2]);
    ds = strtof(argv[1], &ds);
    mi = strtol(argv[2], &mi, 10);
    printf("%.2f.\n", pow(ds, mi));
    return 0;
}