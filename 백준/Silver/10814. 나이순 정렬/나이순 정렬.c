#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct p {
    int age;
    char name[201];
}Person;

Person  per[100001];

int main(void)
{
    int n;
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d %s", &per[i].age, per[i].name);
    
    for (i = 1; i <= 200; i++)
        for (j = 0; j < n; j++){
            if (i == per[j].age)
                printf("%d %s\n", per[j].age, per[j].name);
        }
}
