#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a = 1.5, b = 2.4, c;
	while (b - a > 1e-7) {
		c = (a + b) / 2;
		if (((((c - 15) * c + 85) * c - 225) * c + 274) * c > 121) {
			a = c;
		}
		else {
			b = c;
		}
	}
	cout << setprecision(6) << fixed << (a + b) / 2 << endl;
	return 0;
}
