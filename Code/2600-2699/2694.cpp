#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double invPoland() {
	double a, b;
	string str;
	cin >> str;
	if (str == "+" || str == "-" || str == "*" || str == "/") {
		a = invPoland();
		b = invPoland();
		switch (str[0]) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		}
	}
	return stof(str);
}
int main() {
	cout << setprecision(6) << fixed << invPoland() << endl;
	return 0;
}
