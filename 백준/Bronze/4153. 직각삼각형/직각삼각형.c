#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;

	scanf("%d %d %d", &n1, &n2, &n3);

	while ((n1 != 0) && (n2 != 0) && (n3 != 0)) {
		if (((n1 * n1) + (n2 * n2)) == (n3 * n3))
			printf("right\n");
		else if (((n1 * n1) + (n3 * n3)) == (n2 * n2))
			printf("right\n");
		else if (((n2 * n2) + (n3 * n3)) == (n1 * n1))
			printf("right\n");
		else
			printf("wrong\n");
		scanf("%d %d %d", &n1, &n2, &n3);

	}
}