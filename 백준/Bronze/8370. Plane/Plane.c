#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int seat[4];
	int total;

	for (i = 0; i < 4; i++)
		scanf("%d", &seat[i]);

	total = seat[0] * seat[1] + seat[2] * seat[3];

	printf("%d", total);
}