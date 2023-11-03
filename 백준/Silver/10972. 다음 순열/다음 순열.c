#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>

int t;
void swap(int* a, int* b)
{

	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int n, k = -1;
	int j;
	scanf("%d", &n);
	int a[10010];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = n - 1; i >= 1; i--)
	{
		if (a[i] > a[i - 1])
		{
			k = i;
			break;
		}
	}

	if (k == -1)
	{
		printf("-1");
		return 0;
	}

	for (int i = k; i < n; i++)
	{
		if (a[i] > a[k - 1])
		{
			j = i;
		}
		else
		{
			break;
		}
	}

	swap(&a[k - 1], &a[j]);


	for (int i = k; 2 * (i - k) < n - k; i++)
	{
		swap(&a[i], &a[n + k - 1 - i]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}