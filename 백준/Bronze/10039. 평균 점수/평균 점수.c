#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int n;
	int total = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		if (n < 40)
			n = 40;
		total += n;
	}

	printf("%d", total / 5);
}