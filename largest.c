#include<stdio.h>
int main()
{
    int n, i, big, a[20];
    printf("Enter the total numbers :\n");
    scanf("%d", &n);
    printf("Enter the %d numbers:\n", n);
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    big = a[i];
    for ( i = 2; i <= n; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
        }
     printf("Largest number is : %d", big);
  
    return 0;
}
