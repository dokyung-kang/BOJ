#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int L;
	int A;
	int B;
	int C;
	int D;
	int aDay;
	int bDay;

	scanf("%d", &L);
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);

	aDay = A / C;
	bDay = B / D;
	
	if (A % C > 0)
		aDay += 1;
	if (B % D > 0)
		bDay += 1;

	if (aDay > bDay)
		printf("%d", L - aDay);
	else
		printf("%d", L - bDay);
}
