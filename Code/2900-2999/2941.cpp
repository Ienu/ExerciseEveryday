#include <iostream>
using namespace std;
int main() {
	for (int a = 2; a < 100; ++a) {
		for (int b = a; b < 100; ++b) {
			for (int c = b + 1; c <= 100; ++c) {
				if (a * a + b * b == c * c) {
					cout << a << "*" << a << " + " << b << "*" << b 
						<< " = " << c << "*" << c << endl;
				}
			}
		}
	}
	return 0;
}
