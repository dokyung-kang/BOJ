#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, N;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}