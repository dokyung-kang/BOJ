#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int temp = 0;
	int total = 0;
	int found = 0;
	int arr[10] = { 0 };

	for (i = 1; i <= 9; i++) {
		scanf("%d", &arr[i]);
		total += arr[i];
	}

	for (i = 1; i <= 8; i++) {
		for (j = 2; j <= 9; j++) {
			if ((total - (arr[i] + arr[j])) == 100) {
				arr[i] = 101;
				arr[j] = 101;
				found = 1;
				break;
			}
		}
		if (found == 1)
			break;
	}

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 1; i <= 7; i++) {
		printf("%d\n", arr[i]);
	}
}