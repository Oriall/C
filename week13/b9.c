#include <stdio.h>
#include <string.h>

int main()
{
    char products[5][2][50] = {
        {"TV127", "31 inch Television"},
        {"CD057", "CD Player"},
        {"TA877", "Answering Machine"},
        {"CS409", "Car Stereo"},
        {"PC655", "Personal Computer"}
    };
    char search_query[20] = "CD";

    for (int i = 0; i < 5; i++)
    {
        if (strstr(products[i][0], search_query) != NULL)
        {
            printf("%s  %s\n", products[i][0], products[i][1]);
        }
    }

    return 0;
}