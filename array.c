#include<stdio.h>

int main()
{
    int i;
    float a[10];
    
    for ( i = 0; i < 10 ; ++i)
    { 
        scanf("%f", &a[i]);
        printf("%f", a[i]);
    }
    
    return 0;
}
