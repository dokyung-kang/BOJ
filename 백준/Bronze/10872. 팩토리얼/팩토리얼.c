#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, total = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		total *= i;
	}
	printf("%d", total);
}