#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char arr[101];
	int i, j, flag;

	scanf("%s", arr);
	for (i = 'a'; i <= 'z'; i++)
	{
		flag = 0;
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (i == arr[j])
			{
				printf("%d ", j);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d ", -1);
	}
}