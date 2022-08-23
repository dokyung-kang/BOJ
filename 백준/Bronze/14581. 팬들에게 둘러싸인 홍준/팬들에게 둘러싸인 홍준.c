#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char fan[] = { ":fan:" };
	char name[21];
	int i, j;

	scanf("%s", name);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 1 && j == 1)
				printf(":%s:", name);
			else
				printf("%s", fan);
		}
		printf("\n");
	}
}
