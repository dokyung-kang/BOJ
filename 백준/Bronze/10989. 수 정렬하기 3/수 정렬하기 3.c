#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A[10001] = { 0 };
	int n;
	int idx;
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &idx);
		A[idx]++;
	}

	for (i = 0; i < 10001; i++) {
		if (A[i] != 0) {
			for (j = 0; j < A[i]; j++)
				printf("%d\n", i);
		}
	}
}