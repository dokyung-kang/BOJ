#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[31] = { 0 };
	int n;
	int i;

	for (i = 0; i < 28; i++) {
		scanf("%d", &n);
		arr[n] = 1;
	}

	for (i = 1; i <= 30; i++)
		if (arr[i] == 0)
			printf("%d\n", i);
}