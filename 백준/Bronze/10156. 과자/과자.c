#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int K;
	int N;
	int M;
	int money;

	scanf("%d %d %d", &K, &N, &M);

	money = K * N - M;

	if (money > 0)
		printf("%d", money);
	else
		printf("0");
}