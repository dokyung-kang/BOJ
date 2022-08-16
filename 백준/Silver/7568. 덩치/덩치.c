#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	int n;
	int* h;
	int* w;
	int* m;

	scanf("%d", &n);

	h = (int*)malloc(sizeof(int) * n);
	w = (int*)malloc(sizeof(int) * n);
	m = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d %d", &w[i], &h[i]);
		m[i] = 1;
	}

	for (i = 0; i < n; i++) 
		for (j = 0; j < n; j++) 
			if ((h[i] < h[j]) && (w[i] < w[j]))
				m[i]++;
	
	for (i = 0; i < n; i++)
		printf("%d ", m[i]);
}