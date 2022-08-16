#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char sentence;

	while (scanf("%c", &sentence) != EOF) {
		printf("%c", sentence);
	}
}