//
// Created by android0 on 2021/6/10.
//

#include<stdio.h>

void set_mode(int mode, int *last_mode)
{
    if(0 != mode && 1!= mode)
    {
        if(0 == *last_mode)
        {
            puts("Invalid mode specified. Mode 0(metric) used.");
        }
        else if(1 == *last_mode)
        {
            puts("Invalid mode specified. Mode 1(US) used.");
        }
    }
    else
    {
        *last_mode = mode;
    }
}

void get_info(int mode, int *distance, float *fuel_consumption)
{
    if(0 == mode)
    {
        printf("Enter distance traveled in kilometers: ");
        fflush(stdout);
        scanf("%d", distance);
        printf("Enter fuel consumed in liters: ");
        fflush(stdout);
        scanf("%f", fuel_consumption);
    }
    else if(1 == mode)
    {
        printf("Enter distance traveled in miles: ");
        fflush(stdout);
        scanf("%d", distance);
        printf("Enter fuel consumed in gallons: ");
        fflush(stdout);
        scanf("%f", fuel_consumption);
    }
}

void show_info(int mode, int distance, float fuel_consumption)
{
    if(0 == mode)
    {
        printf("Fuel consumption is %.2f liters per 100km.\n", fuel_consumption * 100 / distance);
    }
    else if(1 == mode)
    {
        printf("Fuel consumption is %.1f miles per gallon.\n", distance / fuel_consumption);
    }
}