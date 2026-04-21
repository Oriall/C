#include <stdio.h>

int main() {
    char loai;
    int gio;
    double phi;
    
    scanf("%c", &loai);
    scanf("%d", &gio);
    
    if (loai == 'C') {
        if (gio <= 2)
            phi = gio * 0.70;
        else
            phi = 2 * 0.70 + (gio - 2) * 2.50;
    } else if (loai == 'B') {
        if (gio <= 2)
            phi = gio * 1.50;
        else
            phi = 2 * 1.50 + (gio - 2) * 2.00;
    } else {
        if (gio <= 2)
            phi = gio * 2.50;
        else
            phi = 2 * 2.50 + (gio - 2) * 3.25;
    }
    
    printf("%.2f\n", phi);
    
    return 0;
}