#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	while ((n1 != 0) || (n2 != 0)) {
		if (n1 > n2)
			printf("Yes\n");
		else
			printf("No\n");
		scanf("%d %d", &n1, &n2);
	}
}