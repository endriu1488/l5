#include "Header.h"

void initStack(Stack *& S)
{
	S = 0;
}

void push(Stack *& S, int a)
{
	Stack *p = new Stack;
	p->data = a;
	p->leg = S;
	S = p;
}

int pop(Stack *& S)
{	
	int val = S->data;
	Stack *p = S;
	S = p->leg;
		delete p;
	return val;
}

int top(Stack *& S)
{
	return S->data;
}

bool isEmpty(Stack *& S)
{
	return(S==NULL);
}
