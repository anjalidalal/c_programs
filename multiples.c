#include<stdio.h>
int main()
{
    int i, number;
    printf("Enter the number whose multiples do you want:\n");
    scanf("%d", &number);
     //printf("Multiples of %d is:\n", number);
    for ( i = 1; i <=10; i++)
    {
       
        printf("%d\n", i*number);
    }
    
    return 0;
}
