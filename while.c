#include<stdio.h>
int main()
{
    int i = 1, s = 0;
    while (i<=10)
    {
        s += i;
        ++i;
    }
    printf("Sum of first 10 natural numbers: %d", s);
    return 0;
}
