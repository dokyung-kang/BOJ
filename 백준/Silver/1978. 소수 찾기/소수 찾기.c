#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int num;
	int cnt = 0;
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num);

		for (j = 2; j < num; j++) 
			if (num % j == 0)
				break;
		if (j == num)
			cnt++;
	}
	printf("%d", cnt);
}