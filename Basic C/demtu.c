#include <stdio.h>
#include <string.h>

void correct(char s[]) {
    int size = strlen(s);
    int first = 0, last = size - 1;

    while (first <= last && s[first] == ' ') first++;
    while (last >= first && s[last] == ' ') last--;

    char s1[85];
    int dem = 0;

    for (int i = first; i <= last; i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            continue;
        }
        s1[dem++] = s[i];
    }
    s1[dem] = '\0';
    strcpy(s, s1);
}

int main() {
    char s[85], s1[85];
    int tong = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    correct(s);

    char *ptr = s;
    while ((ptr = strstr(ptr, s1)) != NULL) {
        tong++;
        ptr += strlen(s1);
    }

    printf("%s %d\n",s1, tong);

    return 0;
}
