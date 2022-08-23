#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[255];
	int age;
	int weight;

	while (1) {
		scanf("%s %d %d", name, &age, &weight);
		if (name[0] == '#')
			break;
		if (age > 17 || weight >= 80)
			printf("%s Senior\n", name);
		else
			printf("%s Junior\n", name);
	}
}
