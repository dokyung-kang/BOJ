#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double n;

	scanf("%lf", &n);

	printf("%.10f\n", 100 / n);
	printf("%.10f", 100 / (100 - n));
}
