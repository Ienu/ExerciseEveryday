#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, i, j;
	cin >> n;
	double sum = 1.0;
	for (i = n; i > 0; --i) {
		double v = 1.0;
		for (j = 1; j <= i; ++j) {
			v *= j;
		}
		sum += 1.0 / v;
	}
	cout << setprecision(15) << fixed << sum << endl;
	return 0;
}
