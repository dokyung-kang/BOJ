#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, num = 1, cnt = 1;

	scanf("%d", &n);
	while(1)
	{
		if (n <= num)
		{
			printf("%d\n", cnt);
			break;
		}
		num += 6 * cnt;
		cnt++;
	}
}