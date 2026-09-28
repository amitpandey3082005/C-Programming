#include <stdio.h>
int main()
{
    int daynumber;

    printf("Enter Day Number (1-7) : ");
    scanf("%d", &daynumber);

    // writing switch cases for these dynumber

    switch (daynumber)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturady");
        break;
    default:
        printf("Invalid Day Number");
    }
    return 0;
}