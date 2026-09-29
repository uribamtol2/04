#include <stdio.h>

int main(void)
{
    int sec;

    printf("input the second : ");
    scanf("%i", &sec);

    printf("The time for %d second is %i : %i : %i\n", sec, sec / 3600, (sec % 3600) / 60, sec % 60);

    return 0;
}