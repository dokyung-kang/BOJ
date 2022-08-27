#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[101];
	int cnt = 0;
	int i;

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if (cnt == 10) {
			printf("\n");
			cnt = 0;
		}
		printf("%c", str[i]);
		cnt++;
	}

}

