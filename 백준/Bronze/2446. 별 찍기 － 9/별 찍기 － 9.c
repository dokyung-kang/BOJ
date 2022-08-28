#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, N;
	scanf("%d", &N);

	for (i = N - 1; i > 0; i--)
	{
		for (j = 0; j < N - i - 1; j++)
			printf(" ");
		for (j = 0; j <= 2 * i; j++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - i - 1; j++)
			printf(" ");
		for (j = 0; j <= 2 * i; j++)
			printf("*");
		printf("\n");
	}
}