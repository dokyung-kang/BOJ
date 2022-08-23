#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int h, m, s, d;

    scanf("%d %d %d", &h, &m, &s);
    scanf("%d",&d);

    h += (m + (s + d) / 60) / 60;
    h %= 24;

    m += (s + d) / 60;
    m %= 60;

    s += d;
    s %= 60;

    printf("%d %d %d", h, m, s);
}
