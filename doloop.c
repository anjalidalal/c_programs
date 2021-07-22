#include<stdio.h>
int main()
{
    int i, s = 0;
    
    for ( i = 1; i <= 10; i++)
    {
        s = s + i;
    }
     printf("The sum of first 10 natural numbers is: %d", s);
    return 0;
}
