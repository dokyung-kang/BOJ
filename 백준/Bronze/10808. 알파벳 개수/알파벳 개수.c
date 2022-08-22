#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[101];
	int a[27] = { 0 };
	int i;
	char ch;

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		a[str[i] - 97]++;
	}
	for (i = 0; i < 26; i++)
		printf("%d ", a[i]);
}