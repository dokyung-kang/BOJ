#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n;
    int m;
    int x, y;
    int i, j, k;
    int arr[101] = { 0 };

    scanf("%d", &n);
    scanf("%d", &m);

    for (x = 1; x <= m; x++) {
        scanf("%d %d %d", &i, &j, &k);
        for (y = i; y <= j; y++) {
            arr[y] = k;
        }
    }

    for (x = 1; x <= n; x++)
        printf("%d ", arr[x]);
}