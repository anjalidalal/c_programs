#include<stdio.h>

int main()
{
    int a, b, rem, dem, num, hcf, lcm;
    printf("Enter a and b :\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        num = a;
        dem = b;
    }
    else    
    {
        num = b;
        dem = a;
    }
    rem = num%dem;
    while (rem!=0)
    {
        dem = rem;
        rem = num%dem;
    }
    hcf = dem;
    lcm = (a*b)/hcf;
    printf("HCF is %d\n", hcf);
    printf("LCM is %d\n", lcm);
    return 0;
}
