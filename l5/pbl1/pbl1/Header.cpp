#include "Header.h"

void initStack(Stack & S)
{
	S.varf = -1;
}

void push(Stack & S, int a)
{
	S.varf++;
	S.stack[S.varf] = a;
}

int pop(Stack & S)
{
	int val = S.stack[S.varf];
	S.varf--;
	return val;
}

int top(Stack S)
{
	int val = S.stack[S.varf];
	return val;
}

bool isEmpty(Stack S)
{
	return S.varf == -1;
}

bool isFull(Stack S)
{
	return S.varf == dimMax - 1;
}

