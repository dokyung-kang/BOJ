#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int max = -1;
	int c = 1, count;
	int i, n;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &n);
		if (max < n)
		{
			max = n;
			count = c;
		}
		c++;
	}
	printf("%d\n", max);
	printf("%d", count);
}