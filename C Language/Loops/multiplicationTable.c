#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // printing multiplication table
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }
    return 0;
}