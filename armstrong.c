#include <stdio.h>
#include <math.h>

// defining function to count digit
int countDigit(int n)
{
    int count = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        count++;
        n /= 10;
    }
    return count;
}
int main()
{

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ori = n, res = 0;
    int digit = countDigit(n);

    // logic to check armstrong or not
    while (n > 0)
    {
        int lastDigit = n % 10;
        res += pow(lastDigit, digit);
        n /= 10;
    }

    if (ori == res)
        printf("Armstrong");
    else
        printf("Not Armstrong ");

    return 0;
}