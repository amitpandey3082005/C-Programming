#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d", &marks);

    switch (marks)
    {
    case 90 ... 100:
        printf("A Grade");
        break;
    case 75 ... 89:
        printf("B Grade");
        break;
    case 50 ... 74:
        printf("C Grade");
        break;
    case 0 ... 49:
        printf("Fail");
        break;
    default:
        printf("Invalid Marks ");
    }
    return 0;
}