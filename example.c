#include<stdio.h>

int main()
{
    int i = 2, num;
    printf("Enter a number\n");
    scanf("%d", &num);
    while( i <= num - 1)
    {
        if (num % i == 0)
        {
            printf("Not a Prime no. \n");
        }
        i++;
    }
    printf("Prime Number\n");
    
    return 0;
}
