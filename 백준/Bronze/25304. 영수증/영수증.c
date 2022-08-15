#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int n;
	int price;
	int cnt;
	int cost;
	int total = 0;

	scanf("%d", &cost);
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d", &price, &cnt);
		total += price * cnt;
	}

	if (total != cost)
		printf("No");
	else
		printf("Yes");
}