#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a = 1;
    // writing logic to print the loop
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a++);
        }
        // Adding new line
        printf("\n");
    }

    return 0;
}