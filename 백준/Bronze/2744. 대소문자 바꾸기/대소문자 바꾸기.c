#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[101];
	int i;

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			printf("%c", str[i] - 32);
		else if ('A' <= str[i] && str[i] <= 'Z')
			printf("%c", str[i] + 32);
	}
}