#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m;
	int i, j;
	int A[101][101];
	int B[101][101];

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &A[i][j]);

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &B[i][j]);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", A[i][j] + B[i][j]);
		printf("\n");
	}
}