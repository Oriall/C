#include <stdio.h>

// Su dung tu khoa extern de dung chung bien i tu main.c
extern int i;

void f() {
    int i = 0; // Bien cuc bo
    i++;       // Chi tang i cuc bo len 1
}

void g() {
    i++;       // Tang bien toan cuc i len 1
}