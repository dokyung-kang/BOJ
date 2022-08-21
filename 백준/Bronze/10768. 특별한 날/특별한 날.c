#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m;
	int d;

	scanf("%d", &m);
	scanf("%d", &d);

	if (m < 2)
		printf("Before");
	else if (m > 2)
		printf("After");
	else {
		if (d < 18)
			printf("Before");
		else if (d > 18)
			printf("After");
		else
			printf("Special");
	}
}