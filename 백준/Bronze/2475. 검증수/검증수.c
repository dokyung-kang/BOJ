#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int total = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		total += (n * n);
	}

	printf("%d", total % 10);
}