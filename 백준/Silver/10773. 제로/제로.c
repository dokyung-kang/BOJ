#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100001	//스택의 최대 크기

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];	//1차원 배열
	int top;
} StackType;

//스택 초기화 함수
void init_stack(StackType* s)
{
	s->top = -1;
}

//공백 상태 검출 함수
int is_empty(StackType* s)
{
	return (s->top == -1);
}

//포화 상태 검출 함수
int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}

//삽입 함수
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

//삭제 함수
element pop(StackType* s)
{
	if (is_empty(s)) {
		return -1;
	}
	else
		return s->data[(s->top)--];
}

//피크 함수
element peek(StackType* s)
{
	if (is_empty(s)) {
		return -1;
	}
	else
		return s->data[s->top];
}

int main(void)
{
	StackType s;
	int n;
	int num;
	int sum = 0;

	init_stack(&s);

	scanf("%d", &n);

	while (n != 0) {
		scanf("%d", &num);
		if (num != 0)
			push(&s, num);
		else
			pop(&s);
		n--;
	}
	while (s.top != -1) {
		sum += peek(&s);
		pop(&s);
	}
	printf("%d", sum);
	return 0;
}