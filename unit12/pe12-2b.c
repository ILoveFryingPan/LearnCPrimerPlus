//
// Created by android0 on 2021/6/9.
//

/* 第十二章 变成练习 第二题，与exer2.c 一起编译 */

#include<stdio.h>

static int global_mode = 0;
static int distance;
static float fuel_consumed;

void set_mode(int mode)
{
    if(0 == mode || 1 == mode) {
        global_mode = mode;
    } else if(0 == global_mode){
        puts("Invalid mode specified. Mode 0(metric) used.");
    } else {
        puts("Invalid mode specified. Mode 1(US) used.");
    }
}

void get_info(void)
{
    if (0 == global_mode)
    {
        printf("Enter distance traveled in kilometers: ");
        fflush(stdout);
        scanf("%d", &distance);
        printf("Enter fuel consumed in liters: ");
        fflush(stdout);
        scanf("%f", &fuel_consumed);
    }
    else if(1 == global_mode)
    {
        printf("Enter distance traveled in miles: ");
        fflush(stdout);
        scanf("%d", &distance);
        printf("Enter fuel consumed in gallons: ");
        fflush(stdout);
        scanf("%f", &fuel_consumed);
    }
}

void show_info(void)
{
    if(0 == global_mode)
    {
        printf("Fuel consumption is %.2f liters per 100 km.\n", fuel_consumed * 100 / distance);
    }
    else if(1 == global_mode)
    {
        printf("Fuel consumption is %.1f miles per gallon.\n", distance / fuel_consumed);
    }
}