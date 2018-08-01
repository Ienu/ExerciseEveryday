#include <iostream>
#include <iomanip>
using namespace std;
double f(double x, double a) {
	return x * x * x + x + a;
}
int main() {
	int n, i;
	float a, b;
	double x1, x2, x, y;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> a >> b;
		x1 = -a;
		x2 = 0;
		while(true) {
			x = (x2 + x1) / 2;
			y = f(x, a);
			if (x2 - x1 < b) {
				cout << setprecision(6) << fixed << x << " " << y << endl;
				break;
			}
			else if (y > 0) {
				x2 = x;
			}
			else if (y < 0) {
				x1 = x;
			}
		}
	}
	return 0;
}
