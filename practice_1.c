#include<stdio.h>

int main()
{
    int i, marks[25], n, sum = 0;
    float average;
    printf("Enter the number of students :\n");
    scanf("%d", &n);
    printf("Enter the marks of students :\n");
    
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum/n;
    printf("The class average is = %f", average);
    
    return 0;
}
