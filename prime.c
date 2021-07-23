#include<stdio.h>

int main()
{
    int n, i;
    float sum=0, number, mean;
    printf("Enter the total numbers to be averaged :");
    scanf("%d", &n);
    printf("\nEnter the %d numbers\n", n);
    for ( i = 1; i <= n; i++)
    {
        scanf("\n %f", &number);
        sum += number;
    }
    mean = sum/n;
    printf("\nAverage is : %f", mean);
    return 0;
}
