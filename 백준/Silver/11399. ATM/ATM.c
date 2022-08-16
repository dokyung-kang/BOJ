#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int arr[1001];
	int i, j;
	int total = 0;
	int temp;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {	
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < n; i++) 
		total += arr[i] * (n - i);
	
	printf("%d", total);
}