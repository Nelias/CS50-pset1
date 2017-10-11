#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("For how many minutes did you shower?: ");
    int x;
    do
    {
    x = GetInt();
    }
    while (x < 0);
    printf("Minutes: %i\n", x);
    printf("Bottles: %i\n", x*12);
}
