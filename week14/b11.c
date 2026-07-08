#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator;
    int denominator;
} fraction;

int gcd(int a, int b) {
    a = abs(a); b = abs(b);
    while (b != 0) {
        int t = b; b = a % b; a = t;
    }
    return a;
}

fraction simplify(fraction f) {
    int common = gcd(f.numerator, f.denominator);
    f.numerator /= common;
    f.denominator /= common;
    if (f.denominator < 0) {
        f.numerator = -f.numerator;
        f.denominator = -f.denominator;
    }
    return f;
}

void fractionInput(fraction *fps) {
    printf("Nhap tu so: "); scanf("%d", &fps->numerator);
    do {
        printf("Nhap mau so (khac 0): "); scanf("%d", &fps->denominator);
    } while(fps->denominator == 0);
    *fps = simplify(*fps);
}

void fractionOutput(fraction fs) {
    if(fs.denominator == 1) printf("%d", fs.numerator);
    else printf("%d/%d", fs.numerator, fs.denominator);
}

float getValue(fraction f) {
    return (float)f.numerator / f.denominator;
}

int main() {
    int n;
    printf("Nhap so luong phan so: "); scanf("%d", &n);
    fraction arr[100];
    
    for(int i = 0; i < n; i++) {
        printf("Phan so %d:\n", i+1);
        fractionInput(&arr[i]);
    }
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(getValue(arr[i]) > getValue(arr[j])) {
                fraction temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
            }
        }
    }
    
    printf("\nMang phan so tang dan: ");
    for(int i = 0; i < n; i++) {
        fractionOutput(arr[i]); printf("   ");
    }
    printf("\n");
    return 0;
}