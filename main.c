#include <stdio.h>

int main(void)
{
    int op1, op2;
    int res;

    //scanf
    printf("Input two integers:");
    scanf("%i %i", &op1, &op2);

    //printf
    printf("%i + %i = %i\n", op1, op2, op1 + op2);

    //Operations
    res = op1 - op2;
    //printf
    printf("%i - %i = %i\n", op1, op2, res);

    //Operations
    res = op1 * op2;
    //printf
    printf("%i * %i = %i\n", op1, op2, res);

    //Operations
    res = op1 / op2;
    //printf
    printf("%i / %i = %i\n", op1, op2, res);

    //Operations
    res = op1 % op2;
    //printf
    printf("%i %% %i = %i\n", op1, op2, res);

    return 0;
}