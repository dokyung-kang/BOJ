#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t, k, n, i, j;
	int arr[15][15] = { 0, };

	for (i = 1; i < 15; i++)
		arr[0][i] = i;

	for (i = 1; i < 15; i++)
	{
		for (j = 1; j < 15; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}
	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
}