#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	int tempN;
	int total;
	int i;

	scanf("%d", &num);

	for (i = 1; i < num; i++) {
		tempN = i;
		total = tempN;
		while (tempN > 0) {
			total += (tempN % 10);
			tempN /= 10;
		}
		if (total == num) {
			printf("%d", i);
			break;
		}
	}
	if (i == num)
		printf("0");
}