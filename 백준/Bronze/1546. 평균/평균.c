#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, N;
	double num[1000];
	double total = 0.0, average,  max = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%lf", &num[i]);
	for (i = 0; i < N; i++)
		if (max < num[i])
			max = num[i];
	for (i = 0; i < N; i++)
		total += num[i] / max * 100;
	printf("%.2lf", total / N);
}