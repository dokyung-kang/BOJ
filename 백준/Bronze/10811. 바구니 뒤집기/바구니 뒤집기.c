#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, m;
	int i, j;
	int idx1, idx2;
	int cnt = 0;
	int arr[101] = { 0 };
	int tmp[101] = { 0 };

	scanf("%d %d", &n, &m);

	for (i = 0; i <= n; i++)
		arr[i] = i;

	for (i = 0; i < m; i++) {
		scanf("%d %d", &idx1, &idx2);
		for (j = idx1; j <= idx2; j++) 
			tmp[j] = arr[j];
		cnt = 0;
		for (j = idx1; j <= idx2; j++)
			arr[j] = tmp[idx2 - cnt++];
	}
	for (i = 1; i <= n; i++)
		printf("%d ", arr[i]);
}