// helper functions
#include <stdio.h>

void print_row(int width);

int main(void)
{
    const int n = 3 ;
    for (int i = 0; i < n; i++)
    {
        print_row(n - i);
    }
}

void print_row(int width)
{
    for (int i = 0; i < width; i++)
    {
        printf("#");
    }
    printf("\n");
}