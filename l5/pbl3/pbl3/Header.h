#pragma once
#include <iostream>
using namespace std;

#define dimMax 10
struct Stack {
	int varf;
	int stack[dimMax];
};

void initStack(Stack& S);
void push(Stack& S, int a);
int pop(Stack& S);
int top(Stack S);
bool isEmpty(Stack S);
bool isFull(Stack S);
int evaluate(char x, int op1, int op2)
{
	if (x == '+')
		return(op1 + op2);
	if (x == '-')
		return(op1 - op2);
	if (x == '*')
		return(op1*op2);
	if (x == '/')
		return(op1 / op2);
	if (x == '%')
		return(op1%op2);
};

