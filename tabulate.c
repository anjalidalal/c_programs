#include<stdio.h>

int main()
{
    int x, y, z;
    printf("\n x  y  z");
    for ( x = 1; x <= 3; x++)
    {
        for ( y = 2; y <= 3; y++)
        {
            z = x*x*x + y*y*y;
            printf("\n %d  %d  %d", x, y, z);
        }
        
    }
    
    return 0;
}
