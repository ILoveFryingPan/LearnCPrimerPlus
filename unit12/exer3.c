//
// Created by android0 on 2021/6/11.
//

#include<stdio.h>
#include "pe12-3a.h"

int main(void)
{
    int last_mode = 0, distance;
    float fuel_consumption;
    int mode;
    printf("Enter 0 for metric mode, 1 for US mode: ");
    fflush(stdout);
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode(mode, &last_mode);
        get_info(last_mode, &distance, &fuel_consumption);
        show_info(last_mode, distance, fuel_consumption);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        fflush(stdout);
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}