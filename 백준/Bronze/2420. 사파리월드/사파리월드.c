#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    long long a;
    long long b;

    scanf("%lld %lld", &a, &b);

    if (a > b)
        printf("%lld", a - b);
    else
        printf("%lld", b - a);
}