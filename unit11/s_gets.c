//
// Created by android0 on 2021/5/20.
//
#include<stdio.h>
#include<string.h>

char * s_gets(char *st, int n)
{
    char *ret_val, *find;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if(ret_val) //即，ret_val != NULL
    {
//        while (st[i] != '\n' && st[i] != '\0')
//            i++;
        find = strchr(st, '\n');
//        if (st[i] == '\n')
        if(find)
            *find = '\0';
//            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}