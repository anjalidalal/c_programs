#include<stdio.h>

int main()
{
    int row, plus;
    printf("\n*\n");
    for ( row = 1; row <=5; row++)
    {
        printf("*");
        for (plus = 1; plus <= row; plus++)
        {
            printf("+");
            printf("\n");
        }
        
    }
    return 0;
}
