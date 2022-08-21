#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1;
	int n2;
	int total1 = 0;
	int total2 = 0;
	int i;

	for (i = 0; i < 4; i++) {
		scanf("%d", &n1);
		total1 += n1;
	}
	for (i = 0; i < 4; i++) {
		scanf("%d", &n2);
		total2 += n2;
	}

	if (total1 >= total2)
		printf("%d", total1);
	else
		printf("%d", total2);
}