#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	char str[1001];
	int i;
	int len;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", str);
		len = strlen(str);
		printf("%c%c\n", str[0], str[len - 1]);
	}
}