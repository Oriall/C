#include <stdio.h>
#include <string.h>
typedef struct {
    char name[150];
    int age;
    float grade;
} Date;

void Input(Date *sv) {
    fgets(sv->name,sizeof(sv->name),stdin);
    sv->name[strcspn(sv->name,"\r\n")] = '\0';

    scanf("%d", &sv->age);

    scanf("%f", &sv->grade);
    
}

void Printf(Date sv){
    printf("%s %d %.1f\n",sv.name,sv.age,sv.grade);
}

int main() {
    Date sv1,sv2,sv3;
    Input(&sv1);
    while (getchar()!='\n');
    
    Input(&sv3);
    sv2=sv1;
    strcat(sv2.name," Lorem Ipsum");
    sv2.age+=1;
    sv2.grade-=1;
    Printf(sv1);
    Printf(sv2);
    Printf(sv3);
    
}
