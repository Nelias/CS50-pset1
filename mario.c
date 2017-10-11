#include <stdio.h>
#include <cs50.h>

int main(void)
{ 
    int x, i, j, k;
    do
    {
    printf("How tall do you want your pyramid to be?\n");
    x = GetInt();
    } while (x < 0 || x > 23);
    
    for (i = 0; i < x; i++)
    {
        for (j = 1; j <= x-i-1; j++ )
        {
        printf(" ");
        }
        for (k = 0; k <= i+1; k++)
        {
        printf("#");
        }
        printf("\n");
    }
}
