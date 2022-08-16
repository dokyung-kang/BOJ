#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int m, n;
    int i, j;

    scanf("%d %d", &m, &n);

    int arr[1000001];

    for (i = 2; i < 1000001; i++) 
        arr[i] = 1;

    for (i = 2; i <= n; i++) 
        for (j = i * 2; j <= n; j += i) 
            arr[j] = 0;

    for (i = m; i <= n; i++) 
        if (arr[i] == 1) 
            printf("%d\n", i);
}