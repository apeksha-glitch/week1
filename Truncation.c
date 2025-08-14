//Division with ints, demonstrating truncation
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for x
    int x = get _int("x:");

    //propmt user for y
    int y = get_int("y:");

    //Divide x by y
    printf("%i\n" , x / y);
}