#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int arr[2000002] = { 0 };
	int n;
	int i;
	int temp;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &temp);
		arr[temp + 1000000] = 1;
	}

	for (i = 2000001; i >= 0; i--)
		if (arr[i] == 1)
			printf("%d\n", i - 1000000);
}
