#include<stdio.h>

int main()
{
    int h, c, t;
    printf("Enter the h(hardness) of steel: \n");
    scanf("%d", &h);
    printf("Enter the c(carbon content) of steel: \n");
    scanf("%d", &c);
    printf("Enter the t(tensile strength) of steel: \n");
    scanf("%d", &t);
    if (h>50 && c<=0.7 && t>5600)
    {
        printf("Grade is: 10\n");
    }
    else if (h>50 && c<=0.7)
    {
        printf("Grade is: 9\n");
    }
    else if (h>50 && t>5600)
    {
        printf("Grade is: 8\n");
        printf("Grade is: 7\n");
    }
    else if (h>=50)
    {
        printf("Grade is: 6\n");
    }
    else
    {
        printf("Grade is: 5\n");
    }
    
    return 0;
}
