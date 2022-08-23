#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1;
	int n2;
	int n3;

	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);

	if (n1 == 60 && n2 == 60 && n3 == 60)
		printf("Equilateral");
	else if (n1 + n2 + n3 == 180) {
		if (n1 == n2 && n2 != n3)
			printf("Isosceles");
		else if (n1 == n3 && n1 != n2)
			printf("Isosceles");
		else if (n2 == n3 && n3 != n1)
			printf("Isosceles");
		else
			printf("Scalene");
	}
	else
		printf("Error");
}
