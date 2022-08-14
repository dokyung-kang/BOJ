#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	int i;
	int cnt;
	int arr[10001] = { 0 };
	int sum[10001] = { 0 };

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	sum[0] = 0;
	sum[1] = arr[1];
	sum[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++) {
		int max1 = sum[i - 3] + arr[i - 1] + arr[i];
		int max2 = sum[i - 2] + arr[i];

		if (max1 >= max2)
			sum[i] = max1;
		else
			sum[i] = max2;
		if (sum[i] < sum[i - 1])
			sum[i] = sum[i - 1];
	}

	printf("%d\n", sum[n]);
}