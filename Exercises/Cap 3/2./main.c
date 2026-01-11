/*
 *Objective: Exercise 2 from King's book, chapter 3.
 *Author [Anthoni]
 *Date 1/11/2026
 */

#include <stdio.h>

int main(void)
{
    float Num;
    Num = 5.123;
    // (A)
    printf("%-8.1e   \n", Num);
    // (B)
    printf("%10.6e   \n", Num);
    // (C)
    printf("%-8.3f   \n", Num);
    // (D)
    printf("%6.0f   \n", Num);

    return 0;
}