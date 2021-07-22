#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, root1, root2, disc;
    printf("Enter the values of a b and c :\n");
    scanf("%d %d %d", &a, &b, &c);
    disc = b*b-4*a*c;
    printf("The disc is: %d\n", disc);
    if (disc < 0)
    {
        printf("\nRoots are not real!\n");
    }
    else
    {
        root1 = (-b + sqrt(disc))/(2*a);
        root2 = (-b - sqrt(disc))/(2*a);
        printf("\n Root1 = %d\n Root2 = %d", root1, root2);
    }
    return 0;
}
