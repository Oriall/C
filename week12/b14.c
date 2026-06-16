#include <stdio.h>

void f(char **p) {
    char *t;
    t = (p += sizeof(int) - 1)[-1];
    printf("%s\n", t);
    printf("%p\n", (void*)t);
}

int main() {
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    
    for (int i = 0; i < 6; i++) {
        printf("%p\n", (void*)&argv[i]);
    }

    f(argv);
    return 0;
}