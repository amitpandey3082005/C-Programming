#include <stdio.h>
int main()
{
    for (int i = 0; i <= 20; i += 2)
    {
        if (i == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}