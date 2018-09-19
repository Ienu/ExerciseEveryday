#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long a, b, c;
	double d = 1.5 - sqrt(5.0) / 2;
	while (cin >> a >> b) {
		if (a < b) {
			c = a;
			a = b;
			b = c;
		}
		cout << (a != (long long)((a - b) / d)) << endl;
	}
	return 0;
}
