#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, cnt;
	scanf("%d", &n);
	for (cnt = 0; n > 0; cnt++)
	{
		if (n % 5 == 0)
			n -= 5;
		else if (n % 3 == 0)
			n -= 3;
		else if (n > 5)
			n -= 5;
		else
		{
			cnt = -1;
			break;
		}
	}
	printf("%d", cnt);
}