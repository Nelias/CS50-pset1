#include <stdio.h>
#include <cs50.h>
#include <math.h>

void greed(float y);
float x;

int main(void)
{ 
    printf("O hai! How much change is owed?\n");
    x = GetFloat();
    if (x < 0) 
    {
    do
    {
        printf("How much change is owed?\n");
        x = GetFloat();
    }
    while (x < 0);
    }
    
    greed(x);
}

void greed(float y) 
{
    int z;
    z = roundf(y*100);
    
    int owed = 0;
    
    while (z >= 25)
    {
        owed++;
        z = z - 25;
    }
    while (z >= 10)
    {
        owed++;
        z = z - 10;
    }
    while (z >= 5)
    {
        owed++;
        z = z - 5;
    }
    while (z >= 1)
    {
        owed++;
        z = z - 1;
    }
    
    printf("%i\n", owed);
}
