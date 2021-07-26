#include<stdio.h>

int main()
{

    int i, j, sum = 0, n, a[10][10];
    
    printf("Enter the order of square matrix:\n");
    scanf("%d", &n);
    printf("Enter the elements of matrix:\n");
    /*Read a matrix*/
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    /*Find sum of diagonal elements*/
    for ( i = 0; i <= n; i++)
    {
        sum += a[i][j];
    }
        printf("The trace of the Matrix is : %d", sum);
    
    return 0;
}
