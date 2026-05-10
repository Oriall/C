#include <stdio.h>
int main() {
    int n, rev = 0, rem, orig;
    scanf("%d", &n);
    orig = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (orig == rev) printf("Palindrome\n");
    else printf("Not\n");
    return 0;
}