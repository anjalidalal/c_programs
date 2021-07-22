#include<stdio.h>
int main()
{
    int i = 1, number;
    printf("Enter the number whose multiples do you want:\n");
    scanf("%d", &number);
    while( i <= 10)
    {
        
        printf("%d\n", i*number);
        i++;
    }
    
    return 0;
}
