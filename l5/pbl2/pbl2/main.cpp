#include "Header.h"

int main() {
	Stack*st;
	initStack(st);
	int val, nr;
	cout << "nr: ";
	cin >> nr;
	for (int i = 0;i < nr; ++i) {
		cin >> val;
		push(st, val);
	}
	while (isEmpty(st) != true) {
		cout << top(st) << endl;
		pop(st);
	}
	system("pause");
}