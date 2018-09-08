#include <iostream>
using namespace std;
int main() {
	int a, b, i;
	char op;
	while (cin >> a >> op) {
		long c = 1;
		bool er = false;
		if (op == '!') {
				for (i = 2; i <= a; ++i) {
					c *= i;
				}
		}
		else {
			cin >> b;
			switch (op) {
			case '+':
				c = a + b;
				break;
			case '-':
				c = a - b;
				break;
			case '*':
				c = a * b;
				break;
			case '/':
				if (b == 0) {
					er = true;
				}
				else {
					c = a / b;
				}
				break;
			case '%':
				if (b == 0) {
					er = true;
				}
				else {
					c = a % b;
				}
			}
		}
		if (er) {
			cout << "error" << endl;
		}
		else {
			cout << c << endl;
		}
	}
	return 0;
}
