#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long long int fib(int n, long long int* M) {
    if (n == 1 || n == 2)
        return 1;

    if (M[n - 1] == 0)
        M[n - 1] = fib(n - 1, M);

    if (M[n - 2] == 0)
        M[n - 2] = fib(n - 2, M);

    return M[n - 1] + M[n - 2];
}

int main(void)
{
    int n;
    int i;
    long long int* M;

    scanf("%d", &n);

    M = (long long int*)malloc(sizeof(long long int) * (n + 1));

    for (i = 1; i <= n; i++)
        M[i] = 0;

    printf("%lld", fib(n, M));

    free(M);
}
