#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	
	int i, N, total = 0;

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		total += i;
	printf("%d", total);
}