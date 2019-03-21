#include "Header.h"

int main() {

	Stack s;
	char x;
	int op1, op2, val;
	initStack(s);
	printf("Enter the expression(eg: 59+3*)\nSingle digit operand and operators only:");

	while ((x = getchar()) != '\n')
	{
		if (isdigit(x))
			push(s, x - 48);		//x-48 for removing the effect of ASCII
		else
		{
			op2 = pop(s);
			op1 = pop(s);
			val = evaluate(x, op1, op2);
			push(s, val);
		}
	}

	val = pop(s);
	printf("\nValue of expression=%d", val);
	system("pause");
}