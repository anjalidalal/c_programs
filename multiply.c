#include<stdio.h>
int main()
{
    int i, j, k, m, n, a[10][10], b[10][10], mulp[10][10];
    printf("Enter the no of rows :\n");
    scanf("%d", &m);
    printf("Enter the no of columns :\n");
    scanf("%d", &n);
    printf("Enter the elements of a matrix:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d %d", a[i][j]);
        }
    }
    printf("Enter the elements of b matrix:\n");
    for( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d %d", b[i][j]);
        }
    }
    printf("Multiplication of two matrix:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            mulp[i][j] = 1;
            for ( k = 0; k < n; k++)
            {
                mulp[i][j] *= a[i][k] * b[k][j];
            }
            
        }
        
    }
    printf("RESULT :\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", mulp[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
