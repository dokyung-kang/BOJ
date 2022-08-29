#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i, j;
	int n1, n2;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d,%d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
}