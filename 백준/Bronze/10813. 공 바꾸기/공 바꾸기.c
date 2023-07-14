#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n;
	int i, j;
	int arr[101] = { 0 };
	int idx1, idx2;
	int	n3 = 0;

	for (i = 1; i < 101; i++)
		arr[i] = i;

	scanf("%d %d", &n, &m);

	for (i = 0; i < m; i++) {
		scanf("%d %d", &idx1, &idx2);
		n3 = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = n3;
	}

	for (i = 1; i <= n; i++)
		printf("%d ", arr[i]);
}