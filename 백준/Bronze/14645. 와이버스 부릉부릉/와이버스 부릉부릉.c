#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n;
    int a;
    int b;
    int i;

    scanf("%d %d", &n, &a);

    for (i = 0; i < n; i++)
        scanf("%d %d", &a, &b);

    printf("비와이");
}