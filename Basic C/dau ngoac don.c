#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1000005

char str[MAX];
char stack[MAX];
int top = -1;
void push(char c)
{
    stack[++top] = c;
}

bool check(char a, char b)
{
    if (a == '(' && b == ')')
        return true;
    if (a == '[' && b == ']')
        return true;
    if (a == '{' && b == '}')
        return true;
    return false;
}
int main()
{
    char str[MAX];
    scanf("%s", str);
    if (strlen(str) % 2 != 0)
    {
        printf("0\n");
        return 0;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
        }
        else
        {
            if (top == -1)
            {
                printf("0\n");
                return 0;
            }
            char topChar = stack[top--];
            if (!check(topChar, str[i]))
            {
                printf("0\n");
                return 0;
            }
        }
    }
    printf("1\n");
    return 0;
}
