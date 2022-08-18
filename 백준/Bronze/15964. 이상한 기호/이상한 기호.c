#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long calculate(long long n1, long long n2)
{
	return (n1 + n2) * (n1 - n2);
}

int main(void)
{
	long long A, B;

	scanf("%lld %lld", &A, &B);

	printf("%lld", calculate(A, B));

}