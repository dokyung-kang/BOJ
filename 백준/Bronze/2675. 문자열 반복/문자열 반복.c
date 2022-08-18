#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[21];
	char p[161];
	int i, j, k, t, cnt, pIndex = 0;

	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &cnt);
		scanf("%s", s);
		for (j = 0; s[j] != '\0'; j++)
		{
			for (k = 0; k < cnt; k++)
			{
				p[pIndex++] = s[j];
			}
		}
		p[pIndex] = '\0';
		printf("%s\n", p);
		pIndex = 0;
	}
}