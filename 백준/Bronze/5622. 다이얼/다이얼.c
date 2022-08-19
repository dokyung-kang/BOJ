#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	char a[15];
	int i, j, total = 0;
	scanf("%s", a);
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (a[i] == j + 65)
			{
				total += arr[j];
				break;
			}
		}
	}
	printf("%d", total);
}