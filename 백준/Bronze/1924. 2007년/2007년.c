#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int m, d;
    int i;
    int date = 0;

    int monthDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    scanf("%d %d", &m, &d);

    for (i = 0; i < (m - 1); i++)
        date += monthDay[i];
    
    date += d;
    date %= 7;


    if (date == 0)
        printf("SUN");
    else if (date == 1)
        printf("MON");
    else if (date == 2)
        printf("TUE");    
    else if (date == 3)
        printf("WED");
    else if (date == 4)
        printf("THU");
    else if (date == 5)
        printf("FRI");
    else if (date == 6)
        printf("SAT");
}