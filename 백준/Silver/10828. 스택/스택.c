#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10001	//스택의 최대 크기

typedef struct {
	int data[MAX_STACK_SIZE];	//1차원 배열
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
void push(StackType* s, int item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

//삭제 함수
int pop(StackType* s)
{
	if (is_empty(s)) {
		return -1;
	}
	else
		return s->data[(s->top)--];
}

//피크 함수
int peek(StackType* s)
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
	int n = 0;
	char str[100] = "";
	int pushN = 0;

	init_stack(&s);
	
	scanf("%d", &n);

	while (n != 0) {
		scanf("%s", str);
		if (strcmp(str, "push") == 0) {
			scanf("%d", &pushN);
			push(&s, pushN);
		}
		if (strcmp(str, "pop") == 0) {
			printf("%d\n", pop(&s));
		}
		if (strcmp(str, "size") == 0) {
			printf("%d\n", s.top + 1);
		}
		if (strcmp(str, "empty") == 0) {
			printf("%d\n", is_empty(&s));
		}
		if (strcmp(str, "top") == 0) {
			printf("%d\n", peek(&s));
		}
		n--;
	}
	return 0;
}