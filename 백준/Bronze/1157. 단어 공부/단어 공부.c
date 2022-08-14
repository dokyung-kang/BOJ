#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[1000001];
	int a[26];
	int i, j, cnt, flag = 1;
	int max = -1, maxN, maxA;
	scanf("%s", str);

	for (i = 0; i < 27; i++)
	{
		cnt = 0;
		for (j = 0; str[j] != '\0'; j++)
			if (str[j] == (i + 65) || str[j] == (i + 97))
				cnt++;
		a[i] = cnt;
	}
	for (i = 0; i < 27; i++)
		if (max < a[i])
			max = a[i];
	for (i = 0; i < 27; i++)
	{
		if (a[i] == max)
		{
			if (flag)
			{
				maxN = 1;
				maxA = i;
				flag = 0;
			}
			else
				maxN++;
		}
	}
	if (maxN == 1)
		printf("%c", maxA + 65);
	else
		printf("?");
}