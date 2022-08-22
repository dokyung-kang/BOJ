#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int d;
	int i;
	int cnt = 0;


	scanf("%d", &n);
	for (i = 0; i < 5; i++) {
		scanf("%d", &d);
		if (d % 10 == n)
			cnt++;
	}

	printf("%d", cnt);
}