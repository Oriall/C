#include <stdio.h>

int main()
{
    int x = 2;
    int y = 6;
    for (int j = x; j <= x * y; j += y / x)
        printf("j = %d\n", j);
    return 0;
}