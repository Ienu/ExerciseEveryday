#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a = 10, b = 0, x;
	while (a - b > 1e-10) {
		x = (a + b) / 2;
		if (x * x * x - 5 * x * x + 10 * x - 80 > 0) {
			a = x;
		}
		else {
			b = x;
		}
	}
	cout << setprecision(9) << fixed << x << endl;
	return 0;
}
