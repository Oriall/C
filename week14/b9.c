#include <stdio.h>
#include <string.h>
typedef struct {
    char monthName[20]; 
    int total_rain;
    int low_temp;
    int high_temp;
} Weather;

int main() {
    char months[12][12] = {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    Weather a[12];
    float totalRain = 0;
    int minTemp, maxTemp;
    int minMonth = 0, maxMonth = 0;

    for (int i = 0; i < 12; i++) {
        scanf("%d %d %d", &a[i].total_rain, &a[i].low_temp, &a[i].high_temp);
        totalRain += a[i].total_rain;

        strcpy(a[i].monthName,months[i]);

        if (i == 0) {
            minTemp = a[i].low_temp;
            maxTemp = a[i].high_temp;
        }
        if (a[i].low_temp < minTemp) {
            minTemp = a[i].low_temp;
            minMonth = i;
        }
        if (a[i].high_temp > maxTemp) {
            maxTemp = a[i].high_temp;
            maxMonth = i;
        }
    }

    float avgRain = totalRain / 12.0;

    printf("%.2f\n", avgRain);
    printf("%d %s\n", minTemp, a[minMonth].monthName);
    printf("%d %s\n", maxTemp, a[maxMonth].monthName);

    return 0;
}
