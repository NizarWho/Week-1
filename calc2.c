#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //promt user for x
    int x = get_int("x: ");

    // promt user for y
    int y = get_int("y: ");

    //divide x by y
    float z = (float) x / (float) y;

    //perform addition
    printf ("%.50f\n", z);
}