#include<stdio.h>

int main()
{
    int p, c, m, total, sum;
    printf("Enter the marks of p(phyisics): \n");
    scanf("%d", &p);
    printf("Enter the marks of c(chemistry): \n");
    scanf("%d", &c);
    printf("Enter the marks of m(maths): \n");
    scanf("%d", &m);
    sum = p + c + m;
    printf("Total marks is: %d \n", sum);
    if (m>=50 && c>=45 && m>=40)
    {
        printf("Got admission to B.SC.!\n");
    }
    else if (total>=180)
    {
        printf("Got admission to B.SC.!\n");
    }
    else{
        printf("Don't get admission in B.Sc.!");
    }

    return 0;
}
