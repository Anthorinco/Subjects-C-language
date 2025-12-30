/*
*Objective: Calculate the dimensional weight of a box,
according with the value inputted by the user.
*Author [Anthoni]
*Date: 12/30/2025
*/
#include <stdio.h>

int main(void)

{ // Variables Declarations
    int length, width, height, volume, weight;

    // Data
    printf("Enter height of box: ");
    scanf("%d", &height);
    
    printf("Enter length of box: ");
    scanf("%d", &length);
    
    printf("Enter width of box: ");
    scanf("%d", &width);
    // Expressions
    volume = height * length * width;
    weight = (volume + 165) / 166;
    // Results
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
