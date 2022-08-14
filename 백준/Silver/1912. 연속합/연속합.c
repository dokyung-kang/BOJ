#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int right_max_sum(int A[], int left, int right)
{
	int max = A[left];
	int sum = 0;
	int i;

	for (i = left; i <= right; i++) {
		sum += A[i];
		if (max < sum)
			max = sum;
	}
	return max;
}

int left_max_sum(int A[], int left, int right)
{
	int max = A[right];
	int sum = 0;
	int i;

	for (i = right; i >= left; i--) {
		sum += A[i];
		if (max < sum)
			max = sum;
	}
	return max;
}

int max_subarray(int* A, int left, int right)
{
	int v1, v2, v3;
	int m;

	if (left >= right)
		return A[right];
	else {
		m = (left + right) / 2;
		v1 = max_subarray(A, left, m);
		v2 = max_subarray(A, m + 1, right);
		v3 = left_max_sum(A, left, m - 1) + right_max_sum(A, m, right);
		if (v1 >= v2 && v1 >= v3)
			return v1;
		else if (v2 >= v1 && v2 >= v3)
			return v2;
		else
			return v3;
	}
}

int main(void)
{
	int i;
	int n;
	int* list;

	scanf("%d", &n);
	
	list = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &list[i]);
	int max = max_subarray(list, 0, n - 1);
	printf("%d\n", max);
}