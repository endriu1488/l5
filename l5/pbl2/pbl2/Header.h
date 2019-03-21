#pragma once
#include <iostream>
using namespace std;
struct Stack {
	int data;
	Stack *leg;
};

void initStack(Stack *&S);
void push(Stack *&S, int a);
int pop(Stack *&S);
int top(Stack *&S);
bool isEmpty(Stack *&S);