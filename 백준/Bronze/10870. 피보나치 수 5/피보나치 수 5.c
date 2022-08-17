#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, n1, n2, n3;

	scanf("%d", &num);

	n1 = 0;
	n2 = 1;
	if (num == 0)
		printf("%d", n1);
	else if (num == 1)
		printf("%d", n2);
	else
	{
		for (i = 0; i < num - 1; i++)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		printf("%d", n3);
	}
}