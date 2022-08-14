#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n, int M[1000001])
{
	if (n < 2)
		return n;
	else if (n == 2)
		return 2;
	else if (M[n] == 0)
		M[n] = (fibo(n - 1, M) + fibo(n - 2, M)) % 15746;
	return M[n];
}

int main(void)
{
	int n;
	int M[1000001] = { 0 };

	scanf("%d", &n);
	printf("%d", fibo(n, M));
}

/*
n = 1 : 1  (1개)   - 2
n = 2 : 00 11  (2개)    - 4
n = 3 : 001 100 111 (3개)    - 8
n = 4 : 0000 0011 1100 1001 1111 (5개)    - 16
n = 5 : 00001 00100 00001 00111 10011 11001 11100 11111 (8개)    -32
*/