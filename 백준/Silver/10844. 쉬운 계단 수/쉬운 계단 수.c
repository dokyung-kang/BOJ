#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[101][10] = { 0 };
	int i, j;
	int total = 0;
	int n;

	scanf("%d", &n);

	for (j = 1; j <= 9; j++)
		arr[1][j] = 1;

	for (i = 2; i <= n; i++) {
		for (j = 0; j <= 9; j++) {
			if (j == 0)
				arr[i][j] = arr[i - 1][1];
			else if (j == 9)
				arr[i][j] = arr[i - 1][8];
			else
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
	}

	for (j = 0; j <= 9; j++)
		total = (total + arr[n][j]) % 1000000000;

	printf("%d", total);
}