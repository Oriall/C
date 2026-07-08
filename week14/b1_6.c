/* ========================================================================== */
/* MÃ NGUỒN BÀI THỰC HÀNH 1a & 1b                                             */
/* ========================================================================== */
#include <stdio.h>

struct myStructure {
    int myNum;
    char myLetter;
};

int main() {
    struct myStructure s1;
    struct myStructure s2;
    struct myStructure s3;

    s1.myNum = 13;
    s1.myLetter = 'B';

    s2.myNum = 20;
    s2.myLetter = 'C';

    s3.myNum = s1.myNum + s2.myNum;
    s3.myLetter = 'A';

    printf("S2 - Number: %d, Letter: %c\n", s2.myNum, s2.myLetter);
    printf("S3 - Number: %d, Letter: %c\n", s3.myNum, s3.myLetter);

    return 0;
}

/* ========================================================================== */
/* MÃ NGUỒN BÀI THỰC HÀNH 2                                                   */
/* ========================================================================== */
#include <stdio.h>
#include <string.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    struct myStructure s1;
    
    strcpy(s1.myString, "Some text");
    
    printf("My string: %s\n", s1.myString);
    return 0;
}

/* ========================================================================== */
/* MÃ NGUỒN BÀI THỰC HÀNH 3                                                   */
/* ========================================================================== */
#include <stdio.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    struct myStructure s1 = {13, 'B', "Some text"};
    
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    return 0;
}

/* ========================================================================== */
/* MÃ NGUỒN BÀI THỰC HÀNH 4 & 5                                               */
/* ========================================================================== */
#include <stdio.h>
#include <string.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    struct myStructure s1 = {13, 'B', "Some text"};
    struct myStructure s2;
    
    s2 = s1;
    
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");
    
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
    return 0;
}

/* ========================================================================== */
/* MÃ NGUỒN BÀI THỰC HÀNH 6                                                   */
/* ========================================================================== */
#include <stdio.h>

struct EmpAddress {
    char *ename;
    char stname[20];
    int pincode;
};

int main() {
    struct EmpAddress employee = {"John Alter", "Court Street", 654134};
    struct EmpAddress *pt = &employee;
    
    printf("%s from %s\n", pt->ename, (*pt).stname);
    return 0;
}