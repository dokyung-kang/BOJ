#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[101];
	int i, cnt = 0;

	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'z')
		{
			if (str[i + 1] == '=' || str[i + 1] == '-')
				continue;
		}
		else if (str[i] == 'l' || str[i] == 'n')
		{
			if (str[i + 1] == 'j')
				continue;
		}
		else if (str[i] == 'd')
		{
			if (str[i + 1] == '-')
				continue;
			if (str[i + 1] == 'z' && str[i + 2] == '=')
				continue;
		}
		cnt++;
	}
	printf("%d", cnt);
}