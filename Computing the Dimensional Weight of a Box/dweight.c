/*
*Objective: Calculate the dimensional weight of a box,
according to the values hardcoded
*Author [Anthoni]
*Date: 12/29/2025
*/


#include <stdio.h>

int main(void)
{   // Variables
    int length, width, height, volume, weight;
    length = 12;
    width = 10;
    height = 8;
    // Expressions
    volume = length * width * height;
    weight = (volume + 165) / 166;
    // Results
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume: (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}