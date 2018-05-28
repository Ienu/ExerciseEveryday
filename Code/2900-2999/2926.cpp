#include <iostream>
using namespace std;
int main() {
	long a, b;
	char op;
	while (cin >> a >> op >> b) {
		cout << ((op == '+') ? a + b : a - b) << endl;
	}
	return 0;
}
