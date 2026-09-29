#include <stdio.h>

int main(void)
{
    int year;
    int res;

    printf("input the year : ");
    scanf("%i", &year);

    res = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("is the year %i a leap year? : %i\n", year, ((year%4==0)&&(year%100==0)) || (year%400==0) );

    return 0;
}