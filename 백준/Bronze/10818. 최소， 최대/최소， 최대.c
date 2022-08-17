#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int max = -1000001;
	int min = 1000001;
	int count, i, n;

	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &n);
		if (max < n)
			max = n;
		if (min > n)
			min = n;
	}
	printf("%d %d", min, max);
}