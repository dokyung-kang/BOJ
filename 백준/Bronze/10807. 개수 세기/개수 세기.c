#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int arr[101];
	int v;
	int i;
	int cnt = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	scanf("%d", &v);

	for (i = 0; i < n; i++)
		if (arr[i] == v)
			cnt++;

	printf("%d", cnt);
}