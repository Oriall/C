#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    char id[20];
    float grade;
    char rank[5];
} Student;

void classify(Student *s)
{
    if (s->grade >= 9.0 && s->grade <= 10.0)
        strcpy(s->rank, "A");
    else if (s->grade >= 8.0)
        strcpy(s->rank, "B");
    else if (s->grade >= 6.5)
        strcpy(s->rank, "C");
    else
        strcpy(s->rank, "D");
}

int main()
{
    int n;
    scanf("%d\n", &n);
    

    Student a[100];

    for (int i = 0; i < n-1; i++)
    {
        fgets(a[i].id, sizeof(a[i].id), stdin);
        a[i].id[strcspn(a[i].id, "\r\n")] = '\0';

        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\r\n")] = '\0';

        scanf("%f\n", &a[i].grade);

        classify(&a[i]);
    }
  
    int i=n-1;
        fgets(a[i].id, sizeof(a[i].id), stdin);
        a[i].id[strcspn(a[i].id, "\r\n")] = '\0';

        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\r\n")] = '\0';

        scanf("%f", &a[i].grade);

        classify(&a[i]);
    

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].grade < a[j].grade)
            {
                Student tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %s %.1f %s\n", a[i].name, a[i].id, a[i].grade, a[i].rank);
    }

    return 0;
}
