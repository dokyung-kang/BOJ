#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int total = 0;
	int n;

	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		total += n;
	}

	printf("%d", total);
}