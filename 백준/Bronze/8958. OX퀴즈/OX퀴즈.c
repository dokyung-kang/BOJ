#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char q[81];
	int i, j, n;
	int no;
	int sum;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		no = 1;
		sum = 0;
		scanf("%s", q);
		for (j = 0; q[j] != '\0'; j++)
		{
			if (q[j] == 'O')
			{
				sum += no;
				no++;
			}
			else
				no = 1;
		}
		printf("%d\n", sum);
	}
}