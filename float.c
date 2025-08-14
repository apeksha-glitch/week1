//Floats

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for x
    float x = get_float("x:");

    //prompt user for y
    float y  = get_float("y:");

    //divide x by y 
    printf("%.50f\n", x / y);
}