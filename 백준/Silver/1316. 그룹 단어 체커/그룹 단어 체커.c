#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[101];
	int N, i, j, k, flag, con, cnt = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		con = 1;
		scanf("%s", str);
		for (j = 0; str[j] != '\0'; j++)
		{
			flag = 1;
			for (k = j + 1; str[k] != '\0'; k++)
			{
				if (flag == 1 && str[j] != str[k])
					flag = 0;
				else if (flag == 0 && str[j] == str[k])
				{
					con = 0;
					break;
				}
			}
		}
		if (con == 1)
			cnt++;
	}
	printf("%d", cnt);
}