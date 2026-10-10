// swapping value usig pass by refrence
#include <stdio.h>
// Declaring afunction in C to swap values
void Swap(int *p1, int *p2);
// Defining the function to swap the variable
void Swap(int *p1, int *p2)
{
    // writing swaping logic to dereference
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return;
}
int main()
{
    int a, b;
    // taking user input
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    // calling the function
    Swap(&a, &b);

    // printig a and b
    printf("a=%d,b=%d", a, b);
    return 0;
}