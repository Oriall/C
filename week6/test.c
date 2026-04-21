#include <stdio.h>
/*Code by Toan*/
#define ll long long
#define nmax 100005

int main() {
    int gio;
    float phi;
    char loai;
    scanf("%c",&loai);
    scanf("%d",&gio);
    if (loai=='C'){
        if (gio<=2){
            phi=gio*0.70;
        }
        else{
            phi=2*0.70+(gio-2)*2.50;
        }
    }
    else if (loai=='B'){
        if (gio<=2){
            phi=gio*2.50;
        }
        else {
            phi=2*2.50+(gio-2)*2.00;
        }
    }
    
    printf ("%.2f",phi);
    return 0;
}