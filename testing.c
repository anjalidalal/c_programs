#include<stdio.h>

int main()
{
    int i, j, k, l;
    printf("1\n");
    for ( i = 2; i <= 5; i++)
    {
        for ( j = 2; j <= i; j++)
        {
            for ( k = 3; k <= j; k++)
            {
                for ( l = 4; l <= k; l++)
                {
                    printf("%d %d %d %d\n", i, j, k, l);
                }
            }
        }
        
    }
    
    return 0;
}
