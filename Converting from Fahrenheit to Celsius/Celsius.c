/*
 *Objective: Converts Fahrenheit temperature to Celsius temperature.
 *Author: [Anthoni]
 *Date: 01/06/2026
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    // Variables Declarations
    float fahrenheit, celsius;
    // Data
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    // Expressions

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    // Result
    printf("Celsius equivalent: %.1f C°\n", celsius);

    return 0;
}