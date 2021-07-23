#include<stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n<0)
    {
        printf("The number must be +ve\n");
        goto end;
    }
    if (n==0 || n==1)
    {
        printf("Factorial = %d", fact);
    }
    else
    {
        for ( i = 2; i <= n; i++)
        {
            fact = fact * i ;
            }
        printf("Factorial = %d", fact);
    }
     end:
    return 0;
}
