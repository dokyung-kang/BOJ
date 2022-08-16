#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int d1, d2, d3;
	int price;

	scanf("%d %d %d", &d1, &d2, &d3);

	//조건 1
	if ((d1 == d2) && (d2 == d3))
		price = 10000 + d1 * 1000;
	else {
		//조건 2
		if ((d1 == d2) && (d1 != d3))
			price = 1000 + d1 * 100;
		else if((d1 != d2) && (d2 == d3))
			price = 1000 + d2 * 100;
		else if((d1 == d3) && (d1 != d2))
			price = 1000 + d1 * 100;
		else { //조건 3
			if ((d1 >= d2) && (d1 >= d3))
				price = d1 * 100;
			else if ((d2 >= d1) && (d2 >= d3))
				price = d2 * 100;
			else
				price = d3 * 100;
		}
	}
	printf("%d", price);
}