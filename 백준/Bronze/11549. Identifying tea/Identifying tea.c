#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int num;
	int cnt = 0;

	scanf("%d", &n);

	for (i = 0; i < 5; i++) {
		scanf("%d", &num);
		if (n == num)
			cnt++;
	}

	printf("%d", cnt);
	
}
