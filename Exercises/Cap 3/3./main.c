/*
*Objective: Exercise 3 from King's book cap 3.
*Author [Anthoni]
*Date 01/11/2026
*/

#include <stdio.h>

int main (void)
{
    int x, y, z;
    float a, b;
    // (A)
    printf("Print: \n");
    scanf("%d", &x); // equivalent to " %d"
    // (B)
    printf("Print: \n");
    scanf("%d-%d-%d", &x, &y, &z); // not equivalent to "%d -%d -%d"
    // (C)
    printf ("Print: ");
    scanf("%f", &a); // not equivalent to "%f "
    // (D)
    printf("Print: ");
    scanf("%f,%f", &a, &b); // equivalent to "%f, %f"


    return 0;
}