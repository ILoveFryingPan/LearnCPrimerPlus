//
// Created by android0 on 2021/6/15.
//

#include<stdio.h>

int a = 1;
int f(int c)
{
    static int a = 2;
    c = c+ 1;
    return ((a++) + c);
}

int main(void)
{
    int i, k = 0;
    for(i = 0; i < 2; i++)
    {
        int a = 3;
        k += f(a);
    }
    k += a;
    printf("%d.\n", k);
    return 0;
}