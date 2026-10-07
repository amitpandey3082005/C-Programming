#include <stdio.h>
int main()
{
    int exp, base, res = 1;
    printf("Enter Base and Exponent : ");
    scanf("%d%d", &base, &exp);

    // writing logic for calcuating power

    for (int i = 1; i <= exp; i++)
    {
        res *= base;
    }

    printf("%d^%d : %d ", base, exp, res);

    return 0;
}