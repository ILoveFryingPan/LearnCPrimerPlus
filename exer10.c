//
// Created by android0 on 2021/5/15.
//
/*第十章 编程练习 第十题*/

#include<stdio.h>
#define SIZE 5

void add_data(int array_one[], int array_two[], int *array_three, int size);
void show_data(int array[], int size, char *msg);

int main(void)
{
    int array_one[SIZE] = {2, 4, 6, 4, 2};
    int array_two[] = {9, 2, -4, -8, 2};
    int array_three[SIZE];

    show_data(array_one, SIZE, "第一组数组中的数据是：");
    show_data(array_two, SIZE, "第二组数组中的数据是：");

    add_data(array_one, array_two, array_three, SIZE);

    show_data(array_three, SIZE, "相加后的第三组数组的数据是：");

    return 0;
}

void show_data(int array[], int size, char *msg)
{
    int i;
    printf("%s\n", msg);
    for(i = 0; i < size; i++)
        printf("%d \t", array[i]);
    putchar('\n');
}

void add_data(int array_one[], int array_two[], int *array_three, int size)
{
    int i;
    for(i = 0; i < size; i++){
        array_three[i] = array_one[i] + array_two[i];
    }
}