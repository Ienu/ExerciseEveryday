#include <iostream>
using namespace std;
int main() {
	double weight;
	char exp;
	while (cin >> weight >> exp) {
		double price = weight <= 1 ? 0.8 : 0.5 * weight + 0.3;
		if (exp == 'y') {
			price += 2;
		}
		cout << price << endl;
	}
	return 0;
}
