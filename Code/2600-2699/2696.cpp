#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, i, num1, num2, result;
	string op;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> num1 >> op >> num2;
		if (op == "mul") {
			result = num1 * num2;
		}
		else if (op == "div") {
			result = num1 / num2;
		}
		else if (op == "add") {
			result = num1 + num2;
		}
		else if (op == "sub") {
			result = num1 - num2;
		}
		else if (op == "mod") {
			result = num1 % num2;
		}
		cout << result << endl;
	}
	return 0;
}
