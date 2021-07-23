#include<stdio.h>

int main()
{
    int marks[25], n, i, sum = 0;
    float average;
    printf("Enter the number of students :");
    scanf("%d", &n);
    printf("Enter the marks of students :");
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum/(float)n;
    printf("The class average = %f", average);

    return 0;
}
