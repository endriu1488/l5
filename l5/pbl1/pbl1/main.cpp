#include "Header.h"

int main() {
	Stack S1;
	initStack(S1);
	int val;
	while (isFull(S1)!=true) {
		cin >> val;
		push(S1, val);
	}
	while (isEmpty(S1) != true) {
		cout << top(S1) << endl;
		pop(S1);
	}
	system("pause");
}