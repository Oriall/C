#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("a=1\n");
        case 2:
            printf("a=2\n");
            break;
        case 3:
            printf("a=3\n");
            break;
    }

    return 0;
}