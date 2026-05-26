#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    int *p = &x, *q = &y, *r = &z;

    printf("%d %d %d | %d %d %d\n", x, y, z, *p, *q, *r);

    {
        int temp = z;
        z = y;
        y = x;
        x = temp;
        printf("%d %d %d | %d %d %d\n", x, y, z, *p, *q, *r);
    }

    x = 10; y = 20; z = 30;
    p = &x; q = &y; r = &z;
    {
        int *temp = r;
        r = q;
        q = p;
        p = temp;
        printf("%d %d %d | %d %d %d\n", x, y, z, *p, *q, *r);
    }

    return 0;
}