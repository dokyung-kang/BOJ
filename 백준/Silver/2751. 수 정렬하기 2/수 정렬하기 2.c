#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
void merge(int A[], int p, int q, int r)
{
	int i = p;
	int j = q + 1;
	int t = 0;
	int k;
	int* list;
	list = (int*)malloc(sizeof(int)*(r - p + 1));

	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			list[t] = A[i];
			i++;
			t++;
		}
		else {
			list[t] = A[j];
			j++;
			t++;
		}
	}
	if (i > q) {
		for (k = j; k <= r; k++)
			list[t++] = A[k];
	}
	else {
		for (k = i; k <= q; k++)
			list[t++] = A[k];
	}
	t = 0;
	for (k = p; k <= r; k++)
		A[k] = list[t++];

	free(list);
}

void mergeSort(int A[], int p, int r)
{
	int q;

	if (p < r) {
		q = (p + r) / 2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}
void printList(int A[], int s, int e)
{
	int i;
	for (i = s; i < e; i++)
		printf("%d\n", A[i]);
}

int main(void)
{
	int n;
	int* A;
	int i;

	scanf("%d", &n);
	A = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	mergeSort(A, 0, n - 1);
	printList(A, 0, n);

	free(A);
}