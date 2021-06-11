//
// Created by android0 on 2021/6/11.
//

/* 第十二章 编程练习 第八题 */
#include<stdio.h>
#include<stdlib.h>

int *make_array(int elem, int val);

void show_array(const int ar[], int n);

int main(void)
{
    int *pa;
    int size;
    int value;
    printf("Enter the number of elements: ");
    fflush(stdout);
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        fflush(stdout);
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
        fflush(stdout);
    }
    printf("Done.\n");
    return 0;
}

int *make_array(int size, int value)
{
    int *p, i;
    p = (int *) malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
        p[i] = value;
    return p;
}

void show_array(const int ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d \t", ar[i]);
        if (7 == i % 8)
            putchar('\n');
    }
    if(0 != i % 8)
        putchar('\n');
}