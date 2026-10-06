#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int ori = n, rev = 0;
    // reversing the number
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }

    if (rev == ori)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}