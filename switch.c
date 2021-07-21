#include<stdio.h>

int main(){
    int month, year, days;
    printf("Enter the month(1-12) and year\n");
    scanf("%d %d", &month, &year);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of Days = 30\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of Days = 31\n");
        break;
    case 2:
    if (year%4==0)
    {
        printf("Number of Days = 29\n");
    }
    else{
        printf("Number of Days = 28\n");
    }
    default:
        break;
    }
    return 0;
}
