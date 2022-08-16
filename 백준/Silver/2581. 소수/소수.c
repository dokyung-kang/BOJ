#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int m;
	int i, j;
	int min;
	int total = 0;

	scanf("%d", &m);
	scanf("%d",&n);
	min = n;

	for (i = m; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (j == i) {
			total += i;
			if (i < min)
				min = i;
		}
	}

	if (total > 0) {
		printf("%d\n", total);
		printf("%d", min);
	}
	else
		printf("-1");

}